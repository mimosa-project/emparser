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
        #0 : 2.2172927856445312e-05
        #1 : 0.00041937828063964844
        #2 : 0.0007040500640869141
        #3 : 0.0019419193267822266
        #4 : 0.002973794937133789
        #5 : 0.006134748458862305
        #6 : 0.1053767204284668
        #7 : 0.4443786144256592
        #8 : 0.07312273979187012
        #9 : 0.02754497528076172
        #total : 0.6625969409942627
        """
        print('#test_performance_1#')
        ts = time.time()
        self.lexer.clear()
        self.lexer.build_len2symbol()

        t0 = time.time()
        print(f'#0 : {t0 - ts}')

        mizpath = common.DATA_DIR + '/ring_1.miz'
        with open(mizpath, 'r') as f:
            lines = f.readlines()
        
        t1 = time.time()
        print(f'#1 : {t1 - t0}')

        env_lines, tp_lines = self.lexer.separate_env_and_text_proper(lines)
        env_lines = self.lexer.remove_comment(env_lines)
        tp_lines = self.lexer.remove_comment(tp_lines)
        
        t2 = time.time()
        print(f'#2 : {t2 - t1}')

        env_tokens, env_posmap = self.lexer.lex(env_lines, is_environment_part=True)

        t3 = time.time()
        print(f'#3 : {t3 - t2}')

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


        output_path = common.OUTPUT_DIR + '/performance_1.xml'
        # output_path = common.EXPECT_DIR + '/performance/performance_1.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t9 = time.time()
        print(f'#9 : {t9 - t8}')
        print(f'#total : {t9 - t0}')

        expect_path = common.EXPECT_DIR + '/performance/performance_1.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

    @pytest.mark.slow
    def test_performance_2(self):
        """
        current performance test result:
        #0 : 0.0002837181091308594
        #1 : 0.010214805603027344
        #2 : 0.003931999206542969
        #3 : 0.0025854110717773438
        #4 : 0.00165557861328125
        #5 : 0.007717609405517578
        #6 : 2.2488491535186768
        #7 : 15.132161617279053
        #8 : 1.3008685111999512
        #9 : 0.47513270378112793
        #total : 19.183117389678955
        """

        print('#test_performance_2#')
        ts = time.time()
        self.lexer.clear()
        self.lexer.build_len2symbol()

        t0 = time.time()
        print(f'#0 : {t0 - ts}')

        mizpath = common.DATA_DIR + '/jgraph_4.miz'
        with open(mizpath, 'r') as f:
            lines = f.readlines()
        
        t1 = time.time()
        print(f'#1 : {t1 - t0}')

        env_lines, tp_lines = self.lexer.separate_env_and_text_proper(lines)
        env_lines = self.lexer.remove_comment(env_lines)
        tp_lines = self.lexer.remove_comment(tp_lines)
        
        t2 = time.time()
        print(f'#2 : {t2 - t1}')

        env_tokens, env_posmap = self.lexer.lex(env_lines, is_environment_part=True)

        t3 = time.time()
        print(f'#3 : {t3 - t2}')

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

        output_path = common.OUTPUT_DIR + '/performance_2.xml'
        # output_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t9 = time.time()
        print(f'#9 : {t9 - t8}')
        print(f'#total : {t9 - t0}')

        expect_path = common.EXPECT_DIR + '/performance/performance_2.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)


    def test_performance_3(self):
        """
        current performance test result:
        #0 : 0.001008749008178711
        #1 : 0.0029213428497314453
        #2 : 3.8623809814453125e-05
        #5 : 0.019628047943115234
        #6 : 0.0014917850494384766
        #7 : 0.023478269577026367
        #8 : 0.0013091564178466797
        #9 : 0.0022437572479248047
        #total : 0.05111098289489746
        """

        print('#test_performance_3#')
        ts = time.time()
        self.lexer.clear()
        self.lexer.build_len2symbol()

        t0 = time.time()
        print(f'#0 : {t0 - ts}')

        mizpath = common.DATA_DIR + '/jordan95.txt'
        with open(mizpath, 'r') as f:
            lines = f.readlines()
        
        t1 = time.time()
        print(f'#1 : {t1 - t0}')

        tp_lines = lines
        tp_lines = self.lexer.remove_comment(tp_lines)
        
        t2 = time.time()
        print(f'#2 : {t2 - t1}')

        self.lexer.load_symbol_dict(common.MML_VCT)
        self.lexer.build_len2symbol()

        t5 = time.time()
        print(f'#5 : {t5 - t2}')

        # print(self.lexer.symbol_dict)
        # print(self.lexer.len2symbol)

        tp_tokens, tp_posmap = self.lexer.lex(tp_lines, first_line_number=1)

        t6 = time.time()
        print(f'#6 : {t6 - t5}')

        # tp_xmlroot = self.parser.parse_text_proper('\n'.join(tp_tokens), tp_posmap)
        tp_xmlstr = self.parser.parse_theorem('\n'.join(tp_tokens), tp_posmap)
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

        output_path = common.OUTPUT_DIR + '/performance_3.xml'
        # output_path = common.EXPECT_DIR + '/performance/performance_3.xml'
        with open(output_path, 'w') as file:
            file.write(tp_xmlstr)

        t9 = time.time()
        print(f'#9 : {t9 - t8}')
        print(f'#total : {t9 - t0}')

        expect_path = common.EXPECT_DIR + '/performance/performance_3.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)
