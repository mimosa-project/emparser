# -*- coding: utf-8 -*-
"""Test of preprocess module.
"""

import os
import unittest
import pprint
import xml.etree.ElementTree as ET
from emparser.preprocess import Lexer
from emparser.mainprocess import Parser

VOC_FILE = os.path.dirname(__file__) + '/data/mml.vct'


class ParserTest(unittest.TestCase):
    def setUp(self):
        self.lexer = ParserTest.lexer
        self.parser = ParserTest.parser
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(ParserTest, cls).setUpClass()
        cls.parser = Parser()
        cls.lexer = Lexer()
        cls.lexer.load_symbol_dict(VOC_FILE)
        cls.lexer.build_len2symbol()

    def test_parse_theorem(self):
        case1 = "theorem ( ( for r , s , t holds ( r __O_* s ) __O_* t = r __O_* ( s __O_* t ) ) \n" + \
            "& ex t st for s1 holds s1 __O_* t = s1 & t __O_* s1 = s1 & ex s2 st s1 __O_* s2 \n" + \
            "= t & s2 __O_* s1 = t ) implies S is __M_Group ;"
        xml_tree = self.parser.parse_theorem(case1)
        print(ET.dump(xml_tree))

    def test_parse_ring_1_miz(self):
        filepath = os.path.dirname(__file__) + '/data/ring_1.miz'

        lines = None
        with open(filepath) as f:
            lines = f.readlines()
            assert len(lines) > 0

        lines = self.lexer.remove_comment(lines)
        tokens_list = self.lexer.lex(lines)
        txt = '\n'.join([' '.join(tokens) for tokens in tokens_list])
        xml_tree = self.parser.parse(txt)
        print(ET.dump(xml_tree))

