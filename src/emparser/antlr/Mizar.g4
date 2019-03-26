// Define a grammar called Hello
grammar Mizar;

// Article
article : environmentDeclaration textProper ;

// Environment
environmentDeclaration : 'environ' directive * ;
directive : vocabularyDirective | libraryDirective | requirementDirective ;
vocabularyDirective : 'vocabularies' vocabularyName ( ',' vocabularyName ) * ';' ;
vocabularyName : FILE_NAME ;
libraryDirective : ( 'notations' | 'constructors' | 'registrations' | 'definitions' | 'expansions' | 'equalities' | 'theorems' | 'schemes' )
    articleName ( ',' articleName ) * ';' ;
articleName : FILE_NAME ;
requirementDirective : 'requirements' requirement ( ',' requirement ) * ';' ;
requirement : FILE_NAME ;

// Text Proper
textProper : section + ;
section : 'begin' textItem * ;
textItem : reservation | definitionalItem | registrationItem | notationItem | theorem | schemeItem | auxiliaryItem ;
reservation : 'reserve' reservationSegment (',' reservationSegment) * ';' ;
reservationSegment : reservedIdentifiers 'for' typeExpression ;
reservedIdentifiers : reservedIdentifier (',' reservedIdentifier ) *;
reservedIdentifier: IDENTIFIER ;
definitionalItem : definitionalBlock ';' ;
registrationItem : registrationBlock ';';
notationItem : notationBlock ';' ;
definitionalBlock : 'definition' ( definitionItem | definition | redefinition ) * 'end' ;
registrationBlock : 'registration' ( lociDeclaration | clusterRegistration | identifyRegistration | propertyRegistration | reductionRegistration | auxiliaryItem ) * 'end' ;
notationBlock : 'notation' ( lociDeclaration | notationDeclaration ) * 'end' ;
definitionItem : lociDeclaration | permissiveAssumption | auxiliaryItem ;
notationDeclaration : attributeSynonym | attributeAntonym | functorSynonym | modeSynonym | predicateSynonym | predicateAntonym ;
lociDeclaration : 'let' qualifiedVariables ( 'such' conditions ) ? ';' ;
permissiveAssumption : assumption ;
definition : structureDefinition | modeDefinition | functorDefinition | predicateDefinition | attributeDefinition ;
redefinition : 'redefine' ( modeDefinition | functorDefinition | predicateDefinition | attributeDefinition ) ;
structureDefinition : 'struct' ( '(' ancestors ')' ) ? structureSymbol ( 'over' loci ) ? '(#' fields '#)' ';' ;
ancestors : structureTypeExpression ( ',' structureTypeExpression ) * ;
structureSymbol : STRUCTURE_SYMBOL ;
loci : locus ( ',' locus ) * ;
fields : fieldSegment ( ',' fieldSegment ) * ;
locus : variableIdentifier ;
variableIdentifier : IDENTIFIER ;
fieldSegment : selectorSymbol ( ',' selectorSymbol ) * specification ;
selectorSymbol : SELECTOR_SYMBOL ;
specification : '->' typeExpression ;
modeDefinition : 'mode' modePattern ( specification ? ( 'means' definiens ) ? ';' correctnessConditions | 'is' typeExpression ';' ) modeProperty * ;
modePattern : modeSymbol ( 'of' loci ) ? ;
modeSymbol : MODE_SYMBOL | 'set' ;
modeSynonym : 'synonym' modePattern 'for' modePattern ';' ;
definiens : simpleDefiniens | conditionalDefiniens ;
simpleDefiniens : ( ':' labelIdentifier ':' ) ? ( sentence | termExpression ) ;
labelIdentifier : IDENTIFIER ;
conditionalDefiniens : ( ':' labelIdentifier ':' ) ? partialDefiniensList ( 'otherwise' ( sentence | termExpression ) ) ? ;
partialDefiniensList : partialDefiniens ( ',' partialDefiniens ) * ;
partialDefiniens : ( sentence | termExpression ) 'if' sentence ;
modeProperty : 'sethood' justification ';' ;
functorDefinition : 'func' functorPattern specification ? ( ( 'means' | 'equals' ) definiens ) ? ';' correctnessConditions functorProperty * ;
functorPattern : functorLoci ? functorSymbol functorLoci ? | leftFunctorBracket loci rightFunctorBracket ;
functorProperty : ( 'commutativity' | 'idempotence' | 'involutiveness' | 'projectivity' ) justification ';' ;
functorSynonym : 'synonym' functorPattern 'for' functorPattern ';' ;
functorLoci : locus | '(' loci ')' ;
functorSymbol : FUNCTOR_SYMBOL ;
leftFunctorBracket : LEFT_FUNCTOR_SYMBOL | '{' | '[' ;
rightFunctorBracket : RIGHT_FUNCTOR_SYMBOL | '}' | ']' ;
predicateDefinition : 'pred' predicatePattern ( 'means' definiens ) ? ';' correctnessConditions predicateProperty * ;
predicatePattern :  loci ? predicateSymbol  loci ? ;
predicateProperty : ( 'symmetry' | 'asymmetry' | 'connectedness' | 'reflexivity' | 'irreflexivity' ) justification ';' ;
predicateSynonym : 'synonym' predicatePattern 'for' predicatePattern ';' ;
predicateAntonym : 'antonym' predicatePattern 'for' predicatePattern ';' ;
predicateSymbol : PREDICATE_SYMBOL | '=' ;
attributeDefinition : 'attr' attributePattern 'means' definiens ';' correctnessConditions ;
attributePattern : locus 'is' attributeLoci ? attributeSymbol ;
attributeSynonym : 'synonym' attributePattern 'for' attributePattern ';' ;
attributeAntonym : 'antonym' attributePattern 'for' attributePattern ';' ;
attributeSymbol : ATTRIBUTE_SYMBOL ;
attributeLoci : loci | '(' loci ')' ;
clusterRegistration : existentialRegistration | conditionalRegistration | functorialRegistration ;
existentialRegistration : 'cluster' adjectiveCluster 'for' typeExpression ';' correctnessConditions ;
adjectiveCluster : adjective * ;
adjective : 'non' ? adjectiveArguments ? attributeSymbol ;
conditionalRegistration : 'cluster' adjectiveCluster '->' adjectiveCluster 'for' typeExpression ';' correctnessConditions ;
functorialRegistration : 'cluster' termExpression '->' adjectiveCluster ( 'for' typeExpression ) ? ';' correctnessConditions ;
identifyRegistration : 'identify' functorPattern 'with' functorPattern ( 'when' locus '=' locus ( ',' locus '=' locus ) * ) ? ';' correctnessConditions ;
propertyRegistration : 'sethood' 'of' typeExpression justification ';' ;
reductionRegistration : 'reduce' termExpression 'to' termExpression ';' correctnessConditions ;
correctnessConditions :  correctnessCondition * ( 'correctness' justification ';' ) ? ;
correctnessCondition : ( 'existence' | 'uniqueness' | 'coherence' | 'compatibility' | 'consistency' | 'reducibility' ) justification ';' ;
theorem : 'theorem' compactStatement ;
schemeItem : schemeBlock ';' ;
schemeBlock : 'scheme' schemeIdentifier '{' schemeParameters '}' ':' schemeConclusion ( 'provided' schemePremise ( 'and' schemePremise ) * ) ? ( 'proof' | ';' ) reasoning 'end' ;
schemeIdentifier : IDENTIFIER ;
schemeParameters : schemeSegment ( ',' schemeSegment ) * ;
schemeConclusion : sentence ;
schemePremise : proposition ;
schemeSegment : predicateSegment | functorSegment ;
predicateSegment : predicateIdentifier ( ',' predicateIdentifier ) * '[' typeExpressionList ? ']' ;
predicateIdentifier : IDENTIFIER ;
functorSegment : functorIdentifier ( ',' functorIdentifier ) * '(' typeExpressionList ? ')' specification ;
functorIdentifier : IDENTIFIER ;
auxiliaryItem : statement | privateDefinition ;
privateDefinition : constantDefinition | privateFunctorDefinition | privatePredicateDefinition ;
constantDefinition : 'set' equatingList ';' ;
equatingList : equating ( ',' equating ) * ;
equating : variableIdentifier '=' termExpression ;
privateFunctorDefinition : 'deffunc' privateFunctorPattern '=' termExpression ';' ;
privatePredicateDefinition : 'defpred' privatePredicatePattern 'means' sentence ';' ;
privateFunctorPattern : functorIdentifier '(' typeExpressionList ? ')' ;
privatePredicatePattern : predicateIdentifier '[' typeExpressionList ? ']' ;
reasoning : reasoningItem * ( 'then' ? 'per' 'cases' simpleJustification ';' ( caseList | supposeList ) ) ? ;
caseList : caseItem + ;
caseItem : 'case' ( proposition | conditions ) ';' reasoning 'end' ';' ;
supposeList : suppose + ;
suppose : 'suppose' ( proposition | conditions ) ';' reasoning 'end' ';' ;
reasoningItem : auxiliaryItem | skeletonItem ;
skeletonItem : generalization | assumption | conclusion | exemplification ;
generalization : 'let' qualifiedVariables ( 'such' conditions ) ? ';' ;
assumption : singleAssumption | collectiveAssumption | existentialAssumption ;
singleAssumption : 'assume' proposition ';' ;
collectiveAssumption : 'assume' conditions ';' ;
existentialAssumption : 'given' qualifiedVariables ( 'such' conditions ) ? ';' ;
conclusion : ( 'thus' | 'hence' ) ( compactStatement | iterativeEquality ) | diffuseConclusion ;
diffuseConclusion : 'thus' diffuseStatement | 'hereby' reasoning 'end' ';' ;
exemplification : 'take' example ( ',' example ) * ';' ;
example : termExpression | variableIdentifier '=' termExpression ;
statement : 'then' ? linkableStatement | diffuseStatement ;
linkableStatement : compactStatement | choiceStatement | typeChangingStatement | iterativeEquality ;
compactStatement : proposition justification ';' ;
choiceStatement : 'consider' qualifiedVariables 'such' conditions simpleJustification ';' ;
typeChangingStatement : 'reconsider' typeChangeList 'as' typeExpression simpleJustification ';' ;
typeChangeList : ( equating | variableIdentifier ) ( ',' ( equating | variableIdentifier ) ) * ;
iterativeEquality : ( labelIdentifier ':' ) ? termExpression '=' termExpression simpleJustification ( '.=' termExpression simpleJustification ) + ';' ;
diffuseStatement : ( labelIdentifier ':' ) ? 'now' reasoning 'end' ';' ;
justification : simpleJustification | proof ;
simpleJustification : straightforwardJustification | schemeJustification ;
proof : 'proof' reasoning 'end' ;
straightforwardJustification : ( 'by' references ) ? ;
schemeJustification : 'from' schemeReference ( '(' references ')' ) ? ;
references : reference ( ',' reference ) * ;
reference : localReference | libraryReference ;
schemeReference : localSchemeReference | librarySchemeReference ;
localReference : labelIdentifier ;
localSchemeReference : schemeIdentifier ;
libraryReference : articleName ':' ( theoremNumber | 'def' definitionNumber ) ( ',' ( theoremNumber | 'def' definitionNumber ) ) * ;
librarySchemeReference : articleName ':' 'sch' schemeNumber ;
theoremNumber : NUMERAL ;
definitionNumber : NUMERAL ;
schemeNumber : NUMERAL ;
conditions : 'that' proposition ( 'and' proposition ) * ;
proposition : ( labelIdentifier ':' ) ? sentence ;
sentence : formulaExpression ;

