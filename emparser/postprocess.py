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
            self.convert_environ(_root, root)
        elif _root.tag == 'textProper':
            self.convert_text_proper(_root, root)
        elif _root.tag == 'textItem':
            self.convert_text_item(_root, root)
        else:
            print("There is no corresponding converter for {}".format(_root.tag))
        
        return root.findall('./*')

    def convert_environ(self, _environ, parent):
        """Convert environment part of CST to AST

        Structure: environ / (directive  / (ident *) ) *
            environ <- environmentDeclaration
            directive <- directive
            ident <- vocabularyDirective/vocabularyName,
                     requirementDirective/requirement,
                     libraryDirective/articleName

        Args:
            _environ (ET.Element): CST node
            parent (ET.Element): AST parent node
        
        Returns:
            list[ET.Element]: corresponding AST nodes
        """
        environ = ET.SubElement(parent, 'environ')
        _directives = _environ.findall('.//directive')
        for _directive in _directives:
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

    def convert_text_proper(self, _text_proper, parent):
        """Convert text proper part of CST to AST

        Structure: ( sectionPragma <textItem> * ) * 
            sectionPragma <- section/'begin'
            <textItem> <- section/textItem

        Args:
            _text_proper (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        text_proper = ET.SubElement(parent, 'textProper')
        _sections = _text_proper.findall('./section')
        for _section in _sections:
            _begin = _section.find('./keyword')
            ET.SubElement(text_proper, 'sectionPragma', attrib=self.std_attrib(_begin))
            
            _text_items = _section.findall('./textItem')
            for _text_item in _text_items:
                self.convert_text_item(_text_item, text_proper)

    def convert_text_item(self, _text_item, parent):
        """Convert textItem CST to AST

        Structure: (<reservation> | <definitionalItem> | <registrationItem> |
                    <notationItem> | <theorem> | <schemeItem> | <auxiliaryItem>)

        Args:
            _text_item (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        _children = _text_item.findall('./*')
        for _child in _children:
            if _child.tag == 'reservation':
                self.convert_reservation(_child, parent)
            elif _child.tag == 'definitionalItem':
                self.convert_definitional_item(_child, parent)
            elif _child.tag == 'registrationItem':
                self.convert_registration(_child, parent)
            elif _child.tag == 'notationItem':
                self.convert_notation(_child, parent)
            elif _child.tag == 'theorem':
                self.convertTheorem(_child, parent)
            elif _child.tag == 'schemeItem':
                self.convert_scheme(_child, parent)
            elif _child.tag == 'auxiliaryItem':
                self.convert_auxiliary(_child, parent)
            else:
                print("There is no corresponding converter for {}".format(_child.tag))

    def convert_reservation(self, _reservation, parent):
        """Convert reservation CST to AST

        Structure: reservation / (variable + <<typeExpression>>)
            reservation <- reservationSegment
            variable <- reservationSegment/reservedIdentifier
            <typeExpression> <- typeExpression

        Args:
            _reservation (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        _reservation_segments = _reservation.findall('./reservationSegment')
        for _reservation_segment in _reservation_segments:
            reservation = ET.SubElement(parent, 'reservation')
            _variables = _reservation_segment.findall('./reservedIdentifiers/reservedIdentifier')
            for _variable in _variables:
                ET.SubElement(reservation, 'variable', attrib=self.std_attrib(_variable))
            
            _type_expression = _reservation_segment.find('./typeExpression')
            self.convert_type_expression(_type_expression, reservation)

    def convert_definitional_item(self, _definitional_item, parent):
        _definitional_block = _definitional_item.find('./definitionalBlock')
        # definitional_block = ET.SubElement(parent, 'definitionalBlock')
        # _definitional_block.findall()
        # TODO

    def convert_registration(self, _registration, parent):
        _registrational_block = _registration.find('./registrationBlock')
        _registration_keyword = _registrational_block.find('./keyword[@spelling="registration"]')
        ET.SubElement(parent, 'registration', attrib=self.std_attrib(_registration_keyword))
        # TODO

    def convert_notation(self, _notation, parent):
        _notation_block = _notation.find('./notationBlock')
        _notation_keyword = _notation_block.find('./keyword[@spelling="notation"]')
        ET.SubElement(parent, 'notation', attrib=self.std_attrib(_notation_keyword))
        # TODO

    def convertTheorem(self, _theorem, parent):
        """Convert theorem CST to AST

        Args:
            _theorem (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        _theorem_keyword = _theorem.find('./keyword[@spelling="theorem"]')
        ET.SubElement(parent, 'theorem', attrib=self.std_attrib(_theorem_keyword))
        # TODO

    def convert_scheme(self, _scheme, parent):
        _scheme_block = _scheme.find('./schemeBlock')
        _scheme_keyword = _scheme_block.find('./keyword[@spelling="scheme"]')
        ET.SubElement(parent, 'scheme', attrib=self.std_attrib(_scheme_keyword))
        # TODO
    
    def convert_auxiliary(self, _auxiliary, parent):
        ET.SubElement(parent, 'auxiliary')
        # TODO

    def convert_type_expression(self, _type_expression, parent):
        """Convert type expression CST to AST

        Structure: typeExpression / (<adjective> * <radixType>)
            typeExpression <- typeExpression
            <adjective> <- adjective
            <radixType> <- radixType

        Args:
            _reservation (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        type_expression = ET.SubElement(parent, 'typeExpression')
        _adjectives = _type_expression.findall('./adjective')
        for _adjective in _adjectives:
            self.convert_adjective(_adjective, type_expression)
        
        _radix_type = _type_expression.find('.//radixType')
        self.convert_radix_type(_radix_type, type_expression)
    
    def convert_adjective(self, _adjective, parent):
        """Convert adjective CST to AST

        Structure: adjective / (attributeNagation ? <termExpression> * attributeSymbol)
            attributeNagation <- 'non'
            <termExpression> <- adjectiveArguments/termExpressionList/termExpression
            attributeSymbol <- attributeSymbol

        Args:
            _adjective (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        _non = _adjective.find('./keyword[@spelling="non"]')
        if _non is not None:
            ET.SubElement(parent, 'attributeNegation', attrib=self.std_attrib(_non))
        
        _term_expressions = _adjective.findall('./adjectiveArguments/termExpressionList/termExpression')
        for _term_expression in _term_expressions:
            self.convert_term_expression(_term_expression, parent)
        
        _attribute_symbol = _adjective.find('./attributeSymbol')
        ET.SubElement(parent, 'attributeSymbol', attrib=self.std_attrib(_attribute_symbol))

    def convert_radix_type(self, _radix_type, parent):
        """Convert radixType CST to AST

        Structure: (modeSymbol <termExpression> *) | (structureSymbol <termExpression> *)
            modeSymbol <- modeSymbol
            structureSymbol <- structureSymbol
            <termExpression> <- termExpressionList/termExpression

        Args:
            _radix_type (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        _mode_symbol = _radix_type.find('./modeSymbol')
        if _mode_symbol is not None:
            ET.SubElement(parent, 'modeSymbol', attrib=self.std_attrib(_mode_symbol))

        _structure_symbol = _radix_type.find('./structureSymbol')
        if _structure_symbol is not None:
            ET.SubElement(parent, 'structureSymbol', attrib=self.std_attrib(_structure_symbol))
        
        _term_expressions = _radix_type.findall('./termExpressionList/termExpression')
        for _term_expression in _term_expressions:
            self.convert_term_expression(_term_expression, parent)

    def convert_term_expression(self, _term_expression, parent):
        """Convert termExpression CST to AST

        Structure: termExpression / 

        Args:
            _term_expression (ET.Element): CST node
            parent (ET.Element): AST parent node
        """
        term_expression = ET.SubElement(parent, 'termExpression')

        _children = _term_expression.findall('./*')
        assert len(_children) > 0
        for _child in _children:
            if _child.tag == 'arguments':
                unitaryTerm = _child.find('./unitaryTerm')
            elif _child.tag == 'functorSymbol':
                pass
            elif _child.tag == 'termExpression':
                pass
            elif _child.tag == 'unitaryTerm':
                pass

        # TODO
        # Adjust functor priority

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