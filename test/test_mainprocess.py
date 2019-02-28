# -*- coding: utf-8 -*-
"""Test of preprocess module.
"""

import os
import unittest
import shutil
from pprint import pprint
import xml.etree.ElementTree as ET
from emparser.preprocess import Lexer
from emparser.mainprocess import Parser

OUTPUT_DIR = os.path.dirname(__file__) + '/output'
DATA_DIR = os.path.dirname(__file__) + '/data'
VOC_FILE = DATA_DIR + '/mml.vct'



class ParserTest(unittest.TestCase):
    def setUp(self):
        self.lexer = ParserTest.lexer
        self.parser = ParserTest.parser
        if not os.path.exists(OUTPUT_DIR):
            os.makedirs(OUTPUT_DIR)

    def tearDown(self):
        shutil.rmtree(OUTPUT_DIR)
    
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
        # print(ET.dump(xml_tree))
        from xml.dom import minidom
        xmlstr = minidom.parseString(ET.tostring(xml_tree)).toprettyxml(indent="   ")
        # print(xmlstr)

'''
    def test_parse_ring_1_miz(self):
        """This function is too heavy to call every time
        Please comment out only if you want to test. 
        """
        filepath = os.path.dirname(__file__) + '/data/ring_1.miz'

        lines = None
        with open(filepath) as f:
            lines = f.readlines()
            assert len(lines) > 0

        env_lines, text_proper_lines = self.lexer.separate_env_and_text_proper(lines)

        # env_lines
        env_lines = self.lexer.remove_comment(env_lines)
        tokens_list = self.lexer.lex(env_lines, is_environment_part=True)
        txt = '\n'.join([' '.join(tokens) for tokens in tokens_list])
        env_xml_tree = self.parser.parse_environment(txt)
        from xml.dom import minidom
        env_xmlstr = minidom.parseString(ET.tostring(env_xml_tree)).toprettyxml(indent="   ")
        
        output_path = OUTPUT_DIR + '/ring_1_env.xml'
        with open(output_path, 'w') as file:
            file.write(env_xmlstr)

        # text_proper_lines
        text_proper_lines = self.lexer.remove_comment(text_proper_lines)
        tokens_list = self.lexer.lex(text_proper_lines)
        txt = '\n'.join([' '.join(tokens) for tokens in tokens_list])
        tp_xml_tree = self.parser.parse_text_proper(txt)
        from xml.dom import minidom
        tp_xmlstr = minidom.parseString(ET.tostring(tp_xml_tree)).toprettyxml(indent="   ")

        output_path = OUTPUT_DIR + '/ring_1_tp.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)


'''