// expressions
formulaExpression : '(' formulaExpression ')' | atomicFormulaExpression | quantifiedFormulaExpression
    | formulaExpression '&' formulaExpression | formulaExpression '&' '...' '&' formulaExpression
    | formulaExpression 'or' formulaExpression | formulaExpression 'or' '...' 'or' formulaExpression
    | formulaExpression 'implies' formulaExpression | formulaExpression 'iff' formulaExpression| 'not' formulaExpression | 'contradiction' | 'thesis' ;

atomicFormulaExpression : termExpressionList ? ( ( 'does' | 'do' ) 'not' ) ? predicateSymbol
                            termExpressionList ? ( ( ( 'does' | 'do' ) 'not' ) ? predicateSymbol termExpressionList ) *
    | predicateIdentifier '[' termExpressionList ? ']'
    | termExpression 'is' adjective +
    | termExpression 'is' typeExpression ;

quantifiedFormulaExpression : 'for' qualifiedVariables ( 'st' formulaExpression ) ? ( 'holds' formulaExpression | quantifiedFormulaExpression )
    | 'ex' qualifiedVariables 'st' formulaExpression ;

qualifiedVariables : implicitlyQualifiedVariables | explicitlyQualifiedVariables | explicitlyQualifiedVariables ',' implicitlyQualifiedVariables ;
implicitlyQualifiedVariables : variables ;
explicitlyQualifiedVariables : qualifiedSegment ( ',' qualifiedSegment ) * ;
qualifiedSegment : variables qualification ;
variables : variableIdentifier ( ',' variableIdentifier ) * ;
qualification : ( 'being' | 'be' ) typeExpression ;
/* It is modified into typeExpression and radixTypeExpression
typeExpression : '(' radixType ')'
    | adjectiveCluster typeExpression
    | radixType ;
*/
typeExpression : adjectiveCluster radixTypeExpression ;   // left recursion repaired
radixTypeExpression : '(' radixType ')'
    | radixType ;

