# -*- coding: utf-8 -*-
"""Test of postprocess module.
"""

import os
import unittest
import shutil
import filecmp
import xml.etree.ElementTree as ET

from emparser.postprocess import EnvCSTHandler
from emparser.postprocess import EnvCST2AST
from emparser import util
from test import common


def setUpModule():
    common.create_output_dir()

def tearDownModule():
    common.delete_output_dir()

class EnvCSTHandlerTest(unittest.TestCase):
    def setUp(self):
        self.handler = EnvCSTHandlerTest.handler
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(EnvCSTHandlerTest, cls).setUpClass()
        cls.handler = EnvCSTHandler()

    def test_extract_vocablaries(self):
        env_xmlpath = common.EXPECT_DIR+ '/ring_1_env.xml'
        env_tree = ET.parse(env_xmlpath)
        vocabularies = EnvCSTHandler.extract_vocablaries(env_tree)
        expect = ['RLVECT_1', 'ALGSTR_0', 'XBOOLE_0', 'SUBSET_1', 'ARYTM_1', 'ARYTM_3',
            'SUPINF_2', 'RELAT_1', 'INT_2', 'CARD_FIL', 'TARSKI', 'GROUP_4', 'IDEAL_1', 'VECTSP_2',
            'GROUP_1', 'FUNCSDOM', 'EQREL_1', 'STRUCT_0', 'WAYBEL20', 'PARTFUN1', 'RELAT_2',
            'SETWISEO', 'FUNCT_1', 'MESFUNC1', 'BINOP_1', 'VECTSP_1', 'LATTICES', 'WELLORD2',
            'ORDERS_1', 'WELLORD1', 'RING_1']
        self.assertEqual(vocabularies, expect)


class EnvCST2ASTTest(unittest.TestCase):
    def setUp(self):
        self.converter = EnvCST2ASTTest.converter
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(EnvCST2ASTTest, cls).setUpClass()
        cls.converter = EnvCST2AST()

    def test_convert_ring_1(self):
        input_path = common.EXPECT_DIR + '/ring_1_env.xml'
        cst_tree = ET.parse(input_path)
        ast_tree = self.converter.convert(cst_tree)
        xmlstr = util.pretty_xml(ast_tree.getroot())
        output_path = common.OUTPUT_DIR + '/ring_1_env_ast.xml'
        with open(output_path, 'w') as f:
            f.write(xmlstr)
        
        expect_path = common.EXPECT_DIR + '/ring_1_env_ast.xml'
        self.assertTrue(filecmp.cmp(expect_path, output_path, shallow=False))
        
