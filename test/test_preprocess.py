# -*- coding: utf-8 -*-
"""Test of preprocess module.
"""

import os
import unittest
import pprint
from emparser.preprocess import Lexer

VOC_FILE = os.path.dirname(__file__) + '/data/mml.vct'

class LexerTest(unittest.TestCase):
    def setUp(self):
        self.lexer = LexerTest.lexer
    
    def tearDown(self):
        pass
    
    @classmethod
    def setUpClass(cls):
        super(LexerTest, cls).setUpClass()
        cls.lexer = Lexer()
        cls.lexer.load_symbol_dict(VOC_FILE)
        cls.lexer.build_len2symbol()

    def test_load_symbol_dict(self):
        # pprint.pprint(self.lexer.symbol_dict)
        self.assertEqual(len(self.lexer.symbol_dict), 9214)
        self.assertEqual(self.lexer.symbol_dict['zeros'],
            {'filename': 'PRVECT_1', 'type': 'O'})

    def test_bulid_len2symbol(self):
        # pprint.pprint(self.lexer.len2symbol)
        self.assertEqual(len(self.lexer.len2symbol), 45)

    def test_read_until_space(self):
        cases = [
            ["abc def ghi",         "abc"],
            ["abc__8()\nfaa ghi",   "abc__8()"],
            ["abc__8()faaghi",      "abc__8()faaghi"],
        ]

        for case in cases:
            res = self.lexer.read_until_space(case[0])
            self.assertEqual(res, case[1])

    def test_read_identifier(self):
        cases = [
            ["abc def ghi",     "abc"],
            ["abC_d2Ef3 ghi",   "abC_d2Ef3"],
            ["abC_d2(.Ef3 ghi", "abC_d2"],
            ["a'abC_d2_'(.Ef3 ghi",  "a'abC_d2_'"],
            [" def ghi", ""]
        ]

        for case in cases:
            res = self.lexer.read_identifier(case[0])
            self.assertEqual(res, case[1])

    def test_is_word_boundary(self):
        cases = [
            [('a', 'b'), False],
            [('_', 'b'), False],
            [('a', '0'), False],
            [("'", 'b'), False],
            [('a', "'"), False],
            [('a', '('), True],
            [(')', 'b'), True],
            [(')', '('), True],
        ]

        for case in cases:
            res = self.lexer.is_word_boundary(*case[0])
            self.assertEqual(res, case[1])

    def test_cut_symbol(self):
        cases = [
            [".abc def ghi", ("__O100_.", "abc def ghi")],
            ["..abc def ghi", ("__O100_..", "abc def ghi")],
            ["||..abc def ghi", ("__K_||..", "abc def ghi")],
            ["abss def ghi", None]
        ]

        for case in cases:
            res = self.lexer.cut_symbol(case[0])
            self.assertEqual(res, case[1])

    def test_cut_special_symbol(self):
        cases = [
            [",;:abc||def", (",", ";:abc||def")],
            [",||;:abcdef", (",", "||;:abcdef")],
            ["$1abcdef",    ("$1", "abcdef")],
            ["...||abcdef", ("...", "||abcdef")],
            ["||abcdef",    None],
        ]

        for case in cases:
            res = self.lexer.cut_special_symbol(case[0])
            self.assertEqual(res, case[1])

    def test_cut_reserved_word(self):
        cases = [
            ["qua;abc def", ("qua", ";abc def")],
            ["associativity\nsuppose", ("associativity", "\nsuppose")],
            ["abc def", None],
        ]

        for case in cases:
            res = self.lexer.cut_reserved_word(case[0])
            self.assertEqual(res, case[1])

    def test_cut_identifier(self):
        cases = [
            ["ABC;abc def", ("ABC", ";abc def")],
            ["ABC abc def", ("ABC", " abc def")],
            ["123 abc, def", None], 
        ]

        for case in cases:
            res = self.lexer.cut_identifier(case[0])
            self.assertEqual(res, case[1])

    def test_cut_numeral(self):
        cases = [
            ["123;abc def", ("123", ";abc def")],
            ["456 abc def", ("456", " abc def")],
            ["1 abc def",   ("1", " abc def")],
            ["0 abc def",   ("0", " abc def")],
            ["012 abc def", None],
            ["ABC abc def", None],
        ]

        for case in cases:
            res = self.lexer.cut_numeral(case[0])
            self.assertEqual(res, case[1])

    def test_remove_comment(self):
        case1 = [
            "theorem :: ABCMIZ_0:1",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]
        
        expect1 = [
            "theorem ",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]

        res1 = self.lexer.remove_comment(case1)
        self.assertEqual(expect1, res1)
    
        case2 = [
            "theorem :: ABCMIZ_0:1",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]
        
        expect2 = [
            "theorem ",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]

        res2 = self.lexer.remove_comment(case2)
        self.assertEqual(expect2, res2)

    def test_lex(self):
        case1 = [
            "theorem ",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]

        expect1 = ["theorem",
            "for", "T", "being", "__V_Noetherian", "__M_sup-Semilattice",
            "for", "I", "being", "__M_Ideal", "of", "T",
            "holds", "__R_ex_sup_of", "I", ",", "T", "&", "__O200_sup",
            "I", "__R_in", "I", ";"]
        
        res1 = self.lexer.lex(case1)
        self.assertEqual(expect1, res1)

        case2 = [
            "theorem",
            "((for r,s,t holds (r * s) * t = r * (s * t)) & ex t st for s1 holds s1",
            "* t = s1 & t * s1 = s1 & ex s2 st s1 * s2 = t & s2 * s1 = t) implies S is Group;"
        ]

        expect2 = ["theorem",
            "(", "(", "for", "r", ",", "s", ",", "t", "holds",
            "(", "r", "__O_*", "s", ")", "__O_*", "t",
            "=", "r", "__O_*", "(", "s", "__O_*", "t", ")", ")",
            "&", "ex", "t", "st", "for", "s1", "holds", "s1",
            "__O_*", "t", "=", "s1", "&", "t", "__O_*", "s1",
            "=", "s1", "&", "ex", "s2", "st", "s1", "__O_*", "s2",
             "=", "t", "&", "s2", "__O_*", "s1", "=", "t", ")",
             "implies", "S", "is", "__M_Group", ";"]

        res2 = self.lexer.lex(case2)
        self.assertEqual(expect2, res2)

    def test_connect_list2lines(self):
        case1 = [
            "theorem", "a", "b", "c", ";"
        ]

        expect1 = ["theorem a b c ;"]

        res1 = self.lexer.connect_list2lines(case1)
        self.assertEqual(expect1, res1)

        case2 = ["theorem",
            "(", "(", "for", "r", ",", "s", ",", "t", "holds",
            "(", "r", "__O_*", "s", ")", "__O_*", "t",
            "=", "r", "__O_*", "(", "s", "__O_*", "t", ")", ")",
            "&", "ex", "t", "st", "for", "s1", "holds", "s1",
            "__O_*", "t", "=", "s1", "&", "t", "__O_*", "s1",
            "=", "s1", "&", "ex", "s2", "st", "s1", "__O_*", "s2",
             "=", "t", "&", "s2", "__O_*", "s1", "=", "t", ")",
             "implies", "S", "is", "__M_Group"
        ]
        
        expect2 = [
            "theorem ( ( for r , s , t holds ( r __O_* s ) __O_* t = r __O_* ( s __O_* t ) )",
            "& ex t st for s1 holds s1 __O_* t = s1 & t __O_* s1 = s1 & ex s2 st s1 __O_* s2",
            "= t & s2 __O_* s1 = t ) implies S is __M_Group"
        ]

        res2 = self.lexer.connect_list2lines(case2)
        self.assertEqual(expect2, res2)

        case3 = [""]
        expect3  = []
        res3 = self.lexer.connect_list2lines(case3)
        self.assertEqual(expect3, res3)