structureTypeExpression : '(' structureSymbol ( 'over' termExpressionList ) ? ')'
    | adjectiveCluster structureSymbol ( 'over' termExpressionList ) ? ;
radixType : modeSymbol ( 'of' termExpressionList ) ?
    | structureSymbol ( 'over' termExpressionList ) ? ;
typeExpressionList : typeExpression ( ',' typeExpression ) * ;
/* They are modified into termExpression, unitaryTerm and arguments
termExpression : '(' termExpression ')'
    | arguments ? functorSymbol arguments ?  // left recursion
    | leftFunctorBracket termExpressionList rightFunctorBracket
    | functorIdentifier '(' termExpressionList ? ')'
    | structureSymbol '(#' termExpressionList '#)'
    | 'the' structureSymbol 'of' termExpression
    | variableIdentifier
    | '{' termExpression  postqualification * ':' sentence '}'
    | 'the' 'set' 'of' 'all' termExpression postqualification *
    | NUMERAL
    | termExpression 'qua' typeExpression
    | 'the' selectorSymbol 'of' termExpression
    | 'the' selectorSymbol
    | 'the' typeExpression
    | privateDefinitionParameter
    | 'it' ;
arguments : termExpression | '(' termExpressionList ')' ;
*/
termExpression : arguments ? (functorSymbol + arguments) * functorSymbol + arguments ?
    | termExpression 'qua' typeExpression
    | unitaryTerm ;
