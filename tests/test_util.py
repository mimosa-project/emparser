# -*- coding: utf-8 -*-
"""Test of util module.
"""

import pytest
import filecmp
import lxml.etree as ET

from emparser import util
from tests import common

class TestUtil:
    def test_pretty_xml(self):
        input_path = common.EXPECT_DIR + '/util/pretty_print.xml'
        output_path = common.OUTPUT_DIR + '/pretty_print.xml'
        xmltree = ET.parse(input_path)
        xmlstr = util.pretty_xml(xmltree.getroot())
        with open(output_path, 'w') as f:
            f.write(xmlstr)
        
        assert filecmp.cmp(input_path, output_path, shallow=False)
