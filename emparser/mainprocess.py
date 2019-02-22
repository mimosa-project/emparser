# -*- coding: utf-8 -*-

"""Mainprocess module for Extended Mizar Parser (emparser).

This module is used for mainprocess for Extended Mizar Parser.
Mainprocess means the process of ANTLR parser.

Example:
    See test/test_mainprocess

Todo:


"""

from emparser.MizarLexer import MizarLexer
from emparser.MizarParser import MizarParser
from emparser.MizarVisitor import MizarVisitor
import antlr4


class Parser:
    def __init__(self):
        pass

    def parse(self, data:str, rule = 'article'):
        input = antlr4.InputStream(data)
        lexer = MizarLexer(input)
        stream = antlr4.CommonTokenStream(lexer)
        parser = MizarParser(stream)
        tree = getattr(parser, rule)()
        visitor = MizarVisitor()
        result = visitor.visit(tree)
        return result

    def parse_theorem(self, data: str):
        return self.parse(data, 'theorem')

