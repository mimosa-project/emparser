# -*- coding: utf-8 -*-

"""Postprocess module for Extended Mizar Parser (emparser).

This module is used for postprocess for Extended Mizar Parser.
Postprocess means the process after ANTLR-generated parser.

Example:
    See test/test_postprocess

Todo:


"""

import xml.etree.ElementTree as ET

class CSTHandler:
    """CST (concrete syntax tree) Handler.
    
    The purpose of this class is to handle CST tree produced by ANTLR-generated
    parser. Its roles are: extract information, manipulate CST, and so on.
    """
    @classmethod
    def extract_vocablaries(cls, env_root):
        """Extract vocabulary files from environment part

        Args:
            env_root (ET.Element): root xml node of environment part,
                which is produced by ANTLR-generated parser.
        
        Returns:
            list[str]: list of vocabulary Mizar files
        """
        nodes = env_root.findall('.//vocabularyName')
        return [node.get('spelling') for node in nodes]