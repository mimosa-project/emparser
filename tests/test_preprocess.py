# -*- coding: utf-8 -*-
"""Test of preprocess module.
"""

import sys
import pytest
import pprint
from emparser.preprocess import Lexer
from tests import common

class TestLexer:
    @pytest.fixture(scope='function', autouse=True)
    def prepare_instance(self):
        self.lexer = Lexer()
        self.lexer.load_symbol_dict(common.MML_VCT)
        self.lexer.build_len2symbol()

    def test_separate_env_and_text_proper(self):
        filepath = common.DATA_DIR + '/ring_1.miz'
        with open(filepath, 'r') as f:
            lines = f.readlines()
            env_lines, tp_lines = self.lexer.separate_env_and_text_proper(lines)
        
        assert len(env_lines) == 40
        assert len(tp_lines) == 1234-40

    def test_load_symbol_dict(self):
        # 1. load symbol in specified Mizar files
        self.lexer.load_symbol_dict(common.MML_VCT, ["AFF_1", "AFF_2", "AFVECT0"])
        # HIDDEN -> 4, AFF_1 -> 1, AFF_2 -> 14, AFVECT0 -> 10
        assert len(self.lexer.symbol_dict) == 4 + 1 + 14 + 10

        # 2. load all symbols in MML
        # pprint.pprint(self.lexer.symbol_dict)
        self.lexer.load_symbol_dict(common.MML_VCT)
        assert len(self.lexer.symbol_dict) == 9214
        assert self.lexer.symbol_dict['zeros'] == {'filename': 'PRVECT_1', 'type': 'O'}

    def test_bulid_len2symbol(self):
        # pprint.pprint(self.lexer.len2symbol)
        assert len(self.lexer.len2symbol) == 45

    def test_read_until_space(self):
        cases = [
            ["abc def ghi",         "abc"],
            ["abc__8()\nfaa ghi",   "abc__8()"],
            ["abc__8()faaghi",      "abc__8()faaghi"],
        ]

        for case in cases:
            res = self.lexer.read_until_space(case[0])
            assert res == case[1]

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
            assert res == case[1]

    def test_is_word_boundary(self):
        cases = [
            [('a', 'b'), False],
            [('_', 'b'), True],
            [('a', '0'), False],
            [("'", 'b'), True],
            [('a', "'"), True],
            [('a', '('), True],
            [(')', 'b'), True],
            [(')', '('), True],
        ]

        for case in cases:
            res = self.lexer.is_word_boundary(*case[0])
            assert res == case[1]

    def test_cut_symbol(self):
        cases = [
            [".abc def ghi", ("__O100_.", "abc def ghi")],
            ["..abc def ghi", ("__O100_..", "abc def ghi")],
            ["||..abc def ghi", ("__K_||..", "abc def ghi")],
            ["abss def ghi", None],
            [",;:abc||def", (",", ";:abc||def")],
            [",||;:abcdef", (",", "||;:abcdef")],
            ["$1,abcdef",    ("$1", ",abcdef")],
            ["...||abcdef", ("...", "||abcdef")],
            ["||abcdef",    ('__O100_||', 'abcdef')],
            ["= a", ('=', ' a')],
            ["& sup I in I;", ('&', ' sup I in I;')]
        ]

        for case in cases:
            res = self.lexer.cut_symbol(case[0])
            assert res == case[1]

    def test_cut_reserved_word(self):
        cases = [
            ["qua;abc def", ("qua", ";abc def")],
            ["associativity\nsuppose", ("associativity", "\nsuppose")],
            ["abc def", None],
        ]

        for case in cases:
            res = self.lexer.cut_reserved_word(case[0])
            assert res == case[1]

    def test_cut_identifier(self):
        cases = [
            ["ABC;abc def", ("ABC", ";abc def")],
            ["ABC abc def", ("ABC", " abc def")],
            ["123 abc, def", None], 
        ]

        for case in cases:
            res = self.lexer.cut_identifier(case[0])
            assert res == case[1]

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
            assert res == case[1]

    def test_remove_comment_in_a_line(self):
        cases = ["theorem :: ABCMIZ_0:1",
            "holds ex_sup_of I, T & sup I in I; :: this is a comment",
            ":: everything is comment"]
        
        expects = ["theorem ",
            "holds ex_sup_of I, T & sup I in I; ",
            ""]
        
        for case, expect in zip(cases, expects):
            res = self.lexer.remove_comment_in_a_line(case)
            assert res == expect

        
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
        assert expect1 == res1
    
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
        assert expect2 == res2

    def test_lex(self):
        case1 = [
            "theorem ",
            "for T being Noetherian sup-Semilattice for I being Ideal of T",
            "holds ex_sup_of I, T & sup I in I;"
        ]

        expect1 = [
            "theorem",
            "for T being __V_Noetherian __M_sup-Semilattice for I being __M_Ideal of T",
            "holds __R_ex_sup_of I , T & __O200_sup I __R_in I ;"
        ]
        text1, pos_map1 = self.lexer.lex(case1)
        assert expect1 == text1


        case2 = [
            "theorem",
            "((for r,s,t holds (r * s) * t = r * (s * t)) & ex t st for s1 holds s1",
            "* t = s1 & t * s1 = s1 & ex s2 st s1 * s2 = t & s2 * s1 = t) implies S is Group;"
        ]

        expect2 = [
            "theorem",
            "( ( for r , s , t holds ( r __O_* s ) __O_* t = r __O_* ( s __O_* t ) ) & ex t st for s1 holds s1",
            "__O_* t = s1 & t __O_* s1 = s1 & ex s2 st s1 __O_* s2 = t & s2 __O_* s1 = t ) implies S is __M_Group ;"
        ]

        text2, pos_map2 = self.lexer.lex(case2)
        assert expect2 == text2

        case3 = [
            "theorem",
            "for F be add-associative right_zeroed right_complementable",
            "right-distributive non empty doubleLoopStr, x,y,z being Element of F holds",
            "x*(y-z) = x*y - x*z;",
        ]

        expect3 = [
            'theorem',
            'for F be __V_add-associative __V_right_zeroed __V_right_complementable',
            '__V_right-distributive non __V_empty __G_doubleLoopStr , x , y , z being __M_Element of F holds',
            'x __O_* ( y __O32_- z ) = x __O_* y __O32_- x __O_* z ;',
        ]

        text3, pos_map3 = self.lexer.lex(case3)
        assert expect3 == text3


        case4 = [
            "theorem",
            "for V being add-associative right_zeroed right_complementable non",
            "empty addLoopStr, u,v,w being Element of V holds -(v+w)=-w-v & -(w+-v)=v-w & -",
            "(v-w)=w+-v & -(-v-w)=w+v & u-(w+v)=u-v-w;",
        ]

        expect4 = [
            'theorem',
            'for V being __V_add-associative __V_right_zeroed __V_right_complementable non',
            '__V_empty __G_addLoopStr , u , v , w being __M_Element of V holds __O32_- ( v __O32_+ w ) = __O32_- w __O32_- v & __O32_- ( w __O32_+ __O32_- v ) = v __O32_- w & __O32_-',
            '( v __O32_- w ) = w __O32_+ __O32_- v & __O32_- ( __O32_- v __O32_- w ) = w __O32_+ v & u __O32_- ( w __O32_+ v ) = u __O32_- v __O32_- w ;',
        ]

        text4, pos_map4 = self.lexer.lex(case4)
        assert expect4 == text4


        case5 = [
            "definition",
            "  let K be non empty multMagma, S be Subset of K;",
            "  attr S is quasi-prime means",
            "for a, b being Element of K st a*b in S holds a in S or b in S;",
            "end;"
        ]

        expect5 = [
            "definition",
            "let K be non __V_empty __G_multMagma , S be __M_Subset of K ;",
            "attr S is __V_quasi-prime means",
            "for a , b being __M_Element of K st a __O_* b __R_in S holds a __R_in S or b __R_in S ;",
            "end ;"
        ]

        text5, pos_map5 = self.lexer.lex(case5)
        assert expect5 == text5

        case6 = [
            "registration",
            "let K be non empty multLoopStr;",
            "cluster prime -> proper quasi-prime for Subset of K;",
            "cluster proper quasi-prime -> prime for Subset of K;",
            "end;",
        ]

        expect6 = [
            "registration",
            "let K be non __V_empty __G_multLoopStr ;",
            "cluster __V_prime -> __V_proper __V_quasi-prime for __M_Subset of K ;",
            "cluster __V_proper __V_quasi-prime -> __V_prime for __M_Subset of K ;",
            "end ;",
        ]

        text6, pos_map6 = self.lexer.lex(case6)
        assert expect6 == text6

        case7 = [
            "notation",
            "let R be Ring, I be Ideal of R;",
            "synonym R/I for QuotientRing(R,I);",
            "end;",
        ]

        expect7 = [
            "notation",
            "let R be __M_Ring , I be __M_Ideal of R ;",
            "synonym R __O_/ I for __O_QuotientRing ( R , I ) ;",
            "end ;",
        ]

        text7, pos_map7 = self.lexer.lex(case7)
        assert expect7 == text7


        case8 = [
            "scheme",
            "NatInd { P[Nat] } : for k being Nat holds P[k]",
            "provided",
            "P[0] and",
            "for k be Nat st P[k] holds P[k + 1];",
        ]

        expect8 = [
            "scheme",
            "NatInd { P [ __M_Nat ] } : for k being __M_Nat holds P [ k ]",
            "provided",
            "P [ __O_0 ] and",
            "for k be __M_Nat st P [ k ] holds P [ k __O32_+ 1 ] ;",
        ]

        text8, pos_map8 = self.lexer.lex(case8)
        assert expect8 == text8
