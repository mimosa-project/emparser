# -*- coding: utf-8 -*-

"""Mainprocess module for Extended Mizar Parser (emparser).

This module is used for mainprocess for Extended Mizar Parser.
Mainprocess means the process of ANTLR parser.

Example:
    See test/test_mainprocess

Todo:


"""

from antlr.MizarLexer import MizarLexer
from antlr.MizarParser import MizarParser
from emparser.MizarXMLBuilder import MizarXMLBuilder
import antlr4
from antlr4.tree.Tree import *

class Parser:
    def __init__(self):
        pass

    def parse(self, data:str, rule = 'article'):
        input = antlr4.InputStream(data)
        lexer = MizarLexer(input)
        tokens = antlr4.CommonTokenStream(lexer)
        parser = MizarParser(tokens)
        tree = getattr(parser, rule)()

        xmlBuilder = MizarXMLBuilder()
        walker = ParseTreeWalker()
        walker.walk(xmlBuilder, tree)
        return xmlBuilder.topNode

    def parse_environment(self, data: str):
        return self.parse(data, 'environmentDeclaration')

    def parse_text_proper(self, data: str):
        return self.parse(data, 'textProper')

    def parse_theorem(self, data: str):
        return self.parse(data, 'theorem')

