# -*- coding: utf-8 -*-

import xml.etree.ElementTree as ET
from antlr.MizarLexer import MizarLexer
from antlr.MizarParser import MizarParser
from antlr.MizarListener import MizarListener
from antlr4.tree.Tree import *
from antlr4.ParserRuleContext import ParserRuleContext


class MizarXMLBuilder(MizarListener):
    def __init__(self, position_map):
        self.xmlTree = ET.ElementTree()
        self.xmlNodeStack = []
        self.position_map = position_map

    def visitTerminal(self, node:TerminalNode):
        assert len(self.xmlNodeStack) > 0
        aboveXmlNode = self.xmlNodeStack[len(self.xmlNodeStack)-1]
        symbol = node.getSymbol()
        if symbol.type < len(MizarParser.literalNames):
            xmlNode = ET.Element('keyword')
            xmlNode.set('spelling', node.getText())
            aboveXmlNode.append(xmlNode)
        else:
            xmlNode = aboveXmlNode
            xmlNode.set('spelling', node.getText())
        
        if self.position_map:
            # symbol.column is 0-origin
            after_pos = (symbol.line, symbol.column+1)
            if after_pos in self.position_map:
                before_pos = self.position_map[after_pos]
                xmlNode.set('line', str(before_pos[0]))
                xmlNode.set('col', str(before_pos[1]))
            else:
                print("position {} not found".format(after_pos))

    def visitErrorNode(self, node:ErrorNode):
        pass

    def enterEveryRule(self, ctx:ParserRuleContext):
        rulename = MizarParser.ruleNames[ctx.getRuleIndex()]
        node = ET.Element(rulename)
        if len(self.xmlNodeStack) > 0:
            aboveNode = self.xmlNodeStack[len(self.xmlNodeStack)-1]
            aboveNode.append(node)
        else:
            self.xmlTree._setroot(node)
        self.xmlNodeStack.append(node)

    def exitEveryRule(self, ctx:ParserRuleContext):
        self.xmlNodeStack.pop()
