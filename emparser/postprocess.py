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
    """
    def convert(self, cst_tree):
        pass


class BodyCST2AST:
    pass