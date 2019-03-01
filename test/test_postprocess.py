# -*- coding: utf-8 -*-
"""Test of postprocess module.
"""

import os
import unittest
import pprint
from emparser.postprocess import CSTAnalyzer
import xml.etree.ElementTree as ET


EXPECT_DIR = os.path.dirname(__file__) + '/expect'

class CSTAnalyzerTest(unittest.TestCase):
    def setUp(self):
        self.cst_analyzer = CSTAnalyzerTest.cst_analyzer
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(CSTAnalyzerTest, cls).setUpClass()
        cls.cst_analyzer = CSTAnalyzer()

    def test_extract_vocablaries(self):
        env_xmlpath = EXPECT_DIR+ '/ring_1_env.xml'
        env_root = ET.parse(env_xmlpath)
        vocabularies = CSTAnalyzer.extract_vocablaries(env_root)
        expect = ['RLVECT_1', 'ALGSTR_0', 'XBOOLE_0', 'SUBSET_1', 'ARYTM_1', 'ARYTM_3',
            'SUPINF_2', 'RELAT_1', 'INT_2', 'CARD_FIL', 'TARSKI', 'GROUP_4', 'IDEAL_1', 'VECTSP_2',
            'GROUP_1', 'FUNCSDOM', 'EQREL_1', 'STRUCT_0', 'WAYBEL20', 'PARTFUN1', 'RELAT_2',
            'SETWISEO', 'FUNCT_1', 'MESFUNC1', 'BINOP_1', 'VECTSP_1', 'LATTICES', 'WELLORD2',
            'ORDERS_1', 'WELLORD1', 'RING_1']
        self.assertEqual(vocabularies, expect)