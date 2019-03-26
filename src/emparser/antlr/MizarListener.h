
// Generated from c:\dev\mimosa-project\emparser\src\emparser\antlr\Mizar.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MizarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MizarParser.
 */
class  MizarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterArticle(MizarParser::ArticleContext *ctx) = 0;
  virtual void exitArticle(MizarParser::ArticleContext *ctx) = 0;

  virtual void enterEnvironmentDeclaration(MizarParser::EnvironmentDeclarationContext *ctx) = 0;
  virtual void exitEnvironmentDeclaration(MizarParser::EnvironmentDeclarationContext *ctx) = 0;

  virtual void enterDirective(MizarParser::DirectiveContext *ctx) = 0;
  virtual void exitDirective(MizarParser::DirectiveContext *ctx) = 0;

  virtual void enterVocabularyDirective(MizarParser::VocabularyDirectiveContext *ctx) = 0;
  virtual void exitVocabularyDirective(MizarParser::VocabularyDirectiveContext *ctx) = 0;

  virtual void enterVocabularyName(MizarParser::VocabularyNameContext *ctx) = 0;
  virtual void exitVocabularyName(MizarParser::VocabularyNameContext *ctx) = 0;

  virtual void enterLibraryDirective(MizarParser::LibraryDirectiveContext *ctx) = 0;
  virtual void exitLibraryDirective(MizarParser::LibraryDirectiveContext *ctx) = 0;

  virtual void enterArticleName(MizarParser::ArticleNameContext *ctx) = 0;
  virtual void exitArticleName(MizarParser::ArticleNameContext *ctx) = 0;

  virtual void enterRequirementDirective(MizarParser::RequirementDirectiveContext *ctx) = 0;
  virtual void exitRequirementDirective(MizarParser::RequirementDirectiveContext *ctx) = 0;

  virtual void enterRequirement(MizarParser::RequirementContext *ctx) = 0;
  virtual void exitRequirement(MizarParser::RequirementContext *ctx) = 0;

  virtual void enterTextProper(MizarParser::TextProperContext *ctx) = 0;
  virtual void exitTextProper(MizarParser::TextProperContext *ctx) = 0;

  virtual void enterSection(MizarParser::SectionContext *ctx) = 0;
  virtual void exitSection(MizarParser::SectionContext *ctx) = 0;

  virtual void enterTextItem(MizarParser::TextItemContext *ctx) = 0;
  virtual void exitTextItem(MizarParser::TextItemContext *ctx) = 0;

  virtual void enterReservation(MizarParser::ReservationContext *ctx) = 0;
  virtual void exitReservation(MizarParser::ReservationContext *ctx) = 0;

  virtual void enterReservationSegment(MizarParser::ReservationSegmentContext *ctx) = 0;
  virtual void exitReservationSegment(MizarParser::ReservationSegmentContext *ctx) = 0;

  virtual void enterReservedIdentifiers(MizarParser::ReservedIdentifiersContext *ctx) = 0;
  virtual void exitReservedIdentifiers(MizarParser::ReservedIdentifiersContext *ctx) = 0;

  virtual void enterReservedIdentifier(MizarParser::ReservedIdentifierContext *ctx) = 0;
  virtual void exitReservedIdentifier(MizarParser::ReservedIdentifierContext *ctx) = 0;

  virtual void enterDefinitionalItem(MizarParser::DefinitionalItemContext *ctx) = 0;
  virtual void exitDefinitionalItem(MizarParser::DefinitionalItemContext *ctx) = 0;

  virtual void enterRegistrationItem(MizarParser::RegistrationItemContext *ctx) = 0;
  virtual void exitRegistrationItem(MizarParser::RegistrationItemContext *ctx) = 0;

  virtual void enterNotationItem(MizarParser::NotationItemContext *ctx) = 0;
  virtual void exitNotationItem(MizarParser::NotationItemContext *ctx) = 0;

  virtual void enterDefinitionalBlock(MizarParser::DefinitionalBlockContext *ctx) = 0;
  virtual void exitDefinitionalBlock(MizarParser::DefinitionalBlockContext *ctx) = 0;

  virtual void enterRegistrationBlock(MizarParser::RegistrationBlockContext *ctx) = 0;
  virtual void exitRegistrationBlock(MizarParser::RegistrationBlockContext *ctx) = 0;

  virtual void enterNotationBlock(MizarParser::NotationBlockContext *ctx) = 0;
  virtual void exitNotationBlock(MizarParser::NotationBlockContext *ctx) = 0;

  virtual void enterDefinitionItem(MizarParser::DefinitionItemContext *ctx) = 0;
  virtual void exitDefinitionItem(MizarParser::DefinitionItemContext *ctx) = 0;

  virtual void enterNotationDeclaration(MizarParser::NotationDeclarationContext *ctx) = 0;
  virtual void exitNotationDeclaration(MizarParser::NotationDeclarationContext *ctx) = 0;

  virtual void enterLociDeclaration(MizarParser::LociDeclarationContext *ctx) = 0;
  virtual void exitLociDeclaration(MizarParser::LociDeclarationContext *ctx) = 0;

  virtual void enterPermissiveAssumption(MizarParser::PermissiveAssumptionContext *ctx) = 0;
  virtual void exitPermissiveAssumption(MizarParser::PermissiveAssumptionContext *ctx) = 0;

  virtual void enterDefinition(MizarParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(MizarParser::DefinitionContext *ctx) = 0;

  virtual void enterRedefinition(MizarParser::RedefinitionContext *ctx) = 0;
  virtual void exitRedefinition(MizarParser::RedefinitionContext *ctx) = 0;

  virtual void enterStructureDefinition(MizarParser::StructureDefinitionContext *ctx) = 0;
  virtual void exitStructureDefinition(MizarParser::StructureDefinitionContext *ctx) = 0;

  virtual void enterAncestors(MizarParser::AncestorsContext *ctx) = 0;
  virtual void exitAncestors(MizarParser::AncestorsContext *ctx) = 0;

  virtual void enterStructureSymbol(MizarParser::StructureSymbolContext *ctx) = 0;
  virtual void exitStructureSymbol(MizarParser::StructureSymbolContext *ctx) = 0;

  virtual void enterLoci(MizarParser::LociContext *ctx) = 0;
  virtual void exitLoci(MizarParser::LociContext *ctx) = 0;

  virtual void enterFields(MizarParser::FieldsContext *ctx) = 0;
  virtual void exitFields(MizarParser::FieldsContext *ctx) = 0;

  virtual void enterLocus(MizarParser::LocusContext *ctx) = 0;
  virtual void exitLocus(MizarParser::LocusContext *ctx) = 0;

  virtual void enterVariableIdentifier(MizarParser::VariableIdentifierContext *ctx) = 0;
  virtual void exitVariableIdentifier(MizarParser::VariableIdentifierContext *ctx) = 0;

  virtual void enterFieldSegment(MizarParser::FieldSegmentContext *ctx) = 0;
  virtual void exitFieldSegment(MizarParser::FieldSegmentContext *ctx) = 0;

  virtual void enterSelectorSymbol(MizarParser::SelectorSymbolContext *ctx) = 0;
  virtual void exitSelectorSymbol(MizarParser::SelectorSymbolContext *ctx) = 0;

  virtual void enterSpecification(MizarParser::SpecificationContext *ctx) = 0;
  virtual void exitSpecification(MizarParser::SpecificationContext *ctx) = 0;

  virtual void enterModeDefinition(MizarParser::ModeDefinitionContext *ctx) = 0;
  virtual void exitModeDefinition(MizarParser::ModeDefinitionContext *ctx) = 0;

  virtual void enterModePattern(MizarParser::ModePatternContext *ctx) = 0;
  virtual void exitModePattern(MizarParser::ModePatternContext *ctx) = 0;

  virtual void enterModeSymbol(MizarParser::ModeSymbolContext *ctx) = 0;
  virtual void exitModeSymbol(MizarParser::ModeSymbolContext *ctx) = 0;

  virtual void enterModeSynonym(MizarParser::ModeSynonymContext *ctx) = 0;
  virtual void exitModeSynonym(MizarParser::ModeSynonymContext *ctx) = 0;

  virtual void enterDefiniens(MizarParser::DefiniensContext *ctx) = 0;
  virtual void exitDefiniens(MizarParser::DefiniensContext *ctx) = 0;

  virtual void enterSimpleDefiniens(MizarParser::SimpleDefiniensContext *ctx) = 0;
  virtual void exitSimpleDefiniens(MizarParser::SimpleDefiniensContext *ctx) = 0;

  virtual void enterLabelIdentifier(MizarParser::LabelIdentifierContext *ctx) = 0;
  virtual void exitLabelIdentifier(MizarParser::LabelIdentifierContext *ctx) = 0;

  virtual void enterConditionalDefiniens(MizarParser::ConditionalDefiniensContext *ctx) = 0;
  virtual void exitConditionalDefiniens(MizarParser::ConditionalDefiniensContext *ctx) = 0;

  virtual void enterPartialDefiniensList(MizarParser::PartialDefiniensListContext *ctx) = 0;
  virtual void exitPartialDefiniensList(MizarParser::PartialDefiniensListContext *ctx) = 0;

  virtual void enterPartialDefiniens(MizarParser::PartialDefiniensContext *ctx) = 0;
  virtual void exitPartialDefiniens(MizarParser::PartialDefiniensContext *ctx) = 0;

  virtual void enterModeProperty(MizarParser::ModePropertyContext *ctx) = 0;
  virtual void exitModeProperty(MizarParser::ModePropertyContext *ctx) = 0;

  virtual void enterFunctorDefinition(MizarParser::FunctorDefinitionContext *ctx) = 0;
  virtual void exitFunctorDefinition(MizarParser::FunctorDefinitionContext *ctx) = 0;

  virtual void enterFunctorPattern(MizarParser::FunctorPatternContext *ctx) = 0;
  virtual void exitFunctorPattern(MizarParser::FunctorPatternContext *ctx) = 0;

  virtual void enterFunctorProperty(MizarParser::FunctorPropertyContext *ctx) = 0;
  virtual void exitFunctorProperty(MizarParser::FunctorPropertyContext *ctx) = 0;

  virtual void enterFunctorSynonym(MizarParser::FunctorSynonymContext *ctx) = 0;
  virtual void exitFunctorSynonym(MizarParser::FunctorSynonymContext *ctx) = 0;

  virtual void enterFunctorLoci(MizarParser::FunctorLociContext *ctx) = 0;
  virtual void exitFunctorLoci(MizarParser::FunctorLociContext *ctx) = 0;

  virtual void enterFunctorSymbol(MizarParser::FunctorSymbolContext *ctx) = 0;
  virtual void exitFunctorSymbol(MizarParser::FunctorSymbolContext *ctx) = 0;

  virtual void enterLeftFunctorBracket(MizarParser::LeftFunctorBracketContext *ctx) = 0;
  virtual void exitLeftFunctorBracket(MizarParser::LeftFunctorBracketContext *ctx) = 0;

  virtual void enterRightFunctorBracket(MizarParser::RightFunctorBracketContext *ctx) = 0;
  virtual void exitRightFunctorBracket(MizarParser::RightFunctorBracketContext *ctx) = 0;

  virtual void enterPredicateDefinition(MizarParser::PredicateDefinitionContext *ctx) = 0;
  virtual void exitPredicateDefinition(MizarParser::PredicateDefinitionContext *ctx) = 0;

  virtual void enterPredicatePattern(MizarParser::PredicatePatternContext *ctx) = 0;
  virtual void exitPredicatePattern(MizarParser::PredicatePatternContext *ctx) = 0;

  virtual void enterPredicateProperty(MizarParser::PredicatePropertyContext *ctx) = 0;
  virtual void exitPredicateProperty(MizarParser::PredicatePropertyContext *ctx) = 0;

  virtual void enterPredicateSynonym(MizarParser::PredicateSynonymContext *ctx) = 0;
  virtual void exitPredicateSynonym(MizarParser::PredicateSynonymContext *ctx) = 0;

  virtual void enterPredicateAntonym(MizarParser::PredicateAntonymContext *ctx) = 0;
  virtual void exitPredicateAntonym(MizarParser::PredicateAntonymContext *ctx) = 0;

  virtual void enterPredicateSymbol(MizarParser::PredicateSymbolContext *ctx) = 0;
  virtual void exitPredicateSymbol(MizarParser::PredicateSymbolContext *ctx) = 0;

  virtual void enterAttributeDefinition(MizarParser::AttributeDefinitionContext *ctx) = 0;
  virtual void exitAttributeDefinition(MizarParser::AttributeDefinitionContext *ctx) = 0;

  virtual void enterAttributePattern(MizarParser::AttributePatternContext *ctx) = 0;
  virtual void exitAttributePattern(MizarParser::AttributePatternContext *ctx) = 0;

  virtual void enterAttributeSynonym(MizarParser::AttributeSynonymContext *ctx) = 0;
  virtual void exitAttributeSynonym(MizarParser::AttributeSynonymContext *ctx) = 0;

  virtual void enterAttributeAntonym(MizarParser::AttributeAntonymContext *ctx) = 0;
  virtual void exitAttributeAntonym(MizarParser::AttributeAntonymContext *ctx) = 0;

  virtual void enterAttributeSymbol(MizarParser::AttributeSymbolContext *ctx) = 0;
  virtual void exitAttributeSymbol(MizarParser::AttributeSymbolContext *ctx) = 0;

  virtual void enterAttributeLoci(MizarParser::AttributeLociContext *ctx) = 0;
  virtual void exitAttributeLoci(MizarParser::AttributeLociContext *ctx) = 0;

  virtual void enterClusterRegistration(MizarParser::ClusterRegistrationContext *ctx) = 0;
  virtual void exitClusterRegistration(MizarParser::ClusterRegistrationContext *ctx) = 0;

  virtual void enterExistentialRegistration(MizarParser::ExistentialRegistrationContext *ctx) = 0;
  virtual void exitExistentialRegistration(MizarParser::ExistentialRegistrationContext *ctx) = 0;

  virtual void enterAdjectiveCluster(MizarParser::AdjectiveClusterContext *ctx) = 0;
  virtual void exitAdjectiveCluster(MizarParser::AdjectiveClusterContext *ctx) = 0;

  virtual void enterAdjective(MizarParser::AdjectiveContext *ctx) = 0;
  virtual void exitAdjective(MizarParser::AdjectiveContext *ctx) = 0;

  virtual void enterConditionalRegistration(MizarParser::ConditionalRegistrationContext *ctx) = 0;
  virtual void exitConditionalRegistration(MizarParser::ConditionalRegistrationContext *ctx) = 0;

  virtual void enterFunctorialRegistration(MizarParser::FunctorialRegistrationContext *ctx) = 0;
  virtual void exitFunctorialRegistration(MizarParser::FunctorialRegistrationContext *ctx) = 0;

  virtual void enterIdentifyRegistration(MizarParser::IdentifyRegistrationContext *ctx) = 0;
  virtual void exitIdentifyRegistration(MizarParser::IdentifyRegistrationContext *ctx) = 0;

  virtual void enterPropertyRegistration(MizarParser::PropertyRegistrationContext *ctx) = 0;
  virtual void exitPropertyRegistration(MizarParser::PropertyRegistrationContext *ctx) = 0;

  virtual void enterReductionRegistration(MizarParser::ReductionRegistrationContext *ctx) = 0;
  virtual void exitReductionRegistration(MizarParser::ReductionRegistrationContext *ctx) = 0;

  virtual void enterCorrectnessConditions(MizarParser::CorrectnessConditionsContext *ctx) = 0;
  virtual void exitCorrectnessConditions(MizarParser::CorrectnessConditionsContext *ctx) = 0;

  virtual void enterCorrectnessCondition(MizarParser::CorrectnessConditionContext *ctx) = 0;
  virtual void exitCorrectnessCondition(MizarParser::CorrectnessConditionContext *ctx) = 0;

  virtual void enterTheorem(MizarParser::TheoremContext *ctx) = 0;
  virtual void exitTheorem(MizarParser::TheoremContext *ctx) = 0;

  virtual void enterSchemeItem(MizarParser::SchemeItemContext *ctx) = 0;
  virtual void exitSchemeItem(MizarParser::SchemeItemContext *ctx) = 0;

  virtual void enterSchemeBlock(MizarParser::SchemeBlockContext *ctx) = 0;
  virtual void exitSchemeBlock(MizarParser::SchemeBlockContext *ctx) = 0;

  virtual void enterSchemeIdentifier(MizarParser::SchemeIdentifierContext *ctx) = 0;
  virtual void exitSchemeIdentifier(MizarParser::SchemeIdentifierContext *ctx) = 0;

  virtual void enterSchemeParameters(MizarParser::SchemeParametersContext *ctx) = 0;
  virtual void exitSchemeParameters(MizarParser::SchemeParametersContext *ctx) = 0;

  virtual void enterSchemeConclusion(MizarParser::SchemeConclusionContext *ctx) = 0;
  virtual void exitSchemeConclusion(MizarParser::SchemeConclusionContext *ctx) = 0;

  virtual void enterSchemePremise(MizarParser::SchemePremiseContext *ctx) = 0;
  virtual void exitSchemePremise(MizarParser::SchemePremiseContext *ctx) = 0;

  virtual void enterSchemeSegment(MizarParser::SchemeSegmentContext *ctx) = 0;
  virtual void exitSchemeSegment(MizarParser::SchemeSegmentContext *ctx) = 0;

  virtual void enterPredicateSegment(MizarParser::PredicateSegmentContext *ctx) = 0;
  virtual void exitPredicateSegment(MizarParser::PredicateSegmentContext *ctx) = 0;

  virtual void enterPredicateIdentifier(MizarParser::PredicateIdentifierContext *ctx) = 0;
  virtual void exitPredicateIdentifier(MizarParser::PredicateIdentifierContext *ctx) = 0;

  virtual void enterFunctorSegment(MizarParser::FunctorSegmentContext *ctx) = 0;
  virtual void exitFunctorSegment(MizarParser::FunctorSegmentContext *ctx) = 0;

  virtual void enterFunctorIdentifier(MizarParser::FunctorIdentifierContext *ctx) = 0;
  virtual void exitFunctorIdentifier(MizarParser::FunctorIdentifierContext *ctx) = 0;

  virtual void enterAuxiliaryItem(MizarParser::AuxiliaryItemContext *ctx) = 0;
  virtual void exitAuxiliaryItem(MizarParser::AuxiliaryItemContext *ctx) = 0;

  virtual void enterPrivateDefinition(MizarParser::PrivateDefinitionContext *ctx) = 0;
  virtual void exitPrivateDefinition(MizarParser::PrivateDefinitionContext *ctx) = 0;

  virtual void enterConstantDefinition(MizarParser::ConstantDefinitionContext *ctx) = 0;
  virtual void exitConstantDefinition(MizarParser::ConstantDefinitionContext *ctx) = 0;

  virtual void enterEquatingList(MizarParser::EquatingListContext *ctx) = 0;
  virtual void exitEquatingList(MizarParser::EquatingListContext *ctx) = 0;

  virtual void enterEquating(MizarParser::EquatingContext *ctx) = 0;
  virtual void exitEquating(MizarParser::EquatingContext *ctx) = 0;

  virtual void enterPrivateFunctorDefinition(MizarParser::PrivateFunctorDefinitionContext *ctx) = 0;
  virtual void exitPrivateFunctorDefinition(MizarParser::PrivateFunctorDefinitionContext *ctx) = 0;

  virtual void enterPrivatePredicateDefinition(MizarParser::PrivatePredicateDefinitionContext *ctx) = 0;
  virtual void exitPrivatePredicateDefinition(MizarParser::PrivatePredicateDefinitionContext *ctx) = 0;

  virtual void enterPrivateFunctorPattern(MizarParser::PrivateFunctorPatternContext *ctx) = 0;
  virtual void exitPrivateFunctorPattern(MizarParser::PrivateFunctorPatternContext *ctx) = 0;

  virtual void enterPrivatePredicatePattern(MizarParser::PrivatePredicatePatternContext *ctx) = 0;
  virtual void exitPrivatePredicatePattern(MizarParser::PrivatePredicatePatternContext *ctx) = 0;

  virtual void enterReasoning(MizarParser::ReasoningContext *ctx) = 0;
  virtual void exitReasoning(MizarParser::ReasoningContext *ctx) = 0;

  virtual void enterCaseList(MizarParser::CaseListContext *ctx) = 0;
  virtual void exitCaseList(MizarParser::CaseListContext *ctx) = 0;

  virtual void enterCaseItem(MizarParser::CaseItemContext *ctx) = 0;
  virtual void exitCaseItem(MizarParser::CaseItemContext *ctx) = 0;

  virtual void enterSupposeList(MizarParser::SupposeListContext *ctx) = 0;
  virtual void exitSupposeList(MizarParser::SupposeListContext *ctx) = 0;

  virtual void enterSuppose(MizarParser::SupposeContext *ctx) = 0;
  virtual void exitSuppose(MizarParser::SupposeContext *ctx) = 0;

  virtual void enterReasoningItem(MizarParser::ReasoningItemContext *ctx) = 0;
  virtual void exitReasoningItem(MizarParser::ReasoningItemContext *ctx) = 0;

  virtual void enterSkeletonItem(MizarParser::SkeletonItemContext *ctx) = 0;
  virtual void exitSkeletonItem(MizarParser::SkeletonItemContext *ctx) = 0;

  virtual void enterGeneralization(MizarParser::GeneralizationContext *ctx) = 0;
  virtual void exitGeneralization(MizarParser::GeneralizationContext *ctx) = 0;

  virtual void enterAssumption(MizarParser::AssumptionContext *ctx) = 0;
  virtual void exitAssumption(MizarParser::AssumptionContext *ctx) = 0;

  virtual void enterSingleAssumption(MizarParser::SingleAssumptionContext *ctx) = 0;
  virtual void exitSingleAssumption(MizarParser::SingleAssumptionContext *ctx) = 0;

  virtual void enterCollectiveAssumption(MizarParser::CollectiveAssumptionContext *ctx) = 0;
  virtual void exitCollectiveAssumption(MizarParser::CollectiveAssumptionContext *ctx) = 0;

  virtual void enterExistentialAssumption(MizarParser::ExistentialAssumptionContext *ctx) = 0;
  virtual void exitExistentialAssumption(MizarParser::ExistentialAssumptionContext *ctx) = 0;

  virtual void enterConclusion(MizarParser::ConclusionContext *ctx) = 0;
  virtual void exitConclusion(MizarParser::ConclusionContext *ctx) = 0;

  virtual void enterDiffuseConclusion(MizarParser::DiffuseConclusionContext *ctx) = 0;
  virtual void exitDiffuseConclusion(MizarParser::DiffuseConclusionContext *ctx) = 0;

  virtual void enterExemplification(MizarParser::ExemplificationContext *ctx) = 0;
  virtual void exitExemplification(MizarParser::ExemplificationContext *ctx) = 0;

  virtual void enterExample(MizarParser::ExampleContext *ctx) = 0;
  virtual void exitExample(MizarParser::ExampleContext *ctx) = 0;

  virtual void enterStatement(MizarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(MizarParser::StatementContext *ctx) = 0;

  virtual void enterLinkableStatement(MizarParser::LinkableStatementContext *ctx) = 0;
  virtual void exitLinkableStatement(MizarParser::LinkableStatementContext *ctx) = 0;

  virtual void enterCompactStatement(MizarParser::CompactStatementContext *ctx) = 0;
  virtual void exitCompactStatement(MizarParser::CompactStatementContext *ctx) = 0;

  virtual void enterChoiceStatement(MizarParser::ChoiceStatementContext *ctx) = 0;
  virtual void exitChoiceStatement(MizarParser::ChoiceStatementContext *ctx) = 0;

  virtual void enterTypeChangingStatement(MizarParser::TypeChangingStatementContext *ctx) = 0;
  virtual void exitTypeChangingStatement(MizarParser::TypeChangingStatementContext *ctx) = 0;

  virtual void enterTypeChangeList(MizarParser::TypeChangeListContext *ctx) = 0;
  virtual void exitTypeChangeList(MizarParser::TypeChangeListContext *ctx) = 0;

  virtual void enterIterativeEquality(MizarParser::IterativeEqualityContext *ctx) = 0;
  virtual void exitIterativeEquality(MizarParser::IterativeEqualityContext *ctx) = 0;

  virtual void enterDiffuseStatement(MizarParser::DiffuseStatementContext *ctx) = 0;
  virtual void exitDiffuseStatement(MizarParser::DiffuseStatementContext *ctx) = 0;

  virtual void enterJustification(MizarParser::JustificationContext *ctx) = 0;
  virtual void exitJustification(MizarParser::JustificationContext *ctx) = 0;

  virtual void enterSimpleJustification(MizarParser::SimpleJustificationContext *ctx) = 0;
  virtual void exitSimpleJustification(MizarParser::SimpleJustificationContext *ctx) = 0;

  virtual void enterProof(MizarParser::ProofContext *ctx) = 0;
  virtual void exitProof(MizarParser::ProofContext *ctx) = 0;

  virtual void enterStraightforwardJustification(MizarParser::StraightforwardJustificationContext *ctx) = 0;
  virtual void exitStraightforwardJustification(MizarParser::StraightforwardJustificationContext *ctx) = 0;

  virtual void enterSchemeJustification(MizarParser::SchemeJustificationContext *ctx) = 0;
  virtual void exitSchemeJustification(MizarParser::SchemeJustificationContext *ctx) = 0;

  virtual void enterReferences(MizarParser::ReferencesContext *ctx) = 0;
  virtual void exitReferences(MizarParser::ReferencesContext *ctx) = 0;

  virtual void enterReference(MizarParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(MizarParser::ReferenceContext *ctx) = 0;

  virtual void enterSchemeReference(MizarParser::SchemeReferenceContext *ctx) = 0;
  virtual void exitSchemeReference(MizarParser::SchemeReferenceContext *ctx) = 0;

  virtual void enterLocalReference(MizarParser::LocalReferenceContext *ctx) = 0;
  virtual void exitLocalReference(MizarParser::LocalReferenceContext *ctx) = 0;

  virtual void enterLocalSchemeReference(MizarParser::LocalSchemeReferenceContext *ctx) = 0;
  virtual void exitLocalSchemeReference(MizarParser::LocalSchemeReferenceContext *ctx) = 0;

  virtual void enterLibraryReference(MizarParser::LibraryReferenceContext *ctx) = 0;
  virtual void exitLibraryReference(MizarParser::LibraryReferenceContext *ctx) = 0;

  virtual void enterLibrarySchemeReference(MizarParser::LibrarySchemeReferenceContext *ctx) = 0;
  virtual void exitLibrarySchemeReference(MizarParser::LibrarySchemeReferenceContext *ctx) = 0;

  virtual void enterTheoremNumber(MizarParser::TheoremNumberContext *ctx) = 0;
  virtual void exitTheoremNumber(MizarParser::TheoremNumberContext *ctx) = 0;

  virtual void enterDefinitionNumber(MizarParser::DefinitionNumberContext *ctx) = 0;
  virtual void exitDefinitionNumber(MizarParser::DefinitionNumberContext *ctx) = 0;

  virtual void enterSchemeNumber(MizarParser::SchemeNumberContext *ctx) = 0;
  virtual void exitSchemeNumber(MizarParser::SchemeNumberContext *ctx) = 0;

  virtual void enterConditions(MizarParser::ConditionsContext *ctx) = 0;
  virtual void exitConditions(MizarParser::ConditionsContext *ctx) = 0;

  virtual void enterProposition(MizarParser::PropositionContext *ctx) = 0;
  virtual void exitProposition(MizarParser::PropositionContext *ctx) = 0;

  virtual void enterSentence(MizarParser::SentenceContext *ctx) = 0;
  virtual void exitSentence(MizarParser::SentenceContext *ctx) = 0;

  virtual void enterFormulaExpression(MizarParser::FormulaExpressionContext *ctx) = 0;
  virtual void exitFormulaExpression(MizarParser::FormulaExpressionContext *ctx) = 0;

  virtual void enterAtomicFormulaExpression(MizarParser::AtomicFormulaExpressionContext *ctx) = 0;
  virtual void exitAtomicFormulaExpression(MizarParser::AtomicFormulaExpressionContext *ctx) = 0;

  virtual void enterQuantifiedFormulaExpression(MizarParser::QuantifiedFormulaExpressionContext *ctx) = 0;
  virtual void exitQuantifiedFormulaExpression(MizarParser::QuantifiedFormulaExpressionContext *ctx) = 0;

  virtual void enterQualifiedVariables(MizarParser::QualifiedVariablesContext *ctx) = 0;
  virtual void exitQualifiedVariables(MizarParser::QualifiedVariablesContext *ctx) = 0;

  virtual void enterImplicitlyQualifiedVariables(MizarParser::ImplicitlyQualifiedVariablesContext *ctx) = 0;
  virtual void exitImplicitlyQualifiedVariables(MizarParser::ImplicitlyQualifiedVariablesContext *ctx) = 0;

  virtual void enterExplicitlyQualifiedVariables(MizarParser::ExplicitlyQualifiedVariablesContext *ctx) = 0;
  virtual void exitExplicitlyQualifiedVariables(MizarParser::ExplicitlyQualifiedVariablesContext *ctx) = 0;

  virtual void enterQualifiedSegment(MizarParser::QualifiedSegmentContext *ctx) = 0;
  virtual void exitQualifiedSegment(MizarParser::QualifiedSegmentContext *ctx) = 0;

  virtual void enterVariables(MizarParser::VariablesContext *ctx) = 0;
  virtual void exitVariables(MizarParser::VariablesContext *ctx) = 0;

  virtual void enterQualification(MizarParser::QualificationContext *ctx) = 0;
  virtual void exitQualification(MizarParser::QualificationContext *ctx) = 0;

  virtual void enterTypeExpression(MizarParser::TypeExpressionContext *ctx) = 0;
  virtual void exitTypeExpression(MizarParser::TypeExpressionContext *ctx) = 0;

  virtual void enterRadixTypeExpression(MizarParser::RadixTypeExpressionContext *ctx) = 0;
  virtual void exitRadixTypeExpression(MizarParser::RadixTypeExpressionContext *ctx) = 0;

  virtual void enterStructureTypeExpression(MizarParser::StructureTypeExpressionContext *ctx) = 0;
  virtual void exitStructureTypeExpression(MizarParser::StructureTypeExpressionContext *ctx) = 0;

  virtual void enterRadixType(MizarParser::RadixTypeContext *ctx) = 0;
  virtual void exitRadixType(MizarParser::RadixTypeContext *ctx) = 0;

  virtual void enterTypeExpressionList(MizarParser::TypeExpressionListContext *ctx) = 0;
  virtual void exitTypeExpressionList(MizarParser::TypeExpressionListContext *ctx) = 0;

  virtual void enterTermExpression(MizarParser::TermExpressionContext *ctx) = 0;
  virtual void exitTermExpression(MizarParser::TermExpressionContext *ctx) = 0;

  virtual void enterUnitaryTerm(MizarParser::UnitaryTermContext *ctx) = 0;
  virtual void exitUnitaryTerm(MizarParser::UnitaryTermContext *ctx) = 0;

  virtual void enterArguments(MizarParser::ArgumentsContext *ctx) = 0;
  virtual void exitArguments(MizarParser::ArgumentsContext *ctx) = 0;

  virtual void enterAdjectiveArguments(MizarParser::AdjectiveArgumentsContext *ctx) = 0;
  virtual void exitAdjectiveArguments(MizarParser::AdjectiveArgumentsContext *ctx) = 0;

  virtual void enterTermExpressionList(MizarParser::TermExpressionListContext *ctx) = 0;
  virtual void exitTermExpressionList(MizarParser::TermExpressionListContext *ctx) = 0;

  virtual void enterPostqualification(MizarParser::PostqualificationContext *ctx) = 0;
  virtual void exitPostqualification(MizarParser::PostqualificationContext *ctx) = 0;

  virtual void enterPostqualifyingSegment(MizarParser::PostqualifyingSegmentContext *ctx) = 0;
  virtual void exitPostqualifyingSegment(MizarParser::PostqualifyingSegmentContext *ctx) = 0;

  virtual void enterPostqualifiedVariable(MizarParser::PostqualifiedVariableContext *ctx) = 0;
  virtual void exitPostqualifiedVariable(MizarParser::PostqualifiedVariableContext *ctx) = 0;

  virtual void enterPrivateDefinitionParameter(MizarParser::PrivateDefinitionParameterContext *ctx) = 0;
  virtual void exitPrivateDefinitionParameter(MizarParser::PrivateDefinitionParameterContext *ctx) = 0;


};

