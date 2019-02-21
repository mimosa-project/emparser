// Define a grammar called Hello
grammar Mizar;


// Article
article : environment_declaration text_proper ;

// Environment
environment_declaration : 'environ' directive * ;
directive : vocabulary_directive | library_directive | requirement_directive ;
vocabulary_directive : 'vocabularies' vocabulary_name ( ',' vocabulary_name ) * ';' ;
vocabulary_name : FILE_NAME ;
library_directive : ( 'notations' | 'constructors' | 'registrations' | 'definitions' | 'expansions' | 'equalities' | 'theorems' | 'schemes' )
    article_name ( ',' article_name ) * ';' ;
article_name : FILE_NAME ;
requirement_directive : 'requirements' requirement ( ',' requirement ) * ';' ;
requirement : FILE_NAME ;

// Text Proper
text_proper : section + ;
section : 'begin' text_item * ;
text_item : reservation | definitional_item | registration_item | notation_item | theorem | scheme_item | auxiliary_item ;
reservation : 'reserve' reservation_segment (',' reservation_segment)* ';' ;
reservation_segment : reserved_identifiers 'for' type_expression ;
reserved_identifiers : reserved_identifier (',' reserved_identifier ) ;
reserved_identifier: IDENTIFIER ;
definitional_item : definitional_block ';' ;
registration_item : registration_block ';';
notation_item : notation_block ';' ;
definitional_block : 'definition' ( definition_item | definition | redefinition ) * 'end' ;
registration_block : 'registration' ( loci_declaration | cluster_registration | identify_registration | property_registration | reduction_registration | auxiliary_item ) * 'end' ;
notation_block : 'notation' ( loci_declaration | notation_declaration ) * 'end' ;
definition_item : loci_declaration | permissive_assumption | auxiliary_item ;
notation_declaration : attribute_synonym | attribute_antonym | functor_synonym | mode_synonym | predicate_synonym | predicate_antonym ;
loci_declaration : 'let' qualified_variables ( 'such' conditions ) ? ';' ;
permissive_assumption : assumption ;
definition : structure_definition | mode_definition | functor_definition | predicate_definition | attribute_definition ;
redefinition : 'redefine' ( mode_definition | functor_definition | predicate_definition | attribute_definition ) ;
structure_definition : 'struct' ( '(' ancestors ')' ) ? structure_symbol ( 'over' loci ) ? '(#' fields '#)' ';' ;
ancestors : structure_type_expression ( ',' structure_type_expression ) * ;
structure_symbol : STRUCTURE_SYMBOL ;
loci : locus ( ',' locus ) * ;
fields : field_segment ( ',' field_segment ) * ;
locus : variable_identifier ;
variable_identifier : IDENTIFIER ;
field_segment : selector_symbol ( ',' selector_symbol ) * specification ;
selector_symbol : SELECTOR_SYMBOL ;
specification : '->' type_expression ;
mode_definition : 'mode' mode_pattern ( specification ? ( 'means' definiens ) ? ';' correctness_conditions | 'is' type_expression ';' ) mode_property * ;
mode_pattern : mode_symbol ( 'of' loci ) ? ;
mode_symbol : MODE_SYMBOL | 'set' ;
mode_synonym : 'synonym' mode_pattern 'for' mode_pattern ';' ;
definiens : simple_definiens | conditional_definiens ;
simple_definiens : ( ':' label_identifier ':' ) ? ( sentence | term_expression ) ;
label_identifier : IDENTIFIER ;
conditional_definiens : ( ':' label_identifier ':' ) ? partial_definiens_list ( 'otherwise' ( sentence | term_expression ) ) ? ;
partial_definiens_list : partial_definiens ( ',' partial_definiens ) * ;
partial_definiens : ( sentence | term_expression ) 'if' sentence ;
mode_property : 'sethood' justification ';' ;
functor_definition : 'func' functor_pattern specification ? ( ( 'means' | 'equals' ) definiens ) ? ';' correctness_conditions functor_property * ;

