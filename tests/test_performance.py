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
from emparser.mainprocess import Parser
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

        #1 : 0.017391204833984375
        #2 : 0.0008416175842285156
        #3 : 0.0008263587951660156
        #4 : 0.05384230613708496
        #5 : 0.005171775817871094
        #6 : 0.09348726272583008
        #7 : 6.468583345413208
        #8 : 0.0592193603515625
        #9 : 0.02293229103088379
        #10 : 0.006582736968994141
        """
        print('#test_performance_1#')
        t0 = time.time()
        self.lexer.load_symbol_dict(common.MML_VCT)
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
        env_xmlroot = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
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

        tp_xmlroot = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)

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

        # output_path = common.OUTPUT_DIR + '/performance_1.xml'
        output_path = common.EXPECT_DIR + '/performance/performance_1.xml'
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

        #1 : 0.10028433799743652
        #2 : 0.0023505687713623047
        #3 : 0.003578662872314453
        line 31:15 mismatched input 'REAL' expecting FILE_NAME
        #4 : 0.032854557037353516
        #5 : 0.005401611328125
        #6 : 1.70389723777771
        #7 : 234.9770917892456
        #8 : 1.2079763412475586
        #9 : 0.4340200424194336
        #10 : 0.11806201934814453
        """

        print('#test_performance_2#')
        t0 = time.time()
        self.lexer.load_symbol_dict(common.MML_VCT)
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
        env_xmlroot = self.parser.parse_environment('\n'.join(env_tokens), env_posmap)
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

        tp_xmlroot = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)

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

        # output_path = common.OUTPUT_DIR + '/performance_2.xml'
        output_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t10 = time.time()
        print(f'#10 : {t10 - t9}')

        expect_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)
