# -*- coding: utf-8 -*-
import pytest
from tests import common

@pytest.fixture(scope='module', autouse=True)
def maintain_directory():
    common.create_output_dir()
    # common.create_output2_dir()
    yield
    # common.delete_output2_dir()
    common.delete_output_dir()
