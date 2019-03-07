# -*- coding: utf-8 -*-
"""Test of util module.
"""

import unittest
import filecmp
import lxml.etree as ET

from emparser import util
from test import common

def setUpModule():
    common.create_output_dir()

def tearDownModule():
    common.delete_output_dir()

class UtilTest(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass

    def test_pretty_xml(self):
        input_path = common.EXPECT_DIR + '/ring_1_env.xml'
        output_path = common.OUTPUT_DIR + '/ring_1_env.xml'
        xmltree = ET.parse(input_path)
        xmlstr = util.pretty_xml(xmltree.getroot())
        with open(output_path, 'w') as f:
            f.write(xmlstr)
        
        self.assertTrue(filecmp.cmp(input_path, output_path, shallow=False))
