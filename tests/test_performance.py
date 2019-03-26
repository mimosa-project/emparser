# -*- coding: utf-8 -*-
"""Test of performance.
"""

import os
import time
import pytest
import shutil
import filecmp
import lxml.etree as ET

from emparser.preprocess import Lexer
# from emparser.mainprocess import Parser
from emparser import Parser
from emparser.postprocess import CSTHandler
from emparser import util
from tests import common

class TestPerformance:
    @pytest.fixture(scope='function', autouse=True)
    def prepare_instance(self):
        self.lexer = Lexer()
        self.parser = Parser()
        self.handler = CSTHandler()
        yield

    
    @pytest.mark.slow
    def test_performance_1(self):
        """
        current performance test result:
        #1 : 3.743171691894531e-05
        #2 : 0.0007483959197998047
        #3 : 0.0007982254028320312
        #4 : 0.006863117218017578
        #5 : 0.010075092315673828
        #6 : 0.16891860961914062
        #7 : 0.41028857231140137
        #8 : 0.0686800479888916
        #9 : 0.015757322311401367
        #10 : 0.001768350601196289
        """
        print('#test_performance_1#')
        t0 = time.time()
        self.lexer.clear()
        self.lexer.build_len2symbol()

        t1 = time.time()
        print(f'#1 : {t1 - t0}')

        mizpath = common.DATA_DIR + '/ring_1.miz'
        with open(mizpath, 'r') as f:
            lines = f.readlines()
        
        t2 = time.time()
        print(f'#2 : {t2 - t1}')

        env_lines, tp_lines = self.lexer.separate_env_and_text_proper(lines)
        env_lines = self.lexer.remove_comment(env_lines)
        tp_lines = self.lexer.remove_comment(tp_lines)
        
        t3 = time.time()
        print(f'#3 : {t3 - t2}')

        env_tokens, env_posmap = self.lexer.lex(env_lines, is_environment_part=True)
        # env_xmlroot = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
        env_xmlstr = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
        env_xmlroot = ET.fromstring(env_xmlstr)
        vocfiles = self.handler.extract_vocabularies(env_xmlroot)
        # print(vocfiles)

        t4 = time.time()
        print(f'#4 : {t4 - t3}')

        self.lexer.load_symbol_dict(common.MML_VCT, vocfiles)
        self.lexer.build_len2symbol()

        t5 = time.time()
        print(f'#5 : {t5 - t4}')

        # print(self.lexer.symbol_dict)
        # print(self.lexer.len2symbol)

        tp_tokens, tp_posmap = self.lexer.lex(tp_lines, first_line_number=len(env_lines)+1)

        t6 = time.time()
        print(f'#6 : {t6 - t5}')

        # tp_xmlroot = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)
        tp_xmlstr = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)
        tp_xmlroot = ET.fromstring(tp_xmlstr)

        t7 = time.time()
        print(f'#7 : {t7 - t6}')

        self.handler.adjust_type_expression(tp_xmlroot)
        self.handler.adjust_term_expression(tp_xmlroot)
        self.handler.remove_prefix(tp_xmlroot)

        t8 = time.time()
        print(f'#8 : {t8 - t7}')

        # tp_xmlstr = util.pretty_xml(tp_xmlroot)
        tp_xmlstr = ET.tostring(tp_xmlroot, pretty_print=True).decode('utf-8')

        t9 = time.time()
        print(f'#9 : {t9 - t8}')

        output_path = common.OUTPUT_DIR + '/performance_1.xml'
        # output_path = common.EXPECT_DIR + '/performance/performance_1.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t10 = time.time()
        print(f'#10 : {t10 - t9}')

        expect_path = common.EXPECT_DIR + '/performance/performance_1.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

    @pytest.mark.slow
    def test_performance_2(self):
        """
        current performance test result:

        #1 : 0.00012969970703125
        #2 : 0.011978864669799805
        #3 : 0.008319616317749023
        #4 : 0.006693124771118164
        #5 : 0.005953550338745117
        #6 : 2.4441311359405518
        #7 : 14.36815881729126
        #8 : 1.1940639019012451
        #9 : 0.3822813034057617
        #10 : 0.08751440048217773
        """

        print('#test_performance_2#')
        t0 = time.time()
        self.lexer.clear()
        self.lexer.build_len2symbol()

        t1 = time.time()
        print(f'#1 : {t1 - t0}')

        mizpath = common.DATA_DIR + '/jgraph_4.miz'
        with open(mizpath, 'r') as f:
            lines = f.readlines()
        
        t2 = time.time()
        print(f'#2 : {t2 - t1}')

        env_lines, tp_lines = self.lexer.separate_env_and_text_proper(lines)
        env_lines = self.lexer.remove_comment(env_lines)
        tp_lines = self.lexer.remove_comment(tp_lines)
        
        t3 = time.time()
        print(f'#3 : {t3 - t2}')

        env_tokens, env_posmap = self.lexer.lex(env_lines, is_environment_part=True)
        # env_xmlroot = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
        env_xmlstr = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
        env_xmlroot = ET.fromstring(env_xmlstr)
        vocfiles = self.handler.extract_vocabularies(env_xmlroot)
        # print(vocfiles)

        t4 = time.time()
        print(f'#4 : {t4 - t3}')

        self.lexer.load_symbol_dict(common.MML_VCT, vocfiles)
        self.lexer.build_len2symbol()

        t5 = time.time()
        print(f'#5 : {t5 - t4}')

        # print(self.lexer.symbol_dict)
        # print(self.lexer.len2symbol)

        tp_tokens, tp_posmap = self.lexer.lex(tp_lines, first_line_number=len(env_lines)+1)

        t6 = time.time()
        print(f'#6 : {t6 - t5}')

        # tp_xmlroot = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)
        tp_xmlstr = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)
        tp_xmlroot = ET.fromstring(tp_xmlstr)

        t7 = time.time()
        print(f'#7 : {t7 - t6}')

        self.handler.adjust_type_expression(tp_xmlroot)
        self.handler.adjust_term_expression(tp_xmlroot)
        self.handler.remove_prefix(tp_xmlroot)

        t8 = time.time()
        print(f'#8 : {t8 - t7}')

        # tp_xmlstr = util.pretty_xml(tp_xmlroot)
        tp_xmlstr = ET.tostring(tp_xmlroot, pretty_print=True).decode('utf-8')

        t9 = time.time()
        print(f'#9 : {t9 - t8}')

        output_path = common.OUTPUT_DIR + '/performance_2.xml'
        # output_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t10 = time.time()
        print(f'#10 : {t10 - t9}')

        expect_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)
