# -*- coding: utf-8 -*-

"""Postprocess module for Extended Mizar Parser (emparser).

This module is used for postprocess for Extended Mizar Parser.
Postprocess means the process after ANTLR-generated parser.

Example:
    See test/test_postprocess

Todo:


"""

import xml.etree.ElementTree as ET

class EnvCSTHandler:
    """Environment CST (concrete syntax tree) Handler.
    
    The purpose of this class is to handle Envoronment part CST
    produced by ANTLR-generated parser. Its roles are:
    extract information, manipulate CST, and so on.
    """
    @classmethod
    def extract_vocablaries(cls, tree):
        """Extract vocabulary files from environment part

        Args:
            tree (ET.ElementTree): xml tree of environment part,
                which is produced by ANTLR-generated parser.
        
        Returns:
            list[str]: list of vocabulary Mizar files
        """
        nodes = tree.findall('.//vocabularyName')
        return [node.get('spelling') for node in nodes]


class BodyCSTHandler:
    pass


class EnvCST2AST:
    """XML Converter from CST to AST of environment part.
    
    The purpose of this class is to provide converter from
    CST (concrete syntax tree) to AST (abstract syntax tree)
    for environment part. 

    Args:
        cst_tree (ET.ElementTree): CST tree produced
            by mainprocess.parse()
    
    Returns:
        ET.ElementTree: AST tree
    """
    def convert(self, cst_tree):
        """Convert CST to AST

        Args:
            cst_tree (ET.ElementTree): CST tree produced
                by mainprocess.parse()
        
        Returns:
            ET.ElementTree: AST tree
        """
        
        environ = ET.Element('environ')
        ast_tree = ET.ElementTree(environ)

        _directives = cst_tree.findall('.//directive')
        for _directive in _directives:
            directive_name = self.get_directive_name(_directive)
            directive = ET.SubElement(environ, 'directive', {'name': directive_name})
            if directive_name == 'vocabularies':
                _names = _directive.findall('./vocabularyDirective/vocabularyName')
            elif directive_name == 'requirements':
                _names = _directive.findall('./requirementDirective/requirement')
            else:
                _names = _directive.findall('./libraryDirective/articleName')
            
            for _name in _names:
                article_name = _name.get('spelling')
                col = _name.get('col')
                line = _name.get('line')
                ET.SubElement(directive, 'ident',
                    {'name': article_name, 'line': line, 'col': col})
        
        return ast_tree

    def get_directive_name(self, _directive):
        """Get directive name from directive node

        Args:
            _directive (ET.Element): CST directive node
        
        Returns:
            str: directive name
        """
        _keyword = _directive.find('.//keyword')
        return _keyword.get('spelling')

class BodyCST2AST:
    pass