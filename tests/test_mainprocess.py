# -*- coding: utf-8 -*-
"""Test of preprocess module.
"""

import pytest
import filecmp
from pprint import pprint
import lxml.etree as ET
from emparser.preprocess import Lexer
from emparser.mainprocess import Parser
from emparser import util
from tests import common


class TestParser:
    @pytest.fixture(scope='function', autouse=True)
    def preparare_instance(self):
        print('prepare_instances called')
        self.parser = Parser()
        self.lexer = Lexer()
        self.lexer.load_symbol_dict(common.MML_VCT)
        self.lexer.build_len2symbol()
        yield
    
    def test_parse_theorem(self):
        case1 = "theorem ( ( for r , s , t holds ( r __O_* s ) __O_* t = r __O_* ( s __O_* t ) ) \n" + \
            "& ex t st for s1 holds s1 __O_* t = s1 & t __O_* s1 = s1 & ex s2 st s1 __O_* s2 \n" + \
            "= t & s2 __O_* s1 = t ) implies S is __M_Group ;"
        xml_root = self.parser.parse_theorem(case1)
        xmlstr = util.pretty_xml(xml_root)
        print(xmlstr)

    @pytest.mark.slow
    def test_parse_ring_1_miz(self):
        """This function is too heavy to call every time
        Please comment out only if you want to test. 
        """
        filepath = common.DATA_DIR + '/ring_1.miz'

        lines = None
        with open(filepath) as f:
            lines = f.readlines()
            assert len(lines) > 0

        env_lines, text_proper_lines = self.lexer.separate_env_and_text_proper(lines)

        # env_lines
        env_lines = self.lexer.remove_comment(env_lines)
        tokenized_lines, posotion_map = self.lexer.lex(env_lines, is_environment_part=True)
        txt = '\n'.join(tokenized_lines)
        env_xml_root = self.parser.parse_environment(txt, posotion_map)
        env_xmlstr = util.pretty_xml(env_xml_root)
        
        output_path = common.OUTPUT_DIR + '/ring_1_env.xml'
        # output_path = common.EXPECT_DIR + '/ring_1_env.xml'
        with open(output_path, 'w') as file:
            file.write(env_xmlstr)

        expect_path = common.EXPECT_DIR + '/ring_1_env.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

        # text_proper_lines
        text_proper_lines = self.lexer.remove_comment(text_proper_lines)
        tokenized_lines, posotion_map = self.lexer.lex(text_proper_lines, first_line_number=len(env_lines)+1)
        txt = '\n'.join(tokenized_lines)
        tp_xml_root = self.parser.parse_text_proper(txt, posotion_map)
        tp_xmlstr = util.pretty_xml(tp_xml_root)

        output_path = common.OUTPUT_DIR + '/ring_1_tp.xml'
        # output_path = common.EXPECT_DIR + '/ring_1_tp.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        expect_path = common.EXPECT_DIR + '/ring_1_tp.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

