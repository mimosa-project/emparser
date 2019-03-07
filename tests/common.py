# -*- coding: utf-8 -*-

"""Provide common header for test modules.
"""

import os
import shutil

DATA_DIR = os.path.dirname(__file__) + '/data'
EXPECT_DIR = os.path.dirname(__file__) + '/expect'
OUTPUT_DIR = os.path.dirname(__file__) + '/output'
OUTPUT2_DIR = os.path.dirname(__file__) + '/output2'
MML_VCT = DATA_DIR + '/mml.vct'


def create_output_dir():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)

def delete_output_dir():
    shutil.rmtree(OUTPUT_DIR)

def create_output2_dir():
    if not os.path.exists(OUTPUT2_DIR):
        os.makedirs(OUTPUT2_DIR)

def delete_output2_dir():
    shutil.rmtree(OUTPUT2_DIR)