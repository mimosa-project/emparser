# -*- coding: utf-8 -*-

"""Mainprocess module for Extended Mizar Parser (emparser).

This module is used for mainprocess for Extended Mizar Parser.
Mainprocess means the process of ANTLR-generated parser.

Example:
    See test/test_mainprocess

Todo:


"""

import sys, re
from .antlr.MizarLexer import MizarLexer
from .antlr.MizarParser import MizarParser
from .MizarXMLBuilder import MizarXMLBuilder
import antlr4
from antlr4.tree.Tree import *
from antlr4.error.ErrorListener import ErrorListener, ConsoleErrorListener


SYMBOL_PREFIX_REG = re.compile(r"(__[GKLMORUV]\d*_)", re.ASCII)
"""re: Regex object to specify symbol prefix.
"""


class MizarErrorListener(ErrorListener):
    def __init__(self, position_map=None):
        self.position_map = position_map

    def syntaxError(self, recognizer, offendingSymbol, line, column, msg, e):
        msg = re.sub(SYMBOL_PREFIX_REG, '', msg)
        if (line, column+1) in self.position_map:
            (line, column) = self.position_map[(line,column+1)]
            print("line " + str(line) + ":" + str(column) + " " + msg, file=sys.stderr)
        else:
            print("line " + str(line) + " " + msg, file=sys.stderr)

class Parser:
    def __init__(self):
        pass

    def parse(self, text:str, position_map=None, rule='article'):
        input = antlr4.InputStream(text)
        lexer = MizarLexer(input)
        lexer.removeErrorListener(ConsoleErrorListener.INSTANCE)
        lexer.addErrorListener(MizarErrorListener(position_map))
        tokens = antlr4.CommonTokenStream(lexer)
        parser = MizarParser(tokens)
        parser.removeErrorListener(ConsoleErrorListener.INSTANCE)
        parser.addErrorListener(MizarErrorListener(position_map))
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

