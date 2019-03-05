# -*- coding: utf-8 -*-

"""Postprocess module for Extended Mizar Parser (emparser).

This module is used for postprocess for Extended Mizar Parser.
Postprocess means the process after ANTLR-generated parser.

Example:
    See test/test_postprocess

Todo:


"""

import re
import lxml.etree as ET


SYMBOL_PREFIX_REG = re.compile(r"^(__[GKLMORUV]\d*_)", re.ASCII)
"""re: Regex object to specify symbol prefix.
"""

SYMBOL_TAGS = {'predicateSymbol', 'functorSymbol', 'leftFunctorBracket'
    'rightFunctorBracket', 'attributeSymbol', 'modeSymbol', 'structureSymbol',
    'selectorSymbol'}
"""set[str]: Symbol tags in CST.
"""

class CSTHandler:
    """CST (concrete syntax tree) Handler.
    
    The purpose of this class is to handle CST
    produced by ANTLR-generated parser. Its roles are:
    extract information, manipulate CST, and so on.
    """
    @classmethod
    def extract_vocablaries(cls, _node):
        """Extract vocabulary files in environment part
        Args:
            _node (ET.Element): xml node includes environment part,
                which is produced by ANTLR-generated parser.
        
        Returns:
            list[str]: list of vocabulary Mizar files
        """
        _vocablaries = _node.findall('.//vocabularyName')
        return [_vocablary.get('spelling') for _vocablary in _vocablaries]


