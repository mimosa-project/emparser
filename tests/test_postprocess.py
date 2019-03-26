# -*- coding: utf-8 -*-
"""Test of postprocess module.
"""

import os
import time
import pytest
import shutil
import filecmp
import lxml.etree as ET

from emparser.postprocess import CSTHandler
from emparser import util
from tests import common

class TestCSTHandler:
    @pytest.fixture(scope='function', autouse=True)
    def prepare_instance(self):
        self.handler = CSTHandler()
        yield
    
    def test_extract_vocabularies(self):
        env_xmlpath = common.EXPECT_DIR+ '/main/ring_1_env.xml'
        env_tree = ET.parse(env_xmlpath)
        vocabularies = CSTHandler.extract_vocabularies(env_tree.getroot())
        expect = ['RLVECT_1', 'ALGSTR_0', 'XBOOLE_0', 'SUBSET_1', 'ARYTM_1', 'ARYTM_3',
            'SUPINF_2', 'RELAT_1', 'INT_2', 'CARD_FIL', 'TARSKI', 'GROUP_4', 'IDEAL_1', 'VECTSP_2',
            'GROUP_1', 'FUNCSDOM', 'EQREL_1', 'STRUCT_0', 'WAYBEL20', 'PARTFUN1', 'RELAT_2',
            'SETWISEO', 'FUNCT_1', 'MESFUNC1', 'BINOP_1', 'VECTSP_1', 'LATTICES', 'WELLORD2',
            'ORDERS_1', 'WELLORD1', 'RING_1']
        assert vocabularies == expect

    def test_adjust_type_expression(self):
        filepath = common.EXPECT_DIR + '/main/theorem1.xml'
        xml_tree = ET.parse(filepath)

        root = xml_tree.getroot()
        self.handler.adjust_type_expression(root)
        output_xmlstr = util.pretty_xml(root)

        # output_path = common.EXPECT_DIR + '/post/adjust_type_expression.xml'
        output_path = common.OUTPUT_DIR + '/adjust_type_expression.xml'
        with open(output_path, 'w') as file:
            file.write(output_xmlstr)

        expect_path = common.EXPECT_DIR + '/post/adjust_type_expression.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

    def test_adjust_term_expression(self):
        filepath = common.EXPECT_DIR + '/main/theorem2.xml'
        xml_tree = ET.parse(filepath)

        root = xml_tree.getroot()
        self.handler.adjust_term_expression(root)
        output_xmlstr = util.pretty_xml(root)

        # output_path = common.EXPECT_DIR + '/post/adjust_term_expression.xml'
        output_path = common.OUTPUT_DIR + '/adjust_term_expression.xml'
        with open(output_path, 'w') as file:
            file.write(output_xmlstr)

        expect_path = common.EXPECT_DIR + '/post/adjust_term_expression.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)

    def test_remove_prefix(self):
        filepath = common.EXPECT_DIR + '/post/adjust_term_expression.xml'
        xml_tree = ET.parse(filepath)

        root = xml_tree.getroot()
        self.handler.remove_prefix(root)
        output_xmlstr = util.pretty_xml(root)

        # output_path = common.EXPECT_DIR + '/post/remove_prefix.xml'
        output_path = common.OUTPUT_DIR + '/remove_prefix.xml'
        with open(output_path, 'w') as file:
            file.write(output_xmlstr)

        expect_path = common.EXPECT_DIR + '/post/remove_prefix.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)
    
    def test_all_post_process(self):
        filepath = common.EXPECT_DIR + '/main/ring_1_tp.xml'
        
        xml_tree = ET.parse(filepath)
        root = xml_tree.getroot()
        self.handler.adjust_type_expression(root)
        self.handler.adjust_term_expression(root)
        self.handler.remove_prefix(root)
        output_xmlstr = util.pretty_xml(root)
        output_path = common.OUTPUT_DIR + '/all_post_process.xml'
        # output_path = common.EXPECT_DIR + '/post/all_post_process.xml'
        with open(output_path, 'w') as file:
            file.write(output_xmlstr)

        expect_path = common.EXPECT_DIR + '/post/all_post_process.xml'
        assert filecmp.cmp(expect_path, output_path, shallow=False)


'''
class CST2ASTTest(unittest.TestCase):
    def setUp(self):
        self.converter = CST2ASTTest.converter
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(CST2ASTTest, cls).setUpClass()
        cls.converter = CST2AST()

    def test_convert_ring_1_env(self):
        input_path = common.EXPECT_DIR + '/ring_1_env.xml'
        cst_tree = ET.parse(input_path)
        ast_roots = self.converter.convert(cst_tree.getroot())
        self.assertEqual(len(ast_roots), 1)
        xmlstr = util.pretty_xml(ast_roots[0])
        output_path = common.OUTPUT_DIR + '/ring_1_env_ast.xml'
        # output_path = common.EXPECT_DIR + '/ring_1_env_ast.xml'
        with open(output_path, 'w') as f:
            f.write(xmlstr)
        
        expect_path = common.EXPECT_DIR + '/ring_1_env_ast.xml'
        self.assertTrue(filecmp.cmp(expect_path, output_path, shallow=False))

    def test_convert_ring_1_tp(self):
        input_path = common.EXPECT_DIR + '/ring_1_tp.xml'
        cst_tree = ET.parse(input_path)
        ast_roots = self.converter.convert(cst_tree.getroot())
        self.assertEqual(len(ast_roots), 1)
        xmlstr = util.pretty_xml(ast_roots[0])
        output_path = common.OUTPUT_DIR + '/ring_1_tp_ast.xml'
        # output_path = common.OUTPUT2_DIR + '/ring_1_tp_ast.xml'
        # output_path = common.EXPECT_DIR + '/ring_1_tp_ast.xml'
        with open(output_path, 'w') as f:
            f.write(xmlstr)
        
        expect_path = common.EXPECT_DIR + '/ring_1_tp_ast.xml'
        self.assertTrue(filecmp.cmp(expect_path, output_path, shallow=False))
'''