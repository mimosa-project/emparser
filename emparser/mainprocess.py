# -*- coding: utf-8 -*-

"""Mainprocess module for Extended Mizar Parser (emparser).

This module is used for mainprocess for Extended Mizar Parser.
Mainprocess means the process of ANTLR-generated parser.

Example:
    See test/test_mainprocess

Todo:


"""

from emparser.antlr.MizarLexer import MizarLexer
from emparser.antlr.MizarParser import MizarParser
from emparser.MizarXMLBuilder import MizarXMLBuilder
import antlr4
from antlr4.tree.Tree import *

class Parser:
    def __init__(self):
        pass

    def parse(self, text:str, position_map=None, rule='article'):
        input = antlr4.InputStream(text)
        lexer = MizarLexer(input)
        tokens = antlr4.CommonTokenStream(lexer)
        parser = MizarParser(tokens)
        tree = getattr(parser, rule)()

        xmlBuilder = MizarXMLBuilder(position_map)
        walker = ParseTreeWalker()
        walker.walk(xmlBuilder, tree)
        return xmlBuilder.xmlRoot

    def parse_environment(self, text:str, position_map=None):
        return self.parse(text, position_map, 'environmentDeclaration')

    def parse_text_proper(self, text:str, position_map=None):
        return self.parse(text, position_map, 'textProper')

    def parse_theorem(self, text:str, position_map=None):
        return self.parse(text, position_map, 'theorem')