unitaryTerm : '(' termExpression ')'
    | leftFunctorBracket termExpressionList rightFunctorBracket
    | functorIdentifier '(' termExpressionList ? ')'
    | structureSymbol '(#' termExpressionList '#)'
    | 'the' structureSymbol 'of' termExpression
    | variableIdentifier
    | '{' termExpression  postqualification * ':' sentence '}'
    | 'the' 'set' 'of' 'all' termExpression postqualification *
    | NUMERAL
    | 'the' selectorSymbol 'of' termExpression
    | 'the' selectorSymbol
    | 'the' typeExpression
    | privateDefinitionParameter
    | 'it' ;
arguments : unitaryTerm | '(' termExpressionList ')' ;
adjectiveArguments : termExpressionList | '(' termExpressionList ')' ;
termExpressionList : termExpression ( ',' termExpression ) * ;
postqualification : 'where' postqualifyingSegment ( ',' postqualifyingSegment ) * ;
postqualifyingSegment : postqualifiedVariable ( ',' postqualifiedVariable ) * ( ( 'is' | 'are' ) typeExpression ) ? ;
postqualifiedVariable : IDENTIFIER ;
privateDefinitionParameter : '$1' | '$2' | '$3' | '$4' | '$5' | '$6' | '$7' | '$8' | '$9' | '$10' ;

// Tokens
PREDICATE_SYMBOL : '__R' [!-~] + ;
FUNCTOR_SYMBOL : '__O' [!-~] + ;
MODE_SYMBOL : '__M' [!-~] + ;
STRUCTURE_SYMBOL : '__G' [!-~] + ;
SELECTOR_SYMBOL : '__U' [!-~] + ;
ATTRIBUTE_SYMBOL : '__V' [!-~] + ;
LEFT_FUNCTOR_SYMBOL : '__K' [!-~] + ;
RIGHT_FUNCTOR_SYMBOL : '__L' [!-~] + ;
FILE_NAME :  ([A-Z] [_A-Z0-9] [_A-Z0-9] [_A-Z0-9] [_A-Z0-9] ( [_A-Z0-9] ? ) ( [_A-Z0-9] ? ) ( [_A-Z0-9] ? )) | 'REAL' ;
IDENTIFIER : [_'a-zA-Z] ['a-zA-Z0-9] * ;
NUMERAL : '0' | ( [1-9] [0-9] * ) ;
WHITE_SPACE : ('\r' | '\n' | '\t' | ' ') -> skip ;
