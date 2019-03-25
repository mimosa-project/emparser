
// Generated from c:\dev\mimosa-project\emparser\src\emparser\antlr\Mizar.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MizarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, T__61 = 62, 
    T__62 = 63, T__63 = 64, T__64 = 65, T__65 = 66, T__66 = 67, T__67 = 68, 
    T__68 = 69, T__69 = 70, T__70 = 71, T__71 = 72, T__72 = 73, T__73 = 74, 
    T__74 = 75, T__75 = 76, T__76 = 77, T__77 = 78, T__78 = 79, T__79 = 80, 
    T__80 = 81, T__81 = 82, T__82 = 83, T__83 = 84, T__84 = 85, T__85 = 86, 
    T__86 = 87, T__87 = 88, T__88 = 89, T__89 = 90, T__90 = 91, T__91 = 92, 
    T__92 = 93, T__93 = 94, T__94 = 95, T__95 = 96, T__96 = 97, T__97 = 98, 
    T__98 = 99, T__99 = 100, T__100 = 101, T__101 = 102, T__102 = 103, T__103 = 104, 
    T__104 = 105, T__105 = 106, T__106 = 107, T__107 = 108, T__108 = 109, 
    T__109 = 110, T__110 = 111, T__111 = 112, T__112 = 113, T__113 = 114, 
    T__114 = 115, T__115 = 116, T__116 = 117, T__117 = 118, T__118 = 119, 
    T__119 = 120, T__120 = 121, T__121 = 122, T__122 = 123, T__123 = 124, 
    T__124 = 125, T__125 = 126, T__126 = 127, T__127 = 128, T__128 = 129, 
    T__129 = 130, T__130 = 131, T__131 = 132, PREDICATE_SYMBOL = 133, FUNCTOR_SYMBOL = 134, 
    MODE_SYMBOL = 135, STRUCTURE_SYMBOL = 136, SELECTOR_SYMBOL = 137, ATTRIBUTE_SYMBOL = 138, 
    LEFT_FUNCTOR_SYMBOL = 139, RIGHT_FUNCTOR_SYMBOL = 140, FILE_NAME = 141, 
    IDENTIFIER = 142, NUMERAL = 143, WHITE_SPACE = 144
  };

  enum {
    RuleArticle = 0, RuleEnvironmentDeclaration = 1, RuleDirective = 2, 
    RuleVocabularyDirective = 3, RuleVocabularyName = 4, RuleLibraryDirective = 5, 
    RuleArticleName = 6, RuleRequirementDirective = 7, RuleRequirement = 8, 
    RuleTextProper = 9, RuleSection = 10, RuleTextItem = 11, RuleReservation = 12, 
    RuleReservationSegment = 13, RuleReservedIdentifiers = 14, RuleReservedIdentifier = 15, 
    RuleDefinitionalItem = 16, RuleRegistrationItem = 17, RuleNotationItem = 18, 
    RuleDefinitionalBlock = 19, RuleRegistrationBlock = 20, RuleNotationBlock = 21, 
    RuleDefinitionItem = 22, RuleNotationDeclaration = 23, RuleLociDeclaration = 24, 
    RulePermissiveAssumption = 25, RuleDefinition = 26, RuleRedefinition = 27, 
    RuleStructureDefinition = 28, RuleAncestors = 29, RuleStructureSymbol = 30, 
    RuleLoci = 31, RuleFields = 32, RuleLocus = 33, RuleVariableIdentifier = 34, 
    RuleFieldSegment = 35, RuleSelectorSymbol = 36, RuleSpecification = 37, 
    RuleModeDefinition = 38, RuleModePattern = 39, RuleModeSymbol = 40, 
    RuleModeSynonym = 41, RuleDefiniens = 42, RuleSimpleDefiniens = 43, 
    RuleLabelIdentifier = 44, RuleConditionalDefiniens = 45, RulePartialDefiniensList = 46, 
    RulePartialDefiniens = 47, RuleModeProperty = 48, RuleFunctorDefinition = 49, 
    RuleFunctorPattern = 50, RuleFunctorProperty = 51, RuleFunctorSynonym = 52, 
    RuleFunctorLoci = 53, RuleFunctorSymbol = 54, RuleLeftFunctorBracket = 55, 
    RuleRightFunctorBracket = 56, RulePredicateDefinition = 57, RulePredicatePattern = 58, 
    RulePredicateProperty = 59, RulePredicateSynonym = 60, RulePredicateAntonym = 61, 
    RulePredicateSymbol = 62, RuleAttributeDefinition = 63, RuleAttributePattern = 64, 
    RuleAttributeSynonym = 65, RuleAttributeAntonym = 66, RuleAttributeSymbol = 67, 
    RuleAttributeLoci = 68, RuleClusterRegistration = 69, RuleExistentialRegistration = 70, 
    RuleAdjectiveCluster = 71, RuleAdjective = 72, RuleConditionalRegistration = 73, 
    RuleFunctorialRegistration = 74, RuleIdentifyRegistration = 75, RulePropertyRegistration = 76, 
    RuleReductionRegistration = 77, RuleCorrectnessConditions = 78, RuleCorrectnessCondition = 79, 
    RuleTheorem = 80, RuleSchemeItem = 81, RuleSchemeBlock = 82, RuleSchemeIdentifier = 83, 
    RuleSchemeParameters = 84, RuleSchemeConclusion = 85, RuleSchemePremise = 86, 
    RuleSchemeSegment = 87, RulePredicateSegment = 88, RulePredicateIdentifier = 89, 
    RuleFunctorSegment = 90, RuleFunctorIdentifier = 91, RuleAuxiliaryItem = 92, 
    RulePrivateDefinition = 93, RuleConstantDefinition = 94, RuleEquatingList = 95, 
    RuleEquating = 96, RulePrivateFunctorDefinition = 97, RulePrivatePredicateDefinition = 98, 
    RulePrivateFunctorPattern = 99, RulePrivatePredicatePattern = 100, RuleReasoning = 101, 
    RuleCaseList = 102, RuleCaseItem = 103, RuleSupposeList = 104, RuleSuppose = 105, 
    RuleReasoningItem = 106, RuleSkeletonItem = 107, RuleGeneralization = 108, 
    RuleAssumption = 109, RuleSingleAssumption = 110, RuleCollectiveAssumption = 111, 
    RuleExistentialAssumption = 112, RuleConclusion = 113, RuleDiffuseConclusion = 114, 
    RuleExemplification = 115, RuleExample = 116, RuleStatement = 117, RuleLinkableStatement = 118, 
    RuleCompactStatement = 119, RuleChoiceStatement = 120, RuleTypeChangingStatement = 121, 
    RuleTypeChangeList = 122, RuleIterativeEquality = 123, RuleDiffuseStatement = 124, 
    RuleJustification = 125, RuleSimpleJustification = 126, RuleProof = 127, 
    RuleStraightforwardJustification = 128, RuleSchemeJustification = 129, 
    RuleReferences = 130, RuleReference = 131, RuleSchemeReference = 132, 
    RuleLocalReference = 133, RuleLocalSchemeReference = 134, RuleLibraryReference = 135, 
    RuleLibrarySchemeReference = 136, RuleTheoremNumber = 137, RuleDefinitionNumber = 138, 
    RuleSchemeNumber = 139, RuleConditions = 140, RuleProposition = 141, 
    RuleSentence = 142, RuleFormulaExpression = 143, RuleAtomicFormulaExpression = 144, 
    RuleQuantifiedFormulaExpression = 145, RuleQualifiedVariables = 146, 
    RuleImplicitlyQualifiedVariables = 147, RuleExplicitlyQualifiedVariables = 148, 
    RuleQualifiedSegment = 149, RuleVariables = 150, RuleQualification = 151, 
    RuleTypeExpression = 152, RuleRadixTypeExpression = 153, RuleStructureTypeExpression = 154, 
    RuleRadixType = 155, RuleTypeExpressionList = 156, RuleTermExpression = 157, 
    RuleUnitaryTerm = 158, RuleArguments = 159, RuleAdjectiveArguments = 160, 
    RuleTermExpressionList = 161, RulePostqualification = 162, RulePostqualifyingSegment = 163, 
    RulePostqualifiedVariable = 164, RulePrivateDefinitionParameter = 165
  };

  MizarParser(antlr4::TokenStream *input);
  ~MizarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ArticleContext;
  class EnvironmentDeclarationContext;
  class DirectiveContext;
  class VocabularyDirectiveContext;
  class VocabularyNameContext;
  class LibraryDirectiveContext;
  class ArticleNameContext;
  class RequirementDirectiveContext;
  class RequirementContext;
  class TextProperContext;
  class SectionContext;
  class TextItemContext;
  class ReservationContext;
  class ReservationSegmentContext;
  class ReservedIdentifiersContext;
  class ReservedIdentifierContext;
  class DefinitionalItemContext;
  class RegistrationItemContext;
  class NotationItemContext;
  class DefinitionalBlockContext;
  class RegistrationBlockContext;
  class NotationBlockContext;
  class DefinitionItemContext;
  class NotationDeclarationContext;
  class LociDeclarationContext;
  class PermissiveAssumptionContext;
  class DefinitionContext;
  class RedefinitionContext;
  class StructureDefinitionContext;
  class AncestorsContext;
  class StructureSymbolContext;
  class LociContext;
  class FieldsContext;
  class LocusContext;
  class VariableIdentifierContext;
  class FieldSegmentContext;
  class SelectorSymbolContext;
  class SpecificationContext;
  class ModeDefinitionContext;
  class ModePatternContext;
  class ModeSymbolContext;
  class ModeSynonymContext;
  class DefiniensContext;
  class SimpleDefiniensContext;
  class LabelIdentifierContext;
  class ConditionalDefiniensContext;
  class PartialDefiniensListContext;
  class PartialDefiniensContext;
  class ModePropertyContext;
  class FunctorDefinitionContext;
  class FunctorPatternContext;
  class FunctorPropertyContext;
  class FunctorSynonymContext;
  class FunctorLociContext;
  class FunctorSymbolContext;
  class LeftFunctorBracketContext;
  class RightFunctorBracketContext;
  class PredicateDefinitionContext;
  class PredicatePatternContext;
  class PredicatePropertyContext;
  class PredicateSynonymContext;
  class PredicateAntonymContext;
  class PredicateSymbolContext;
  class AttributeDefinitionContext;
  class AttributePatternContext;
  class AttributeSynonymContext;
  class AttributeAntonymContext;
  class AttributeSymbolContext;
  class AttributeLociContext;
  class ClusterRegistrationContext;
  class ExistentialRegistrationContext;
  class AdjectiveClusterContext;
  class AdjectiveContext;
  class ConditionalRegistrationContext;
  class FunctorialRegistrationContext;
  class IdentifyRegistrationContext;
  class PropertyRegistrationContext;
  class ReductionRegistrationContext;
  class CorrectnessConditionsContext;
  class CorrectnessConditionContext;
  class TheoremContext;
  class SchemeItemContext;
  class SchemeBlockContext;
  class SchemeIdentifierContext;
  class SchemeParametersContext;
  class SchemeConclusionContext;
  class SchemePremiseContext;
  class SchemeSegmentContext;
  class PredicateSegmentContext;
  class PredicateIdentifierContext;
  class FunctorSegmentContext;
  class FunctorIdentifierContext;
  class AuxiliaryItemContext;
  class PrivateDefinitionContext;
  class ConstantDefinitionContext;
  class EquatingListContext;
  class EquatingContext;
  class PrivateFunctorDefinitionContext;
  class PrivatePredicateDefinitionContext;
  class PrivateFunctorPatternContext;
  class PrivatePredicatePatternContext;
  class ReasoningContext;
  class CaseListContext;
  class CaseItemContext;
  class SupposeListContext;
  class SupposeContext;
  class ReasoningItemContext;
  class SkeletonItemContext;
  class GeneralizationContext;
  class AssumptionContext;
  class SingleAssumptionContext;
  class CollectiveAssumptionContext;
  class ExistentialAssumptionContext;
  class ConclusionContext;
  class DiffuseConclusionContext;
  class ExemplificationContext;
  class ExampleContext;
  class StatementContext;
  class LinkableStatementContext;
  class CompactStatementContext;
  class ChoiceStatementContext;
  class TypeChangingStatementContext;
  class TypeChangeListContext;
  class IterativeEqualityContext;
  class DiffuseStatementContext;
  class JustificationContext;
  class SimpleJustificationContext;
  class ProofContext;
  class StraightforwardJustificationContext;
  class SchemeJustificationContext;
  class ReferencesContext;
  class ReferenceContext;
  class SchemeReferenceContext;
  class LocalReferenceContext;
  class LocalSchemeReferenceContext;
  class LibraryReferenceContext;
  class LibrarySchemeReferenceContext;
  class TheoremNumberContext;
  class DefinitionNumberContext;
  class SchemeNumberContext;
  class ConditionsContext;
  class PropositionContext;
  class SentenceContext;
  class FormulaExpressionContext;
  class AtomicFormulaExpressionContext;
  class QuantifiedFormulaExpressionContext;
  class QualifiedVariablesContext;
  class ImplicitlyQualifiedVariablesContext;
  class ExplicitlyQualifiedVariablesContext;
  class QualifiedSegmentContext;
  class VariablesContext;
  class QualificationContext;
  class TypeExpressionContext;
  class RadixTypeExpressionContext;
  class StructureTypeExpressionContext;
  class RadixTypeContext;
  class TypeExpressionListContext;
  class TermExpressionContext;
  class UnitaryTermContext;
  class ArgumentsContext;
  class AdjectiveArgumentsContext;
  class TermExpressionListContext;
  class PostqualificationContext;
  class PostqualifyingSegmentContext;
  class PostqualifiedVariableContext;
  class PrivateDefinitionParameterContext; 

  class  ArticleContext : public antlr4::ParserRuleContext {
  public:
    ArticleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnvironmentDeclarationContext *environmentDeclaration();
    TextProperContext *textProper();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArticleContext* article();

  class  EnvironmentDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnvironmentDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DirectiveContext *> directive();
    DirectiveContext* directive(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnvironmentDeclarationContext* environmentDeclaration();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VocabularyDirectiveContext *vocabularyDirective();
    LibraryDirectiveContext *libraryDirective();
    RequirementDirectiveContext *requirementDirective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DirectiveContext* directive();

  class  VocabularyDirectiveContext : public antlr4::ParserRuleContext {
  public:
    VocabularyDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VocabularyNameContext *> vocabularyName();
    VocabularyNameContext* vocabularyName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VocabularyDirectiveContext* vocabularyDirective();

  class  VocabularyNameContext : public antlr4::ParserRuleContext {
  public:
    VocabularyNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VocabularyNameContext* vocabularyName();

  class  LibraryDirectiveContext : public antlr4::ParserRuleContext {
  public:
    LibraryDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArticleNameContext *> articleName();
    ArticleNameContext* articleName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryDirectiveContext* libraryDirective();

  class  ArticleNameContext : public antlr4::ParserRuleContext {
  public:
    ArticleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArticleNameContext* articleName();

  class  RequirementDirectiveContext : public antlr4::ParserRuleContext {
  public:
    RequirementDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RequirementContext *> requirement();
    RequirementContext* requirement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequirementDirectiveContext* requirementDirective();

  class  RequirementContext : public antlr4::ParserRuleContext {
  public:
    RequirementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILE_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RequirementContext* requirement();

  class  TextProperContext : public antlr4::ParserRuleContext {
  public:
    TextProperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SectionContext *> section();
    SectionContext* section(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextProperContext* textProper();

  class  SectionContext : public antlr4::ParserRuleContext {
  public:
    SectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextItemContext *> textItem();
    TextItemContext* textItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SectionContext* section();

  class  TextItemContext : public antlr4::ParserRuleContext {
  public:
    TextItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReservationContext *reservation();
    DefinitionalItemContext *definitionalItem();
    RegistrationItemContext *registrationItem();
    NotationItemContext *notationItem();
    TheoremContext *theorem();
    SchemeItemContext *schemeItem();
    AuxiliaryItemContext *auxiliaryItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextItemContext* textItem();

  class  ReservationContext : public antlr4::ParserRuleContext {
  public:
    ReservationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReservationSegmentContext *> reservationSegment();
    ReservationSegmentContext* reservationSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservationContext* reservation();

  class  ReservationSegmentContext : public antlr4::ParserRuleContext {
  public:
    ReservationSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReservedIdentifiersContext *reservedIdentifiers();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservationSegmentContext* reservationSegment();

  class  ReservedIdentifiersContext : public antlr4::ParserRuleContext {
  public:
    ReservedIdentifiersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReservedIdentifierContext *> reservedIdentifier();
    ReservedIdentifierContext* reservedIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedIdentifiersContext* reservedIdentifiers();

  class  ReservedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ReservedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReservedIdentifierContext* reservedIdentifier();

  class  DefinitionalItemContext : public antlr4::ParserRuleContext {
  public:
    DefinitionalItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinitionalBlockContext *definitionalBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinitionalItemContext* definitionalItem();

  class  RegistrationItemContext : public antlr4::ParserRuleContext {
  public:
    RegistrationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RegistrationBlockContext *registrationBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegistrationItemContext* registrationItem();

  class  NotationItemContext : public antlr4::ParserRuleContext {
  public:
    NotationItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NotationBlockContext *notationBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NotationItemContext* notationItem();

  class  DefinitionalBlockContext : public antlr4::ParserRuleContext {
  public:
    DefinitionalBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DefinitionItemContext *> definitionItem();
    DefinitionItemContext* definitionItem(size_t i);
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);
    std::vector<RedefinitionContext *> redefinition();
    RedefinitionContext* redefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinitionalBlockContext* definitionalBlock();

  class  RegistrationBlockContext : public antlr4::ParserRuleContext {
  public:
    RegistrationBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LociDeclarationContext *> lociDeclaration();
    LociDeclarationContext* lociDeclaration(size_t i);
    std::vector<ClusterRegistrationContext *> clusterRegistration();
    ClusterRegistrationContext* clusterRegistration(size_t i);
    std::vector<IdentifyRegistrationContext *> identifyRegistration();
    IdentifyRegistrationContext* identifyRegistration(size_t i);
    std::vector<PropertyRegistrationContext *> propertyRegistration();
    PropertyRegistrationContext* propertyRegistration(size_t i);
    std::vector<ReductionRegistrationContext *> reductionRegistration();
    ReductionRegistrationContext* reductionRegistration(size_t i);
    std::vector<AuxiliaryItemContext *> auxiliaryItem();
    AuxiliaryItemContext* auxiliaryItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RegistrationBlockContext* registrationBlock();

  class  NotationBlockContext : public antlr4::ParserRuleContext {
  public:
    NotationBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LociDeclarationContext *> lociDeclaration();
    LociDeclarationContext* lociDeclaration(size_t i);
    std::vector<NotationDeclarationContext *> notationDeclaration();
    NotationDeclarationContext* notationDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NotationBlockContext* notationBlock();

  class  DefinitionItemContext : public antlr4::ParserRuleContext {
  public:
    DefinitionItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LociDeclarationContext *lociDeclaration();
    PermissiveAssumptionContext *permissiveAssumption();
    AuxiliaryItemContext *auxiliaryItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinitionItemContext* definitionItem();

  class  NotationDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NotationDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSynonymContext *attributeSynonym();
    AttributeAntonymContext *attributeAntonym();
    FunctorSynonymContext *functorSynonym();
    ModeSynonymContext *modeSynonym();
    PredicateSynonymContext *predicateSynonym();
    PredicateAntonymContext *predicateAntonym();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NotationDeclarationContext* notationDeclaration();

  class  LociDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LociDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedVariablesContext *qualifiedVariables();
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LociDeclarationContext* lociDeclaration();

  class  PermissiveAssumptionContext : public antlr4::ParserRuleContext {
  public:
    PermissiveAssumptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssumptionContext *assumption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PermissiveAssumptionContext* permissiveAssumption();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructureDefinitionContext *structureDefinition();
    ModeDefinitionContext *modeDefinition();
    FunctorDefinitionContext *functorDefinition();
    PredicateDefinitionContext *predicateDefinition();
    AttributeDefinitionContext *attributeDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinitionContext* definition();

  class  RedefinitionContext : public antlr4::ParserRuleContext {
  public:
    RedefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModeDefinitionContext *modeDefinition();
    FunctorDefinitionContext *functorDefinition();
    PredicateDefinitionContext *predicateDefinition();
    AttributeDefinitionContext *attributeDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RedefinitionContext* redefinition();

  class  StructureDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructureDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructureSymbolContext *structureSymbol();
    FieldsContext *fields();
    AncestorsContext *ancestors();
    LociContext *loci();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureDefinitionContext* structureDefinition();

  class  AncestorsContext : public antlr4::ParserRuleContext {
  public:
    AncestorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructureTypeExpressionContext *> structureTypeExpression();
    StructureTypeExpressionContext* structureTypeExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AncestorsContext* ancestors();

  class  StructureSymbolContext : public antlr4::ParserRuleContext {
  public:
    StructureSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCTURE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureSymbolContext* structureSymbol();

  class  LociContext : public antlr4::ParserRuleContext {
  public:
    LociContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LocusContext *> locus();
    LocusContext* locus(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LociContext* loci();

  class  FieldsContext : public antlr4::ParserRuleContext {
  public:
    FieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldSegmentContext *> fieldSegment();
    FieldSegmentContext* fieldSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldsContext* fields();

  class  LocusContext : public antlr4::ParserRuleContext {
  public:
    LocusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierContext *variableIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocusContext* locus();

  class  VariableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    VariableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableIdentifierContext* variableIdentifier();

  class  FieldSegmentContext : public antlr4::ParserRuleContext {
  public:
    FieldSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectorSymbolContext *> selectorSymbol();
    SelectorSymbolContext* selectorSymbol(size_t i);
    SpecificationContext *specification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldSegmentContext* fieldSegment();

  class  SelectorSymbolContext : public antlr4::ParserRuleContext {
  public:
    SelectorSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECTOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectorSymbolContext* selectorSymbol();

  class  SpecificationContext : public antlr4::ParserRuleContext {
  public:
    SpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpecificationContext* specification();

  class  ModeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ModeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModePatternContext *modePattern();
    CorrectnessConditionsContext *correctnessConditions();
    TypeExpressionContext *typeExpression();
    std::vector<ModePropertyContext *> modeProperty();
    ModePropertyContext* modeProperty(size_t i);
    SpecificationContext *specification();
    DefiniensContext *definiens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModeDefinitionContext* modeDefinition();

  class  ModePatternContext : public antlr4::ParserRuleContext {
  public:
    ModePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModeSymbolContext *modeSymbol();
    LociContext *loci();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModePatternContext* modePattern();

  class  ModeSymbolContext : public antlr4::ParserRuleContext {
  public:
    ModeSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModeSymbolContext* modeSymbol();

  class  ModeSynonymContext : public antlr4::ParserRuleContext {
  public:
    ModeSynonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ModePatternContext *> modePattern();
    ModePatternContext* modePattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModeSynonymContext* modeSynonym();

  class  DefiniensContext : public antlr4::ParserRuleContext {
  public:
    DefiniensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDefiniensContext *simpleDefiniens();
    ConditionalDefiniensContext *conditionalDefiniens();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefiniensContext* definiens();

  class  SimpleDefiniensContext : public antlr4::ParserRuleContext {
  public:
    SimpleDefiniensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SentenceContext *sentence();
    TermExpressionContext *termExpression();
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleDefiniensContext* simpleDefiniens();

  class  LabelIdentifierContext : public antlr4::ParserRuleContext {
  public:
    LabelIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelIdentifierContext* labelIdentifier();

  class  ConditionalDefiniensContext : public antlr4::ParserRuleContext {
  public:
    ConditionalDefiniensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PartialDefiniensListContext *partialDefiniensList();
    LabelIdentifierContext *labelIdentifier();
    SentenceContext *sentence();
    TermExpressionContext *termExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalDefiniensContext* conditionalDefiniens();

  class  PartialDefiniensListContext : public antlr4::ParserRuleContext {
  public:
    PartialDefiniensListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PartialDefiniensContext *> partialDefiniens();
    PartialDefiniensContext* partialDefiniens(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartialDefiniensListContext* partialDefiniensList();

  class  PartialDefiniensContext : public antlr4::ParserRuleContext {
  public:
    PartialDefiniensContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SentenceContext *> sentence();
    SentenceContext* sentence(size_t i);
    TermExpressionContext *termExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PartialDefiniensContext* partialDefiniens();

  class  ModePropertyContext : public antlr4::ParserRuleContext {
  public:
    ModePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModePropertyContext* modeProperty();

  class  FunctorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctorPatternContext *functorPattern();
    CorrectnessConditionsContext *correctnessConditions();
    SpecificationContext *specification();
    DefiniensContext *definiens();
    std::vector<FunctorPropertyContext *> functorProperty();
    FunctorPropertyContext* functorProperty(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorDefinitionContext* functorDefinition();

  class  FunctorPatternContext : public antlr4::ParserRuleContext {
  public:
    FunctorPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctorSymbolContext *functorSymbol();
    std::vector<FunctorLociContext *> functorLoci();
    FunctorLociContext* functorLoci(size_t i);
    LeftFunctorBracketContext *leftFunctorBracket();
    LociContext *loci();
    RightFunctorBracketContext *rightFunctorBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorPatternContext* functorPattern();

  class  FunctorPropertyContext : public antlr4::ParserRuleContext {
  public:
    FunctorPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorPropertyContext* functorProperty();

  class  FunctorSynonymContext : public antlr4::ParserRuleContext {
  public:
    FunctorSynonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctorPatternContext *> functorPattern();
    FunctorPatternContext* functorPattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorSynonymContext* functorSynonym();

  class  FunctorLociContext : public antlr4::ParserRuleContext {
  public:
    FunctorLociContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocusContext *locus();
    LociContext *loci();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorLociContext* functorLoci();

  class  FunctorSymbolContext : public antlr4::ParserRuleContext {
  public:
    FunctorSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorSymbolContext* functorSymbol();

  class  LeftFunctorBracketContext : public antlr4::ParserRuleContext {
  public:
    LeftFunctorBracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEFT_FUNCTOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LeftFunctorBracketContext* leftFunctorBracket();

  class  RightFunctorBracketContext : public antlr4::ParserRuleContext {
  public:
    RightFunctorBracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RIGHT_FUNCTOR_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RightFunctorBracketContext* rightFunctorBracket();

  class  PredicateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PredicateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicatePatternContext *predicatePattern();
    CorrectnessConditionsContext *correctnessConditions();
    DefiniensContext *definiens();
    std::vector<PredicatePropertyContext *> predicateProperty();
    PredicatePropertyContext* predicateProperty(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateDefinitionContext* predicateDefinition();

  class  PredicatePatternContext : public antlr4::ParserRuleContext {
  public:
    PredicatePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateSymbolContext *predicateSymbol();
    std::vector<LociContext *> loci();
    LociContext* loci(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicatePatternContext* predicatePattern();

  class  PredicatePropertyContext : public antlr4::ParserRuleContext {
  public:
    PredicatePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicatePropertyContext* predicateProperty();

  class  PredicateSynonymContext : public antlr4::ParserRuleContext {
  public:
    PredicateSynonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicatePatternContext *> predicatePattern();
    PredicatePatternContext* predicatePattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateSynonymContext* predicateSynonym();

  class  PredicateAntonymContext : public antlr4::ParserRuleContext {
  public:
    PredicateAntonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicatePatternContext *> predicatePattern();
    PredicatePatternContext* predicatePattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateAntonymContext* predicateAntonym();

  class  PredicateSymbolContext : public antlr4::ParserRuleContext {
  public:
    PredicateSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREDICATE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateSymbolContext* predicateSymbol();

  class  AttributeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AttributeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributePatternContext *attributePattern();
    DefiniensContext *definiens();
    CorrectnessConditionsContext *correctnessConditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeDefinitionContext* attributeDefinition();

  class  AttributePatternContext : public antlr4::ParserRuleContext {
  public:
    AttributePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocusContext *locus();
    AttributeSymbolContext *attributeSymbol();
    AttributeLociContext *attributeLoci();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributePatternContext* attributePattern();

  class  AttributeSynonymContext : public antlr4::ParserRuleContext {
  public:
    AttributeSynonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributePatternContext *> attributePattern();
    AttributePatternContext* attributePattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSynonymContext* attributeSynonym();

  class  AttributeAntonymContext : public antlr4::ParserRuleContext {
  public:
    AttributeAntonymContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributePatternContext *> attributePattern();
    AttributePatternContext* attributePattern(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeAntonymContext* attributeAntonym();

  class  AttributeSymbolContext : public antlr4::ParserRuleContext {
  public:
    AttributeSymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE_SYMBOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSymbolContext* attributeSymbol();

  class  AttributeLociContext : public antlr4::ParserRuleContext {
  public:
    AttributeLociContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LociContext *loci();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeLociContext* attributeLoci();

  class  ClusterRegistrationContext : public antlr4::ParserRuleContext {
  public:
    ClusterRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExistentialRegistrationContext *existentialRegistration();
    ConditionalRegistrationContext *conditionalRegistration();
    FunctorialRegistrationContext *functorialRegistration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClusterRegistrationContext* clusterRegistration();

  class  ExistentialRegistrationContext : public antlr4::ParserRuleContext {
  public:
    ExistentialRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdjectiveClusterContext *adjectiveCluster();
    TypeExpressionContext *typeExpression();
    CorrectnessConditionsContext *correctnessConditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExistentialRegistrationContext* existentialRegistration();

  class  AdjectiveClusterContext : public antlr4::ParserRuleContext {
  public:
    AdjectiveClusterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdjectiveContext *> adjective();
    AdjectiveContext* adjective(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdjectiveClusterContext* adjectiveCluster();

  class  AdjectiveContext : public antlr4::ParserRuleContext {
  public:
    AdjectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeSymbolContext *attributeSymbol();
    AdjectiveArgumentsContext *adjectiveArguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdjectiveContext* adjective();

  class  ConditionalRegistrationContext : public antlr4::ParserRuleContext {
  public:
    ConditionalRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AdjectiveClusterContext *> adjectiveCluster();
    AdjectiveClusterContext* adjectiveCluster(size_t i);
    TypeExpressionContext *typeExpression();
    CorrectnessConditionsContext *correctnessConditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalRegistrationContext* conditionalRegistration();

  class  FunctorialRegistrationContext : public antlr4::ParserRuleContext {
  public:
    FunctorialRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermExpressionContext *termExpression();
    AdjectiveClusterContext *adjectiveCluster();
    CorrectnessConditionsContext *correctnessConditions();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorialRegistrationContext* functorialRegistration();

  class  IdentifyRegistrationContext : public antlr4::ParserRuleContext {
  public:
    IdentifyRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctorPatternContext *> functorPattern();
    FunctorPatternContext* functorPattern(size_t i);
    CorrectnessConditionsContext *correctnessConditions();
    std::vector<LocusContext *> locus();
    LocusContext* locus(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifyRegistrationContext* identifyRegistration();

  class  PropertyRegistrationContext : public antlr4::ParserRuleContext {
  public:
    PropertyRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeExpressionContext *typeExpression();
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyRegistrationContext* propertyRegistration();

  class  ReductionRegistrationContext : public antlr4::ParserRuleContext {
  public:
    ReductionRegistrationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermExpressionContext *> termExpression();
    TermExpressionContext* termExpression(size_t i);
    CorrectnessConditionsContext *correctnessConditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReductionRegistrationContext* reductionRegistration();

  class  CorrectnessConditionsContext : public antlr4::ParserRuleContext {
  public:
    CorrectnessConditionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CorrectnessConditionContext *> correctnessCondition();
    CorrectnessConditionContext* correctnessCondition(size_t i);
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CorrectnessConditionsContext* correctnessConditions();

  class  CorrectnessConditionContext : public antlr4::ParserRuleContext {
  public:
    CorrectnessConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CorrectnessConditionContext* correctnessCondition();

  class  TheoremContext : public antlr4::ParserRuleContext {
  public:
    TheoremContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompactStatementContext *compactStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TheoremContext* theorem();

  class  SchemeItemContext : public antlr4::ParserRuleContext {
  public:
    SchemeItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeBlockContext *schemeBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeItemContext* schemeItem();

  class  SchemeBlockContext : public antlr4::ParserRuleContext {
  public:
    SchemeBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeIdentifierContext *schemeIdentifier();
    SchemeParametersContext *schemeParameters();
    SchemeConclusionContext *schemeConclusion();
    ReasoningContext *reasoning();
    std::vector<SchemePremiseContext *> schemePremise();
    SchemePremiseContext* schemePremise(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeBlockContext* schemeBlock();

  class  SchemeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SchemeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeIdentifierContext* schemeIdentifier();

  class  SchemeParametersContext : public antlr4::ParserRuleContext {
  public:
    SchemeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SchemeSegmentContext *> schemeSegment();
    SchemeSegmentContext* schemeSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeParametersContext* schemeParameters();

  class  SchemeConclusionContext : public antlr4::ParserRuleContext {
  public:
    SchemeConclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SentenceContext *sentence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeConclusionContext* schemeConclusion();

  class  SchemePremiseContext : public antlr4::ParserRuleContext {
  public:
    SchemePremiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropositionContext *proposition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemePremiseContext* schemePremise();

  class  SchemeSegmentContext : public antlr4::ParserRuleContext {
  public:
    SchemeSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateSegmentContext *predicateSegment();
    FunctorSegmentContext *functorSegment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeSegmentContext* schemeSegment();

  class  PredicateSegmentContext : public antlr4::ParserRuleContext {
  public:
    PredicateSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicateIdentifierContext *> predicateIdentifier();
    PredicateIdentifierContext* predicateIdentifier(size_t i);
    TypeExpressionListContext *typeExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateSegmentContext* predicateSegment();

  class  PredicateIdentifierContext : public antlr4::ParserRuleContext {
  public:
    PredicateIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PredicateIdentifierContext* predicateIdentifier();

  class  FunctorSegmentContext : public antlr4::ParserRuleContext {
  public:
    FunctorSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctorIdentifierContext *> functorIdentifier();
    FunctorIdentifierContext* functorIdentifier(size_t i);
    SpecificationContext *specification();
    TypeExpressionListContext *typeExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorSegmentContext* functorSegment();

  class  FunctorIdentifierContext : public antlr4::ParserRuleContext {
  public:
    FunctorIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctorIdentifierContext* functorIdentifier();

  class  AuxiliaryItemContext : public antlr4::ParserRuleContext {
  public:
    AuxiliaryItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    PrivateDefinitionContext *privateDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AuxiliaryItemContext* auxiliaryItem();

  class  PrivateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PrivateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDefinitionContext *constantDefinition();
    PrivateFunctorDefinitionContext *privateFunctorDefinition();
    PrivatePredicateDefinitionContext *privatePredicateDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivateDefinitionContext* privateDefinition();

  class  ConstantDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EquatingListContext *equatingList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantDefinitionContext* constantDefinition();

  class  EquatingListContext : public antlr4::ParserRuleContext {
  public:
    EquatingListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquatingContext *> equating();
    EquatingContext* equating(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquatingListContext* equatingList();

  class  EquatingContext : public antlr4::ParserRuleContext {
  public:
    EquatingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierContext *variableIdentifier();
    TermExpressionContext *termExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EquatingContext* equating();

  class  PrivateFunctorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PrivateFunctorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivateFunctorPatternContext *privateFunctorPattern();
    TermExpressionContext *termExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivateFunctorDefinitionContext* privateFunctorDefinition();

  class  PrivatePredicateDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PrivatePredicateDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrivatePredicatePatternContext *privatePredicatePattern();
    SentenceContext *sentence();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivatePredicateDefinitionContext* privatePredicateDefinition();

  class  PrivateFunctorPatternContext : public antlr4::ParserRuleContext {
  public:
    PrivateFunctorPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctorIdentifierContext *functorIdentifier();
    TypeExpressionListContext *typeExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivateFunctorPatternContext* privateFunctorPattern();

  class  PrivatePredicatePatternContext : public antlr4::ParserRuleContext {
  public:
    PrivatePredicatePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateIdentifierContext *predicateIdentifier();
    TypeExpressionListContext *typeExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivatePredicatePatternContext* privatePredicatePattern();

  class  ReasoningContext : public antlr4::ParserRuleContext {
  public:
    ReasoningContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReasoningItemContext *> reasoningItem();
    ReasoningItemContext* reasoningItem(size_t i);
    SimpleJustificationContext *simpleJustification();
    CaseListContext *caseList();
    SupposeListContext *supposeList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReasoningContext* reasoning();

  class  CaseListContext : public antlr4::ParserRuleContext {
  public:
    CaseListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseItemContext *> caseItem();
    CaseItemContext* caseItem(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseListContext* caseList();

  class  CaseItemContext : public antlr4::ParserRuleContext {
  public:
    CaseItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReasoningContext *reasoning();
    PropositionContext *proposition();
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaseItemContext* caseItem();

  class  SupposeListContext : public antlr4::ParserRuleContext {
  public:
    SupposeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SupposeContext *> suppose();
    SupposeContext* suppose(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SupposeListContext* supposeList();

  class  SupposeContext : public antlr4::ParserRuleContext {
  public:
    SupposeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReasoningContext *reasoning();
    PropositionContext *proposition();
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SupposeContext* suppose();

  class  ReasoningItemContext : public antlr4::ParserRuleContext {
  public:
    ReasoningItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AuxiliaryItemContext *auxiliaryItem();
    SkeletonItemContext *skeletonItem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReasoningItemContext* reasoningItem();

  class  SkeletonItemContext : public antlr4::ParserRuleContext {
  public:
    SkeletonItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GeneralizationContext *generalization();
    AssumptionContext *assumption();
    ConclusionContext *conclusion();
    ExemplificationContext *exemplification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SkeletonItemContext* skeletonItem();

  class  GeneralizationContext : public antlr4::ParserRuleContext {
  public:
    GeneralizationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedVariablesContext *qualifiedVariables();
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeneralizationContext* generalization();

  class  AssumptionContext : public antlr4::ParserRuleContext {
  public:
    AssumptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleAssumptionContext *singleAssumption();
    CollectiveAssumptionContext *collectiveAssumption();
    ExistentialAssumptionContext *existentialAssumption();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumptionContext* assumption();

  class  SingleAssumptionContext : public antlr4::ParserRuleContext {
  public:
    SingleAssumptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropositionContext *proposition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleAssumptionContext* singleAssumption();

  class  CollectiveAssumptionContext : public antlr4::ParserRuleContext {
  public:
    CollectiveAssumptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CollectiveAssumptionContext* collectiveAssumption();

  class  ExistentialAssumptionContext : public antlr4::ParserRuleContext {
  public:
    ExistentialAssumptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedVariablesContext *qualifiedVariables();
    ConditionsContext *conditions();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExistentialAssumptionContext* existentialAssumption();

  class  ConclusionContext : public antlr4::ParserRuleContext {
  public:
    ConclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompactStatementContext *compactStatement();
    IterativeEqualityContext *iterativeEquality();
    DiffuseConclusionContext *diffuseConclusion();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConclusionContext* conclusion();

  class  DiffuseConclusionContext : public antlr4::ParserRuleContext {
  public:
    DiffuseConclusionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DiffuseStatementContext *diffuseStatement();
    ReasoningContext *reasoning();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DiffuseConclusionContext* diffuseConclusion();

  class  ExemplificationContext : public antlr4::ParserRuleContext {
  public:
    ExemplificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExampleContext *> example();
    ExampleContext* example(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExemplificationContext* exemplification();

  class  ExampleContext : public antlr4::ParserRuleContext {
  public:
    ExampleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermExpressionContext *termExpression();
    VariableIdentifierContext *variableIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExampleContext* example();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LinkableStatementContext *linkableStatement();
    DiffuseStatementContext *diffuseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  LinkableStatementContext : public antlr4::ParserRuleContext {
  public:
    LinkableStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompactStatementContext *compactStatement();
    ChoiceStatementContext *choiceStatement();
    TypeChangingStatementContext *typeChangingStatement();
    IterativeEqualityContext *iterativeEquality();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LinkableStatementContext* linkableStatement();

  class  CompactStatementContext : public antlr4::ParserRuleContext {
  public:
    CompactStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropositionContext *proposition();
    JustificationContext *justification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompactStatementContext* compactStatement();

  class  ChoiceStatementContext : public antlr4::ParserRuleContext {
  public:
    ChoiceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedVariablesContext *qualifiedVariables();
    ConditionsContext *conditions();
    SimpleJustificationContext *simpleJustification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChoiceStatementContext* choiceStatement();

  class  TypeChangingStatementContext : public antlr4::ParserRuleContext {
  public:
    TypeChangingStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeChangeListContext *typeChangeList();
    TypeExpressionContext *typeExpression();
    SimpleJustificationContext *simpleJustification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeChangingStatementContext* typeChangingStatement();

  class  TypeChangeListContext : public antlr4::ParserRuleContext {
  public:
    TypeChangeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EquatingContext *> equating();
    EquatingContext* equating(size_t i);
    std::vector<VariableIdentifierContext *> variableIdentifier();
    VariableIdentifierContext* variableIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeChangeListContext* typeChangeList();

  class  IterativeEqualityContext : public antlr4::ParserRuleContext {
  public:
    IterativeEqualityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermExpressionContext *> termExpression();
    TermExpressionContext* termExpression(size_t i);
    std::vector<SimpleJustificationContext *> simpleJustification();
    SimpleJustificationContext* simpleJustification(size_t i);
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IterativeEqualityContext* iterativeEquality();

  class  DiffuseStatementContext : public antlr4::ParserRuleContext {
  public:
    DiffuseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReasoningContext *reasoning();
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DiffuseStatementContext* diffuseStatement();

  class  JustificationContext : public antlr4::ParserRuleContext {
  public:
    JustificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleJustificationContext *simpleJustification();
    ProofContext *proof();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JustificationContext* justification();

  class  SimpleJustificationContext : public antlr4::ParserRuleContext {
  public:
    SimpleJustificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StraightforwardJustificationContext *straightforwardJustification();
    SchemeJustificationContext *schemeJustification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleJustificationContext* simpleJustification();

  class  ProofContext : public antlr4::ParserRuleContext {
  public:
    ProofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReasoningContext *reasoning();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProofContext* proof();

  class  StraightforwardJustificationContext : public antlr4::ParserRuleContext {
  public:
    StraightforwardJustificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferencesContext *references();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StraightforwardJustificationContext* straightforwardJustification();

  class  SchemeJustificationContext : public antlr4::ParserRuleContext {
  public:
    SchemeJustificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeReferenceContext *schemeReference();
    ReferencesContext *references();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeJustificationContext* schemeJustification();

  class  ReferencesContext : public antlr4::ParserRuleContext {
  public:
    ReferencesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferencesContext* references();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalReferenceContext *localReference();
    LibraryReferenceContext *libraryReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceContext* reference();

  class  SchemeReferenceContext : public antlr4::ParserRuleContext {
  public:
    SchemeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalSchemeReferenceContext *localSchemeReference();
    LibrarySchemeReferenceContext *librarySchemeReference();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeReferenceContext* schemeReference();

  class  LocalReferenceContext : public antlr4::ParserRuleContext {
  public:
    LocalReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalReferenceContext* localReference();

  class  LocalSchemeReferenceContext : public antlr4::ParserRuleContext {
  public:
    LocalSchemeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SchemeIdentifierContext *schemeIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocalSchemeReferenceContext* localSchemeReference();

  class  LibraryReferenceContext : public antlr4::ParserRuleContext {
  public:
    LibraryReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArticleNameContext *articleName();
    std::vector<TheoremNumberContext *> theoremNumber();
    TheoremNumberContext* theoremNumber(size_t i);
    std::vector<DefinitionNumberContext *> definitionNumber();
    DefinitionNumberContext* definitionNumber(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibraryReferenceContext* libraryReference();

  class  LibrarySchemeReferenceContext : public antlr4::ParserRuleContext {
  public:
    LibrarySchemeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArticleNameContext *articleName();
    SchemeNumberContext *schemeNumber();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibrarySchemeReferenceContext* librarySchemeReference();

  class  TheoremNumberContext : public antlr4::ParserRuleContext {
  public:
    TheoremNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TheoremNumberContext* theoremNumber();

  class  DefinitionNumberContext : public antlr4::ParserRuleContext {
  public:
    DefinitionNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefinitionNumberContext* definitionNumber();

  class  SchemeNumberContext : public antlr4::ParserRuleContext {
  public:
    SchemeNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SchemeNumberContext* schemeNumber();

  class  ConditionsContext : public antlr4::ParserRuleContext {
  public:
    ConditionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PropositionContext *> proposition();
    PropositionContext* proposition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionsContext* conditions();

  class  PropositionContext : public antlr4::ParserRuleContext {
  public:
    PropositionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SentenceContext *sentence();
    LabelIdentifierContext *labelIdentifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropositionContext* proposition();

  class  SentenceContext : public antlr4::ParserRuleContext {
  public:
    SentenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FormulaExpressionContext *formulaExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SentenceContext* sentence();

  class  FormulaExpressionContext : public antlr4::ParserRuleContext {
  public:
    FormulaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormulaExpressionContext *> formulaExpression();
    FormulaExpressionContext* formulaExpression(size_t i);
    AtomicFormulaExpressionContext *atomicFormulaExpression();
    QuantifiedFormulaExpressionContext *quantifiedFormulaExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FormulaExpressionContext* formulaExpression();
  FormulaExpressionContext* formulaExpression(int precedence);
  class  AtomicFormulaExpressionContext : public antlr4::ParserRuleContext {
  public:
    AtomicFormulaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PredicateSymbolContext *> predicateSymbol();
    PredicateSymbolContext* predicateSymbol(size_t i);
    std::vector<TermExpressionListContext *> termExpressionList();
    TermExpressionListContext* termExpressionList(size_t i);
    PredicateIdentifierContext *predicateIdentifier();
    TermExpressionContext *termExpression();
    std::vector<AdjectiveContext *> adjective();
    AdjectiveContext* adjective(size_t i);
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AtomicFormulaExpressionContext* atomicFormulaExpression();

  class  QuantifiedFormulaExpressionContext : public antlr4::ParserRuleContext {
  public:
    QuantifiedFormulaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QualifiedVariablesContext *qualifiedVariables();
    std::vector<FormulaExpressionContext *> formulaExpression();
    FormulaExpressionContext* formulaExpression(size_t i);
    QuantifiedFormulaExpressionContext *quantifiedFormulaExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QuantifiedFormulaExpressionContext* quantifiedFormulaExpression();

  class  QualifiedVariablesContext : public antlr4::ParserRuleContext {
  public:
    QualifiedVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImplicitlyQualifiedVariablesContext *implicitlyQualifiedVariables();
    ExplicitlyQualifiedVariablesContext *explicitlyQualifiedVariables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedVariablesContext* qualifiedVariables();

  class  ImplicitlyQualifiedVariablesContext : public antlr4::ParserRuleContext {
  public:
    ImplicitlyQualifiedVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariablesContext *variables();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitlyQualifiedVariablesContext* implicitlyQualifiedVariables();

  class  ExplicitlyQualifiedVariablesContext : public antlr4::ParserRuleContext {
  public:
    ExplicitlyQualifiedVariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedSegmentContext *> qualifiedSegment();
    QualifiedSegmentContext* qualifiedSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplicitlyQualifiedVariablesContext* explicitlyQualifiedVariables();

  class  QualifiedSegmentContext : public antlr4::ParserRuleContext {
  public:
    QualifiedSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariablesContext *variables();
    QualificationContext *qualification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedSegmentContext* qualifiedSegment();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableIdentifierContext *> variableIdentifier();
    VariableIdentifierContext* variableIdentifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariablesContext* variables();

  class  QualificationContext : public antlr4::ParserRuleContext {
  public:
    QualificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualificationContext* qualification();

  class  TypeExpressionContext : public antlr4::ParserRuleContext {
  public:
    TypeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdjectiveClusterContext *adjectiveCluster();
    RadixTypeExpressionContext *radixTypeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeExpressionContext* typeExpression();

  class  RadixTypeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RadixTypeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RadixTypeContext *radixType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RadixTypeExpressionContext* radixTypeExpression();

  class  StructureTypeExpressionContext : public antlr4::ParserRuleContext {
  public:
    StructureTypeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructureSymbolContext *structureSymbol();
    TermExpressionListContext *termExpressionList();
    AdjectiveClusterContext *adjectiveCluster();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureTypeExpressionContext* structureTypeExpression();

  class  RadixTypeContext : public antlr4::ParserRuleContext {
  public:
    RadixTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModeSymbolContext *modeSymbol();
    TermExpressionListContext *termExpressionList();
    StructureSymbolContext *structureSymbol();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RadixTypeContext* radixType();

  class  TypeExpressionListContext : public antlr4::ParserRuleContext {
  public:
    TypeExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeExpressionContext *> typeExpression();
    TypeExpressionContext* typeExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeExpressionListContext* typeExpressionList();

  class  TermExpressionContext : public antlr4::ParserRuleContext {
  public:
    TermExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);
    std::vector<FunctorSymbolContext *> functorSymbol();
    FunctorSymbolContext* functorSymbol(size_t i);
    UnitaryTermContext *unitaryTerm();
    TermExpressionContext *termExpression();
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermExpressionContext* termExpression();
  TermExpressionContext* termExpression(int precedence);
  class  UnitaryTermContext : public antlr4::ParserRuleContext {
  public:
    UnitaryTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermExpressionContext *termExpression();
    LeftFunctorBracketContext *leftFunctorBracket();
    TermExpressionListContext *termExpressionList();
    RightFunctorBracketContext *rightFunctorBracket();
    FunctorIdentifierContext *functorIdentifier();
    StructureSymbolContext *structureSymbol();
    VariableIdentifierContext *variableIdentifier();
    SentenceContext *sentence();
    std::vector<PostqualificationContext *> postqualification();
    PostqualificationContext* postqualification(size_t i);
    antlr4::tree::TerminalNode *NUMERAL();
    SelectorSymbolContext *selectorSymbol();
    TypeExpressionContext *typeExpression();
    PrivateDefinitionParameterContext *privateDefinitionParameter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitaryTermContext* unitaryTerm();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnitaryTermContext *unitaryTerm();
    TermExpressionListContext *termExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgumentsContext* arguments();

  class  AdjectiveArgumentsContext : public antlr4::ParserRuleContext {
  public:
    AdjectiveArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermExpressionListContext *termExpressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdjectiveArgumentsContext* adjectiveArguments();

  class  TermExpressionListContext : public antlr4::ParserRuleContext {
  public:
    TermExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermExpressionContext *> termExpression();
    TermExpressionContext* termExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermExpressionListContext* termExpressionList();

  class  PostqualificationContext : public antlr4::ParserRuleContext {
  public:
    PostqualificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PostqualifyingSegmentContext *> postqualifyingSegment();
    PostqualifyingSegmentContext* postqualifyingSegment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostqualificationContext* postqualification();

  class  PostqualifyingSegmentContext : public antlr4::ParserRuleContext {
  public:
    PostqualifyingSegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PostqualifiedVariableContext *> postqualifiedVariable();
    PostqualifiedVariableContext* postqualifiedVariable(size_t i);
    TypeExpressionContext *typeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostqualifyingSegmentContext* postqualifyingSegment();

  class  PostqualifiedVariableContext : public antlr4::ParserRuleContext {
  public:
    PostqualifiedVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostqualifiedVariableContext* postqualifiedVariable();

  class  PrivateDefinitionParameterContext : public antlr4::ParserRuleContext {
  public:
    PrivateDefinitionParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrivateDefinitionParameterContext* privateDefinitionParameter();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool formulaExpressionSempred(FormulaExpressionContext *_localctx, size_t predicateIndex);
  bool termExpressionSempred(TermExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

