# -*- coding: utf-8 -*-

"""Provide common header for test modules.
"""

import os
import shutil

DATA_DIR = os.path.dirname(__file__) + '/data'
EXPECT_DIR = os.path.dirname(__file__) + '/expect'
OUTPUT_DIR = os.path.dirname(__file__) + '/output'
MML_VCT = DATA_DIR + '/mml.vct'


def create_output_dir():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

def delete_output_dir():
    shutil.rmtree(OUTPUT_DIR)