// FIXME : priority of operator
functor_pattern : functor_loci ? functor_symbol functor_loci ? | left_functor_bracket loci right_functor_bracket ;
functor_property : ( 'commutativity' | 'idempotence' | 'involutiveness' | 'projectivity' ) justification ';' ;
functor_synonym : 'synonym' functor_pattern 'for' functor_pattern ';' ;
functor_loci : locus | '(' loci ')' ;
functor_symbol : FUNCTOR_SYMBOL ;
left_functor_bracket : LEFT_FUNCTOR_SYMBOL | '{' | '[' ;
right_functor_bracket : RIGHT_FUNCTOR_SYMBOL | '}' | ']' ;
predicate_definition : 'pred' predicate_pattern ( 'means' definiens ) ? ';' correctness_conditions predicate_property * ;
predicate_pattern :  loci ? predicate_symbol  loci ? ;
predicate_property : ( 'symmetry' | 'asymmetry' | 'connectedness' | 'reflexivity' | 'irreflexivity' ) justification ';' ;
predicate_synonym : 'synonym' predicate_pattern 'for' predicate_pattern ';' ;
predicate_antonym : 'antonym' predicate_pattern 'for' predicate_pattern ';' ;
predicate_symbol : PREDICATE_SYMBOL | '=' ;
attribute_definition : 'attr' attribute_pattern 'means' definiens ';' correctness_conditions ;
attribute_pattern : locus 'is' attribute_loci ? attribute_symbol ;
attribute_synonym : 'synonym' attribute_pattern 'for' attribute_pattern ';' ;
attribute_antonym : 'antonym' attribute_pattern 'for' attribute_pattern ';' ;
attribute_symbol : ATTRIBUTE_SYMBOL ;
attribute_loci : loci | '(' loci ')' ;
cluster_registration : existential_registration | conditional_registration | functorial_registration ;
existential_registration : 'cluster' adjective_cluster 'for' type_expression ';' correctness_conditions ;
adjective_cluster : adjective * ;
adjective : 'non' ? adjective_arguments ? attribute_symbol ;
conditional_registration : 'cluster' adjective_cluster '->' adjective_cluster 'for' type_expression ';' correctness_conditions ;
functorial_registration : 'cluster' term_expression '->' adjective_cluster ( 'for' type_expression ) ? ';' correctness_conditions ;
identify_registration : 'identify' functor_pattern 'with' functor_pattern ( 'when' locus '=' locus ( ',' locus '=' locus ) * ) ? ';' correctness_conditions ;
property_registration : 'sethood' 'of' type_expression justification ';' ;
reduction_registration : 'reduce' term_expression 'to' term_expression ';' correctness_conditions ;
correctness_conditions :  correctness_condition * ( 'correctness' justification ';' ) ? ;
correctness_condition : ( 'existence' | 'uniqueness' | 'coherence' | 'compatibility' | 'consistency' | 'reducibility' ) justification ';' ;
theorem : 'theorem' compact_statement ;
scheme_item : scheme_block ';' ;
scheme_block : 'scheme' scheme_identifier '{' scheme_parameters '}' ':' scheme_conclusion ( 'provided' scheme_premise ( 'and' scheme_premise ) * ) ? ( 'proof' | ';' ) reasoning 'end' ;
scheme_identifier : IDENTIFIER ;
scheme_parameters : scheme_segment ( ',' scheme_segment ) * ;
scheme_conclusion : sentence ;
scheme_premise : proposition ;
scheme_segment : predicate_segment | functor_segment ;
predicate_segment : predicate_identifier ( ',' predicate_identifier ) * '[' type_expression_list ? ']' ;
predicate_identifier : IDENTIFIER ;
functor_segment : functor_identifier ( ',' functor_identifier ) * '(' type_expression_list ? ')' specification ;
functor_identifier : IDENTIFIER ;
auxiliary_item : statement | private_definition ;
private_definition : constant_definition | private_functor_definition | private_predicate_definition ;
constant_definition : 'set' equating_list ';' ;
equating_list : equating ( ',' equating ) * ;
equating : variable_identifier '=' term_expression ;
private_functor_definition : 'deffunc' private_functor_pattern '=' term_expression ';' ;
private_predicate_definition : 'defpred' private_predicate_pattern 'means' sentence ';' ;
private_functor_pattern : functor_identifier '(' type_expression_list ? ')' ;
private_predicate_pattern : predicate_identifier '[' type_expression_list ? ']' ;
reasoning : reasoning_item * ( 'then' ? 'per' 'cases' simple_justification ';' ( case_list | suppose_list ) ) ? ;
case_list : case + ;
case : 'case' ( proposition | conditions ) ';' reasoning 'end' ';' ;
suppose_list : suppose + ;
suppose : 'suppose' ( proposition | conditions ) ';' reasoning 'end' ';' ;
reasoning_item : auxiliary_item | skeleton_item ;
skeleton_item : generalization | assumption | conclusion | exemplification ;
generalization : 'let' qualified_variables ( 'such' conditions ) ? ';' ;
assumption : single_assumption | collective_assumption | existential_assumption ;
single_assumption : 'assume' proposition ';' ;
collective_assumption : 'assume' conditions ';' ;
existential_assumption : 'given' qualified_variables ( 'such' conditions ) ? ';' ;
conclusion : ( 'thus' | 'hence' ) ( compact_statement | iterative_equality ) | diffuse_conclusion ;
diffuse_conclusion : 'thus' diffuse_statement | 'hereby' reasoning 'end' ';' ;
exemplification : 'take' example ( ',' example ) * ';' ;
example : term_expression | variable_identifier '=' term_expression ;
statement : 'then' ? linkable_statement | diffuse_statement ;
linkable_statement : compact_statement | choice_statement | type_changing_statement | iterative_equality ;
compact_statement : proposition justification ';' ;
choice_statement : 'consider' qualified_variables 'such' conditions simple_justification ';' ;
type_changing_statement : 'reconsider' type_change_list 'as' type_expression simple_justification ';' ;
type_change_list : ( equating | variable_identifier ) ( ',' ( equating | variable_identifier ) ) * ;
iterative_equality : ( label_identifier ':' ) ? term_expression '=' term_expression simple_justification ( '.=' term_expression simple_justification ) + ';' ;
diffuse_statement : ( label_identifier ':' ) ? 'now' reasoning 'end' ';' ;
justification : simple_justification | proof ;
simple_justification : straightforward_justification | scheme_justification ;
proof : 'proof' reasoning 'end' ;
straightforward_justification : ( 'by' references ) ? ;
scheme_justification : 'from' scheme_reference ( '(' references ')' ) ? ;
references : reference ( ',' reference ) * ;
reference : local_reference | library_reference ;
scheme_reference : local_scheme_reference | library_scheme_reference ;
local_reference : label_identifier ;
local_scheme_reference : scheme_identifier ;
library_reference : article_name ':' ( theorem_number | 'def' definition_number ) ( ',' ( theorem_number | 'def' definition_number ) ) * ;
library_scheme_reference : article_name ':' 'sch' scheme_number ;
theorem_number : NUMERAL ;
definition_number : NUMERAL ;
scheme_number : NUMERAL ;
conditions : 'that' proposition ( 'and' proposition ) * ;
proposition : ( label_identifier ':' ) ? sentence ;
sentence : formula_expression ;

