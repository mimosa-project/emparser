# -*- coding: utf-8 -*-

import xml.etree.ElementTree as ET
from antlr.MizarLexer import MizarLexer
from antlr.MizarParser import MizarParser
from antlr.MizarListener import MizarListener
from antlr4.tree.Tree import *
from antlr4.ParserRuleContext import ParserRuleContext


class MizarXMLBuilder(MizarListener):
    def __init__(self):
        self.topNode = None
        self.xmlNodeStack = []

    def visitTerminal(self, node:TerminalNode):
        assert len(self.xmlNodeStack) > 0
        aboveXmlNode = self.xmlNodeStack[len(self.xmlNodeStack)-1]
        symbol = node.getSymbol()
        if symbol.type < len(MizarParser.literalNames):
            xmlNode = ET.Element('keyword')
            xmlNode.set('spelling', node.getText())
            aboveXmlNode.append(xmlNode)
        else:
            aboveXmlNode.set('spelling', node.getText())
            # tag = MizarParser.symbolicNames[symbol.type]

    def visitErrorNode(self, node:ErrorNode):
        pass

    def enterEveryRule(self, ctx:ParserRuleContext):
        rulename = MizarParser.ruleNames[ctx.getRuleIndex()]
        node = ET.Element(rulename)
        if len(self.xmlNodeStack) > 0:
            aboveNode = self.xmlNodeStack[len(self.xmlNodeStack)-1]
            aboveNode.append(node)
        else:
            self.topNode = node
        self.xmlNodeStack.append(node)

    def exitEveryRule(self, ctx:ParserRuleContext):
        self.xmlNodeStack.pop()