class CST2AST:
    """XML Converter from CST to AST.
    
    The purpose of this class is to provide converter from
    CST (concrete syntax tree) to AST (abstract syntax tree).

    Naming rule :
        convert_abc()   ->  create an unique top node in the function
        _convert_abc()  ->  Do not create an unique top node in the function

        node   -> AST node
        _node  -> CST node
    """
    def convert(self, _root):
        """Convert CST to AST

        Args:
            _root (ET.Element): CST root node produced
                by mainprocess.parse()
        
        Returns:
            list[ET.Element]: corresponding AST nodes
        """
        root = ET.Element('root')
        if _root.tag == 'environmentDeclaration':
            self.convert_environ(root, _root)
        elif _root.tag == 'textProper':
            self.convert_text_proper(root, _root)
        elif _root.tag == 'textItem':
            self._convert_text_item(root, _root)
        else:
            print("There is no corresponding converter for {}".format(_root.tag))
        
        return root.findall('./*')

    def convert_environ(self, parent, _environ):
        """Convert environment part of CST to AST

        Structure: environ / (directive  / (ident *) ) *
            environ <- environmentDeclaration
            directive <- directive
            ident <- vocabularyDirective/vocabularyName,
                     requirementDirective/requirement,
                     libraryDirective/articleName

        Args:
            parent (ET.Element): AST parent node
            _environ (ET.Element): CST node
        
        Returns:
            list[ET.Element]: corresponding AST nodes
        """
        environ = ET.SubElement(parent, 'environ')
        for _directive in _environ:
            if _directive.tag != 'directive':
                continue
            _keyword = _directive.find('.//keyword')
            directive_name = _keyword.get('spelling')
            directive = ET.SubElement(environ, 'directive', {'name': directive_name})
            if directive_name == 'vocabularies':
                _names = _directive.findall('./vocabularyDirective/vocabularyName')
            elif directive_name == 'requirements':
                _names = _directive.findall('./requirementDirective/requirement')
            else:
                _names = _directive.findall('./libraryDirective/articleName')
            
            for _name in _names:
                ET.SubElement(directive, 'ident', attrib=self.std_attrib(_name))

    def convert_text_proper(self, parent, _text_proper):
        """Convert text proper part of CST to AST

        Structure: textProper / ( sectionPragma <textItem> * ) * 
            sectionPragma <- section/'begin'
            <textItem> <- section/textItem

        Args:
            parent (ET.Element): AST parent node
            _text_proper (ET.Element): CST node
        """
        text_proper = ET.SubElement(parent, 'textProper')
        for _section in _text_proper:
            _begin = _section[0]
            ET.SubElement(text_proper, 'sectionPragma', attrib=self.std_attrib(_begin))
            
            for _text_item in _section[1:]:
                self._convert_text_item(text_proper, _text_item)

    def _convert_text_item(self, parent, _text_item):
        """Convert textItem CST to AST

        Structure: (<reservation> | <definitionalItem> | <registrationItem> |
                    <notationItem> | <theorem> | <schemeItem> | <auxiliaryItem>)

        Args:
            parent (ET.Element): AST parent node
            _text_item (ET.Element): CST node
        """
        for _child in _text_item:
            if _child.tag == 'reservation':
                self._convert_reservation(parent, _child)
            elif _child.tag == 'definitionalItem':
                self.convert_definitional_item(parent, _child)
            elif _child.tag == 'registrationItem':
                self.convert_registration(parent, _child)
            elif _child.tag == 'notationItem':
                self.convert_notation(parent, _child)
            elif _child.tag == 'theorem':
                self.convert_theorem(parent, _child)
            elif _child.tag == 'schemeItem':
                self.convert_scheme(parent, _child)
            elif _child.tag == 'auxiliaryItem':
                self.convert_auxiliary(parent, _child)
            else:
                print("There is no corresponding converter for {}".format(_child.tag))

    def _convert_reservation(self, parent, _reservation):
        """Convert reservation CST to AST

        Structure: (reservation / (variable + <<typeExpression>>)) +
            reservation <- reservationSegment
            variable <- reservationSegment/reservedIdentifier
            <typeExpression> <- typeExpression

        Args:
            parent (ET.Element): AST parent node
            _reservation (ET.Element): CST node
        """
        for _reservation_segment in _reservation:
            if _reservation_segment.tag != 'reservationSegment':
                continue
            reservation = ET.SubElement(parent, 'reservation')

            _variables = _reservation_segment.findall('./reservedIdentifiers/reservedIdentifier')
            for _variable in _variables:
                ET.SubElement(reservation, 'variable', attrib=self.std_attrib(_variable))
            
            _type_expression = _reservation_segment.find('./typeExpression')
            self.convert_type_expression(reservation, _type_expression)

    def convert_definitional_item(self, parent, _definitional_item):
        # TODO
        _definitional_block = _definitional_item.find('./definitionalBlock')
        # definitional_block = ET.SubElement(parent, 'definitionalBlock')
        # _definitional_block.findall()

    def convert_registration(self, parent, _registration):
        # TODO
        _registrational_block = _registration.find('./registrationBlock')
        _registration_keyword = _registrational_block.find('./keyword[@spelling="registration"]')
        ET.SubElement(parent, 'registration', attrib=self.std_attrib(_registration_keyword))

    def convert_notation(self, parent, _notation):
        # TODO
        _notation_block = _notation.find('./notationBlock')
        _notation_keyword = _notation_block.find('./keyword[@spelling="notation"]')
        ET.SubElement(parent, 'notation', attrib=self.std_attrib(_notation_keyword))

    def convert_theorem(self, parent, _theorem):
        """Convert theorem CST to AST

        Args:
            parent (ET.Element): AST parent node
            _theorem (ET.Element): CST node
        """
        _theorem_keyword = _theorem.find('./keyword[@spelling="theorem"]')
        ET.SubElement(parent, 'theorem', attrib=self.std_attrib(_theorem_keyword))
        # TODO

    def convert_scheme(self, parent, _scheme):
        _scheme_block = _scheme.find('./schemeBlock')
        _scheme_keyword = _scheme_block.find('./keyword[@spelling="scheme"]')
        ET.SubElement(parent, 'scheme', attrib=self.std_attrib(_scheme_keyword))
        # TODO
    
    def convert_auxiliary(self, parent, _auxiliary):
        ET.SubElement(parent, 'auxiliary')
        # TODO

    def convert_type_expression(self, parent, _type_expression):
        """Convert type expression CST to AST

        Structure: typeExpression / (<adjective> * <radixType>)
            typeExpression <- typeExpression
            <adjective> <- adjective
            <radixType> <- radixType

        Args:
            parent (ET.Element): AST parent node
            _reservation (ET.Element): CST node
        """
        type_expression = ET.SubElement(parent, 'typeExpression')
        _adjectives = _type_expression.findall('./adjective')
        for _adjective in _adjectives:
            self.convert_adjective(type_expression, _adjective)
        
        _radix_type = _type_expression.find('.//radixType')
        self.convert_radix_type(type_expression, _radix_type)
    
    def convert_adjective(self, parent, _adjective):
        """Convert adjective CST to AST

        Structure: adjective / (attributeNagation ? <termExpression> * attributeSymbol)
            attributeNagation <- 'non'
            <termExpression> <- adjectiveArguments/termExpressionList/termExpression
            attributeSymbol <- attributeSymbol

        Args:
            parent (ET.Element): AST parent node
            _adjective (ET.Element): CST node
        """
        adjective = ET.SubElement(parent, 'adjective')

        _non = _adjective.find('./keyword[@spelling="non"]')
        if _non is not None:
            ET.SubElement(adjective, 'attributeNegation', attrib=self.std_attrib(_non))
        
        _term_expressions = _adjective.findall('./adjectiveArguments/termExpressionList/termExpression')
        for _term_expression in _term_expressions:
            self.convert_term_expression(adjective, _term_expression)
        
        _attribute_symbol = _adjective.find('./attributeSymbol')
        ET.SubElement(adjective, 'attributeSymbol', attrib=self.std_attrib(_attribute_symbol))

    def convert_radix_type(self, parent, _radix_type):
        """Convert radixType CST to AST

        Structure: (modeSymbol / <termExpression> *)
                 | (structureSymbol / <termExpression> *)
            modeSymbol <- modeSymbol
            structureSymbol <- structureSymbol
            <termExpression> <- termExpressionList/termExpression

        Args:
            parent (ET.Element): AST parent node
            _radix_type (ET.Element): CST node
        """
        _mode_or_struct = _radix_type[0]
        mode_or_struct = ET.SubElement(parent, _mode_or_struct.tag,
                            attrib=self.std_attrib(_mode_or_struct))

        _term_expressions = _radix_type.findall('./termExpressionList/termExpression')
        for _term_expression in _term_expressions:
            self.convert_term_expression(mode_or_struct, _term_expression)

    def convert_term_expression(self, parent, _term_expression):
        """Convert termExpression CST to AST

        Structure: termExpression / 

        Args:
            parent (ET.Element): AST parent node
            _term_expression (ET.Element): CST node
        """
        term_expression = ET.SubElement(parent, 'termExpression')
        self._convert_term_expression(term_expression, _term_expression)

    def _convert_term_expression(self, parent, _term_expression):
        """Convert termExpression CST to AST

        Structure: termExpression / 

        Args:
            parent (ET.Element): AST parent node
            _term_expression (ET.Element): CST node
        """
        # TODO
        # Adjust functor priority
        for _child in _term_expression:
            if _child.tag == 'arguments':
                if _child[0].tag == 'unitaryTerm':
                    self.convert_unitary_term(parent, _child[0])
                else:
                    self.convert_term_expression_list(parent, _child[1])
            elif _child.tag == 'functorSymbol':
                ET.SubElement(parent, 'functorSymbol', attrib=self.std_attrib(_child))
            elif _child.tag == 'termExpression':
                # TODO
                self.convert_term_expression(parent, _child[1])
            elif _child.tag == 'unitaryTerm':
                self.convert_unitary_term(parent, _child)

    def convert_term_expression_list(self, parent, _term_expression_list):
        """Convert termExpressionList CST to AST

        Structure: termExpressionList / <termExpression> *

        Args:
            parent (ET.Element): AST parent node
            _term_expression_list (ET.Element): CST node
        """
        term_expression_list = ET.SubElement(parent, 'termExpressionList')
        self._convert_term_expression_list(term_expression_list, _term_expression_list)

    def _convert_term_expression_list(self, parent, _term_expression_list):
        """Convert termExpressionList CST to AST

        Structure: <termExpression> *

        Args:
            parent (ET.Element): AST parent node
            _term_expression_list (ET.Element): CST node
        """
        for _term_expression in _term_expression_list:
            self.convert_term_expression(parent, _term_expression)
    
    def convert_unitary_term(self, _unitary_term, parent):
        pass

    def std_attrib(self, node):
        spelling = node.get('spelling')
        if node.tag in SYMBOL_TAGS:
            m = re.match(SYMBOL_PREFIX_REG, spelling)
            if m is not None:
                prefix = m.group(1)
                spelling = spelling[len(prefix):]
        
        return {'spelling': spelling,
                'line': node.get('line'),
                'col': node.get('col')}