// expressions
formula_expression : '(' formula_expression ')' | atomic_formula_expression | quantified_formula_expression
    | formula_expression '&' formula_expression | formula_expression '&' '...' '&' formula_expression
    | formula_expression 'or' formula_expression | formula_expression 'or' '...' 'or' formula_expression
    | formula_expression 'implies' formula_expression | formula_expression 'iff' formula_expression | 'not' formula_expression | 'contradiction' | 'thesis' ;

atomic_formula_expression : term_expression_list ? ( ( 'does' | 'do' ) 'not' ) ? predicate_symbol
                            term_expression_list ? ( ( ( 'does' | 'do' ) 'not' ) ? predicate_symbol term_expression_list ) *
    | predicate_identifier '[' term_expression_list ? ']'
    | term_expression 'is' adjective +
    | term_expression 'is' type_expression ;

quantified_formula_expression : 'for' qualified_variables ( 'st' formula_expression ) ? ( 'holds' formula_expression | quantified_formula_expression )
    | 'ex' qualified_variables 'st' formula_expression ;

qualified_variables : implicitly_qualified_variables | explicitly_qualified_variables | explicitly_qualified_variables ',' implicitly_qualified_variables ;
implicitly_qualified_variables : variables ;
explicitly_qualified_variables : qualified_segment ( ',' qualified_segment ) * ;
qualified_segment : variables qualification ;
variables : variable_identifier ( ',' variable_identifier ) * ;
qualification : ( 'being' | 'be' ) type_expression ;
type_expression : '(' radix_type ')'
    | adjective + type_expression   // left recursion repaired
    | radix_type ;

structure_type_expression : '(' structure_symbol ( 'over' term_expression_list ) ? ')' | adjective_cluster structure_symbol ( 'over' term_expression_list ) ? ;
radix_type : mode_symbol ( 'of' term_expression_list ) ?
    | structure_symbol ( 'over' term_expression_list ) ? ;
type_expression_list : type_expression ( ',' type_expression ) * ;
term_expression : '(' term_expression ')'
    | term_expression functor_symbol arguments ?  // left recursion repaired
    | '(' term_expression_list ')' functor_symbol arguments ?  // left recursion repaired
    | functor_symbol arguments ?       // left recursion repaired
    | left_functor_bracket term_expression_list right_functor_bracket
    | functor_identifier '(' term_expression_list ? ')'
    | structure_symbol '(#' term_expression_list '#)'
    | 'the' structure_symbol 'of' term_expression
    | variable_identifier
    | '{' term_expression  postqualification * ':' sentence '}'
    | 'the' 'set' 'of' 'all' term_expression postqualification *
    | NUMERAL
    | term_expression 'qua' type_expression
    | 'the' selector_symbol 'of' term_expression
    | 'the' selector_symbol
    | 'the' type_expression
    | private_definition_parameter
    | 'it' ;
arguments : term_expression | '(' term_expression_list ')' ;
adjective_arguments : term_expression_list | '(' term_expression_list ')' ;
term_expression_list : term_expression ( ',' term_expression ) * ;
postqualification : 'where' postqualifying_segment ( ',' postqualifying_segment ) * ;
postqualifying_segment : postqualified_variable ( ',' postqualified_variable ) * ( ( 'is' | 'are' ) type_expression ) ? ;
postqualified_variable : IDENTIFIER ;
private_definition_parameter : '$1' | '$2' | '$3' | '$4' | '$5' | '$6' | '$7' | '$8' | '$9' | '$10' ;

// Tokens
PREDICATE_SYMBOL : '__R' [!-~] + ;
FUNCTOR_SYMBOL : '__O' [!-~] + ;
MODE_SYMBOL : '__M' [!-~] + ;
STRUCTURE_SYMBOL : '__G' [!-~] + ;
SELECTOR_SYMBOL : '__U' [!-~] + ;
ATTRIBUTE_SYMBOL : '__V' [!-~] + ;
LEFT_FUNCTOR_SYMBOL : '__K' [!-~] + ;
RIGHT_FUNCTOR_SYMBOL : '__L' [!-~] + ;
FILE_NAME :  [A-Z] [_A-Z0-9] [_A-Z0-9] [_A-Z0-9] [_A-Z0-9] ( [_A-Z0-9] ? ) ( [_A-Z0-9] ? ) ( [_A-Z0-9] ? ) ;
IDENTIFIER : [_'a-zA-Z] ['a-zA-Z0-9] * ;
NUMERAL : '0' | ( [1-9] [0-9] * ) ;
WHITE_SPACE : ('\r' | '\n' | '\t' | ' ') -> skip ;

