#pragma once

#include <vector>
#include <utility>
#include <string>
#include "antlr/MizarListener.h"
#include "pugixml.hpp"
#include "PositionMap.hpp"

class MizarParser;

class MizarXMLBuilder : public MizarListener {
public:
    MizarXMLBuilder(MizarParser* parser, PositionMap::ptr position_map);
    virtual ~MizarXMLBuilder();

    std::string getXMLText() const;

    virtual void visitTerminal(antlr4::tree::TerminalNode *node);
    virtual void visitErrorNode(antlr4::tree::ErrorNode *node);
    virtual void enterEveryRule(antlr4::ParserRuleContext *ctx);
    virtual void exitEveryRule(antlr4::ParserRuleContext *ctx);

private:
    pugi::xml_document              xml_doc_;
    std::vector<pugi::xml_node>     xml_node_stack_;
    PositionMap::ptr                position_map_;
    MizarParser*                    parser_;

protected:
    virtual void enterArticle(MizarParser::ArticleContext *ctx) {}
    virtual void exitArticle(MizarParser::ArticleContext *ctx) {}

    virtual void enterEnvironmentDeclaration(MizarParser::EnvironmentDeclarationContext *ctx) {}
    virtual void exitEnvironmentDeclaration(MizarParser::EnvironmentDeclarationContext *ctx) {}

    virtual void enterDirective(MizarParser::DirectiveContext *ctx) {}
    virtual void exitDirective(MizarParser::DirectiveContext *ctx) {}

    virtual void enterVocabularyDirective(MizarParser::VocabularyDirectiveContext *ctx) {}
    virtual void exitVocabularyDirective(MizarParser::VocabularyDirectiveContext *ctx) {}

    virtual void enterVocabularyName(MizarParser::VocabularyNameContext *ctx) {}
    virtual void exitVocabularyName(MizarParser::VocabularyNameContext *ctx) {}

    virtual void enterLibraryDirective(MizarParser::LibraryDirectiveContext *ctx) {}
    virtual void exitLibraryDirective(MizarParser::LibraryDirectiveContext *ctx) {}

    virtual void enterArticleName(MizarParser::ArticleNameContext *ctx) {}
    virtual void exitArticleName(MizarParser::ArticleNameContext *ctx) {}

    virtual void enterRequirementDirective(MizarParser::RequirementDirectiveContext *ctx) {}
    virtual void exitRequirementDirective(MizarParser::RequirementDirectiveContext *ctx) {}

    virtual void enterRequirement(MizarParser::RequirementContext *ctx) {}
    virtual void exitRequirement(MizarParser::RequirementContext *ctx) {}

    virtual void enterTextProper(MizarParser::TextProperContext *ctx) {}
    virtual void exitTextProper(MizarParser::TextProperContext *ctx) {}

    virtual void enterSection(MizarParser::SectionContext *ctx) {}
    virtual void exitSection(MizarParser::SectionContext *ctx) {}

    virtual void enterTextItem(MizarParser::TextItemContext *ctx) {}
    virtual void exitTextItem(MizarParser::TextItemContext *ctx) {}

    virtual void enterReservation(MizarParser::ReservationContext *ctx) {}
    virtual void exitReservation(MizarParser::ReservationContext *ctx) {}

    virtual void enterReservationSegment(MizarParser::ReservationSegmentContext *ctx) {}
    virtual void exitReservationSegment(MizarParser::ReservationSegmentContext *ctx) {}

    virtual void enterReservedIdentifiers(MizarParser::ReservedIdentifiersContext *ctx) {}
    virtual void exitReservedIdentifiers(MizarParser::ReservedIdentifiersContext *ctx) {}

    virtual void enterReservedIdentifier(MizarParser::ReservedIdentifierContext *ctx) {}
    virtual void exitReservedIdentifier(MizarParser::ReservedIdentifierContext *ctx) {}

    virtual void enterDefinitionalItem(MizarParser::DefinitionalItemContext *ctx) {}
    virtual void exitDefinitionalItem(MizarParser::DefinitionalItemContext *ctx) {}

    virtual void enterRegistrationItem(MizarParser::RegistrationItemContext *ctx) {}
    virtual void exitRegistrationItem(MizarParser::RegistrationItemContext *ctx) {}

    virtual void enterNotationItem(MizarParser::NotationItemContext *ctx) {}
    virtual void exitNotationItem(MizarParser::NotationItemContext *ctx) {}

    virtual void enterDefinitionalBlock(MizarParser::DefinitionalBlockContext *ctx) {}
    virtual void exitDefinitionalBlock(MizarParser::DefinitionalBlockContext *ctx) {}

    virtual void enterRegistrationBlock(MizarParser::RegistrationBlockContext *ctx) {}
    virtual void exitRegistrationBlock(MizarParser::RegistrationBlockContext *ctx) {}

    virtual void enterNotationBlock(MizarParser::NotationBlockContext *ctx) {}
    virtual void exitNotationBlock(MizarParser::NotationBlockContext *ctx) {}

    virtual void enterDefinitionItem(MizarParser::DefinitionItemContext *ctx) {}
    virtual void exitDefinitionItem(MizarParser::DefinitionItemContext *ctx) {}

    virtual void enterNotationDeclaration(MizarParser::NotationDeclarationContext *ctx) {}
    virtual void exitNotationDeclaration(MizarParser::NotationDeclarationContext *ctx) {}

    virtual void enterLociDeclaration(MizarParser::LociDeclarationContext *ctx) {}
    virtual void exitLociDeclaration(MizarParser::LociDeclarationContext *ctx) {}

    virtual void enterPermissiveAssumption(MizarParser::PermissiveAssumptionContext *ctx) {}
    virtual void exitPermissiveAssumption(MizarParser::PermissiveAssumptionContext *ctx) {}

    virtual void enterDefinition(MizarParser::DefinitionContext *ctx) {}
    virtual void exitDefinition(MizarParser::DefinitionContext *ctx) {}

    virtual void enterRedefinition(MizarParser::RedefinitionContext *ctx) {}
    virtual void exitRedefinition(MizarParser::RedefinitionContext *ctx) {}

    virtual void enterStructureDefinition(MizarParser::StructureDefinitionContext *ctx) {}
    virtual void exitStructureDefinition(MizarParser::StructureDefinitionContext *ctx) {}

    virtual void enterAncestors(MizarParser::AncestorsContext *ctx) {}
    virtual void exitAncestors(MizarParser::AncestorsContext *ctx) {}

    virtual void enterStructureSymbol(MizarParser::StructureSymbolContext *ctx) {}
    virtual void exitStructureSymbol(MizarParser::StructureSymbolContext *ctx) {}

    virtual void enterLoci(MizarParser::LociContext *ctx) {}
    virtual void exitLoci(MizarParser::LociContext *ctx) {}

    virtual void enterFields(MizarParser::FieldsContext *ctx) {}
    virtual void exitFields(MizarParser::FieldsContext *ctx) {}

    virtual void enterLocus(MizarParser::LocusContext *ctx) {}
    virtual void exitLocus(MizarParser::LocusContext *ctx) {}

    virtual void enterVariableIdentifier(MizarParser::VariableIdentifierContext *ctx) {}
    virtual void exitVariableIdentifier(MizarParser::VariableIdentifierContext *ctx) {}

    virtual void enterFieldSegment(MizarParser::FieldSegmentContext *ctx) {}
    virtual void exitFieldSegment(MizarParser::FieldSegmentContext *ctx) {}

    virtual void enterSelectorSymbol(MizarParser::SelectorSymbolContext *ctx) {}
    virtual void exitSelectorSymbol(MizarParser::SelectorSymbolContext *ctx) {}

    virtual void enterSpecification(MizarParser::SpecificationContext *ctx) {}
    virtual void exitSpecification(MizarParser::SpecificationContext *ctx) {}

    virtual void enterModeDefinition(MizarParser::ModeDefinitionContext *ctx) {}
    virtual void exitModeDefinition(MizarParser::ModeDefinitionContext *ctx) {}

    virtual void enterModePattern(MizarParser::ModePatternContext *ctx) {}
    virtual void exitModePattern(MizarParser::ModePatternContext *ctx) {}

    virtual void enterModeSymbol(MizarParser::ModeSymbolContext *ctx) {}
    virtual void exitModeSymbol(MizarParser::ModeSymbolContext *ctx) {}

    virtual void enterModeSynonym(MizarParser::ModeSynonymContext *ctx) {}
    virtual void exitModeSynonym(MizarParser::ModeSynonymContext *ctx) {}

    virtual void enterDefiniens(MizarParser::DefiniensContext *ctx) {}
    virtual void exitDefiniens(MizarParser::DefiniensContext *ctx) {}

    virtual void enterSimpleDefiniens(MizarParser::SimpleDefiniensContext *ctx) {}
    virtual void exitSimpleDefiniens(MizarParser::SimpleDefiniensContext *ctx) {}

    virtual void enterLabelIdentifier(MizarParser::LabelIdentifierContext *ctx) {}
    virtual void exitLabelIdentifier(MizarParser::LabelIdentifierContext *ctx) {}

    virtual void enterConditionalDefiniens(MizarParser::ConditionalDefiniensContext *ctx) {}
    virtual void exitConditionalDefiniens(MizarParser::ConditionalDefiniensContext *ctx) {}

    virtual void enterPartialDefiniensList(MizarParser::PartialDefiniensListContext *ctx) {}
    virtual void exitPartialDefiniensList(MizarParser::PartialDefiniensListContext *ctx) {}

    virtual void enterPartialDefiniens(MizarParser::PartialDefiniensContext *ctx) {}
    virtual void exitPartialDefiniens(MizarParser::PartialDefiniensContext *ctx) {}

    virtual void enterModeProperty(MizarParser::ModePropertyContext *ctx) {}
    virtual void exitModeProperty(MizarParser::ModePropertyContext *ctx) {}

    virtual void enterFunctorDefinition(MizarParser::FunctorDefinitionContext *ctx) {}
    virtual void exitFunctorDefinition(MizarParser::FunctorDefinitionContext *ctx) {}

    virtual void enterFunctorPattern(MizarParser::FunctorPatternContext *ctx) {}
    virtual void exitFunctorPattern(MizarParser::FunctorPatternContext *ctx) {}

    virtual void enterFunctorProperty(MizarParser::FunctorPropertyContext *ctx) {}
    virtual void exitFunctorProperty(MizarParser::FunctorPropertyContext *ctx) {}

    virtual void enterFunctorSynonym(MizarParser::FunctorSynonymContext *ctx) {}
    virtual void exitFunctorSynonym(MizarParser::FunctorSynonymContext *ctx) {}

    virtual void enterFunctorLoci(MizarParser::FunctorLociContext *ctx) {}
    virtual void exitFunctorLoci(MizarParser::FunctorLociContext *ctx) {}

    virtual void enterFunctorSymbol(MizarParser::FunctorSymbolContext *ctx) {}
    virtual void exitFunctorSymbol(MizarParser::FunctorSymbolContext *ctx) {}

    virtual void enterLeftFunctorBracket(MizarParser::LeftFunctorBracketContext *ctx) {}
    virtual void exitLeftFunctorBracket(MizarParser::LeftFunctorBracketContext *ctx) {}

    virtual void enterRightFunctorBracket(MizarParser::RightFunctorBracketContext *ctx) {}
    virtual void exitRightFunctorBracket(MizarParser::RightFunctorBracketContext *ctx) {}

    virtual void enterPredicateDefinition(MizarParser::PredicateDefinitionContext *ctx) {}
    virtual void exitPredicateDefinition(MizarParser::PredicateDefinitionContext *ctx) {}

    virtual void enterPredicatePattern(MizarParser::PredicatePatternContext *ctx) {}
    virtual void exitPredicatePattern(MizarParser::PredicatePatternContext *ctx) {}

    virtual void enterPredicateProperty(MizarParser::PredicatePropertyContext *ctx) {}
    virtual void exitPredicateProperty(MizarParser::PredicatePropertyContext *ctx) {}

    virtual void enterPredicateSynonym(MizarParser::PredicateSynonymContext *ctx) {}
    virtual void exitPredicateSynonym(MizarParser::PredicateSynonymContext *ctx) {}

    virtual void enterPredicateAntonym(MizarParser::PredicateAntonymContext *ctx) {}
    virtual void exitPredicateAntonym(MizarParser::PredicateAntonymContext *ctx) {}

    virtual void enterPredicateSymbol(MizarParser::PredicateSymbolContext *ctx) {}
    virtual void exitPredicateSymbol(MizarParser::PredicateSymbolContext *ctx) {}

    virtual void enterAttributeDefinition(MizarParser::AttributeDefinitionContext *ctx) {}
    virtual void exitAttributeDefinition(MizarParser::AttributeDefinitionContext *ctx) {}

    virtual void enterAttributePattern(MizarParser::AttributePatternContext *ctx) {}
    virtual void exitAttributePattern(MizarParser::AttributePatternContext *ctx) {}

    virtual void enterAttributeSynonym(MizarParser::AttributeSynonymContext *ctx) {}
    virtual void exitAttributeSynonym(MizarParser::AttributeSynonymContext *ctx) {}

    virtual void enterAttributeAntonym(MizarParser::AttributeAntonymContext *ctx) {}
    virtual void exitAttributeAntonym(MizarParser::AttributeAntonymContext *ctx) {}

    virtual void enterAttributeSymbol(MizarParser::AttributeSymbolContext *ctx) {}
    virtual void exitAttributeSymbol(MizarParser::AttributeSymbolContext *ctx) {}

    virtual void enterAttributeLoci(MizarParser::AttributeLociContext *ctx) {}
    virtual void exitAttributeLoci(MizarParser::AttributeLociContext *ctx) {}

    virtual void enterClusterRegistration(MizarParser::ClusterRegistrationContext *ctx) {}
    virtual void exitClusterRegistration(MizarParser::ClusterRegistrationContext *ctx) {}

    virtual void enterExistentialRegistration(MizarParser::ExistentialRegistrationContext *ctx) {}
    virtual void exitExistentialRegistration(MizarParser::ExistentialRegistrationContext *ctx) {}

    virtual void enterAdjectiveCluster(MizarParser::AdjectiveClusterContext *ctx) {}
    virtual void exitAdjectiveCluster(MizarParser::AdjectiveClusterContext *ctx) {}

    virtual void enterAdjective(MizarParser::AdjectiveContext *ctx) {}
    virtual void exitAdjective(MizarParser::AdjectiveContext *ctx) {}

    virtual void enterConditionalRegistration(MizarParser::ConditionalRegistrationContext *ctx) {}
    virtual void exitConditionalRegistration(MizarParser::ConditionalRegistrationContext *ctx) {}

    virtual void enterFunctorialRegistration(MizarParser::FunctorialRegistrationContext *ctx) {}
    virtual void exitFunctorialRegistration(MizarParser::FunctorialRegistrationContext *ctx) {}

    virtual void enterIdentifyRegistration(MizarParser::IdentifyRegistrationContext *ctx) {}
    virtual void exitIdentifyRegistration(MizarParser::IdentifyRegistrationContext *ctx) {}

    virtual void enterPropertyRegistration(MizarParser::PropertyRegistrationContext *ctx) {}
    virtual void exitPropertyRegistration(MizarParser::PropertyRegistrationContext *ctx) {}

    virtual void enterReductionRegistration(MizarParser::ReductionRegistrationContext *ctx) {}
    virtual void exitReductionRegistration(MizarParser::ReductionRegistrationContext *ctx) {}

    virtual void enterCorrectnessConditions(MizarParser::CorrectnessConditionsContext *ctx) {}
    virtual void exitCorrectnessConditions(MizarParser::CorrectnessConditionsContext *ctx) {}

    virtual void enterCorrectnessCondition(MizarParser::CorrectnessConditionContext *ctx) {}
    virtual void exitCorrectnessCondition(MizarParser::CorrectnessConditionContext *ctx) {}

    virtual void enterTheorem(MizarParser::TheoremContext *ctx) {}
    virtual void exitTheorem(MizarParser::TheoremContext *ctx) {}

    virtual void enterSchemeItem(MizarParser::SchemeItemContext *ctx) {}
    virtual void exitSchemeItem(MizarParser::SchemeItemContext *ctx) {}

    virtual void enterSchemeBlock(MizarParser::SchemeBlockContext *ctx) {}
    virtual void exitSchemeBlock(MizarParser::SchemeBlockContext *ctx) {}

    virtual void enterSchemeIdentifier(MizarParser::SchemeIdentifierContext *ctx) {}
    virtual void exitSchemeIdentifier(MizarParser::SchemeIdentifierContext *ctx) {}

    virtual void enterSchemeParameters(MizarParser::SchemeParametersContext *ctx) {}
    virtual void exitSchemeParameters(MizarParser::SchemeParametersContext *ctx) {}

    virtual void enterSchemeConclusion(MizarParser::SchemeConclusionContext *ctx) {}
    virtual void exitSchemeConclusion(MizarParser::SchemeConclusionContext *ctx) {}

    virtual void enterSchemePremise(MizarParser::SchemePremiseContext *ctx) {}
    virtual void exitSchemePremise(MizarParser::SchemePremiseContext *ctx) {}

    virtual void enterSchemeSegment(MizarParser::SchemeSegmentContext *ctx) {}
    virtual void exitSchemeSegment(MizarParser::SchemeSegmentContext *ctx) {}

    virtual void enterPredicateSegment(MizarParser::PredicateSegmentContext *ctx) {}
    virtual void exitPredicateSegment(MizarParser::PredicateSegmentContext *ctx) {}

    virtual void enterPredicateIdentifier(MizarParser::PredicateIdentifierContext *ctx) {}
    virtual void exitPredicateIdentifier(MizarParser::PredicateIdentifierContext *ctx) {}

    virtual void enterFunctorSegment(MizarParser::FunctorSegmentContext *ctx) {}
    virtual void exitFunctorSegment(MizarParser::FunctorSegmentContext *ctx) {}

    virtual void enterFunctorIdentifier(MizarParser::FunctorIdentifierContext *ctx) {}
    virtual void exitFunctorIdentifier(MizarParser::FunctorIdentifierContext *ctx) {}

    virtual void enterAuxiliaryItem(MizarParser::AuxiliaryItemContext *ctx) {}
    virtual void exitAuxiliaryItem(MizarParser::AuxiliaryItemContext *ctx) {}

    virtual void enterPrivateDefinition(MizarParser::PrivateDefinitionContext *ctx) {}
    virtual void exitPrivateDefinition(MizarParser::PrivateDefinitionContext *ctx) {}

    virtual void enterConstantDefinition(MizarParser::ConstantDefinitionContext *ctx) {}
    virtual void exitConstantDefinition(MizarParser::ConstantDefinitionContext *ctx) {}

    virtual void enterEquatingList(MizarParser::EquatingListContext *ctx) {}
    virtual void exitEquatingList(MizarParser::EquatingListContext *ctx) {}

    virtual void enterEquating(MizarParser::EquatingContext *ctx) {}
    virtual void exitEquating(MizarParser::EquatingContext *ctx) {}

    virtual void enterPrivateFunctorDefinition(MizarParser::PrivateFunctorDefinitionContext *ctx) {}
    virtual void exitPrivateFunctorDefinition(MizarParser::PrivateFunctorDefinitionContext *ctx) {}

    virtual void enterPrivatePredicateDefinition(MizarParser::PrivatePredicateDefinitionContext *ctx) {}
    virtual void exitPrivatePredicateDefinition(MizarParser::PrivatePredicateDefinitionContext *ctx) {}

    virtual void enterPrivateFunctorPattern(MizarParser::PrivateFunctorPatternContext *ctx) {}
    virtual void exitPrivateFunctorPattern(MizarParser::PrivateFunctorPatternContext *ctx) {}

    virtual void enterPrivatePredicatePattern(MizarParser::PrivatePredicatePatternContext *ctx) {}
    virtual void exitPrivatePredicatePattern(MizarParser::PrivatePredicatePatternContext *ctx) {}

    virtual void enterReasoning(MizarParser::ReasoningContext *ctx) {}
    virtual void exitReasoning(MizarParser::ReasoningContext *ctx) {}

    virtual void enterCaseList(MizarParser::CaseListContext *ctx) {}
    virtual void exitCaseList(MizarParser::CaseListContext *ctx) {}

    virtual void enterCaseItem(MizarParser::CaseItemContext *ctx) {}
    virtual void exitCaseItem(MizarParser::CaseItemContext *ctx) {}

    virtual void enterSupposeList(MizarParser::SupposeListContext *ctx) {}
    virtual void exitSupposeList(MizarParser::SupposeListContext *ctx) {}

    virtual void enterSuppose(MizarParser::SupposeContext *ctx) {}
    virtual void exitSuppose(MizarParser::SupposeContext *ctx) {}

    virtual void enterReasoningItem(MizarParser::ReasoningItemContext *ctx) {}
    virtual void exitReasoningItem(MizarParser::ReasoningItemContext *ctx) {}

    virtual void enterSkeletonItem(MizarParser::SkeletonItemContext *ctx) {}
    virtual void exitSkeletonItem(MizarParser::SkeletonItemContext *ctx) {}

    virtual void enterGeneralization(MizarParser::GeneralizationContext *ctx) {}
    virtual void exitGeneralization(MizarParser::GeneralizationContext *ctx) {}

    virtual void enterAssumption(MizarParser::AssumptionContext *ctx) {}
    virtual void exitAssumption(MizarParser::AssumptionContext *ctx) {}

    virtual void enterSingleAssumption(MizarParser::SingleAssumptionContext *ctx) {}
    virtual void exitSingleAssumption(MizarParser::SingleAssumptionContext *ctx) {}

    virtual void enterCollectiveAssumption(MizarParser::CollectiveAssumptionContext *ctx) {}
    virtual void exitCollectiveAssumption(MizarParser::CollectiveAssumptionContext *ctx) {}

    virtual void enterExistentialAssumption(MizarParser::ExistentialAssumptionContext *ctx) {}
    virtual void exitExistentialAssumption(MizarParser::ExistentialAssumptionContext *ctx) {}

    virtual void enterConclusion(MizarParser::ConclusionContext *ctx) {}
    virtual void exitConclusion(MizarParser::ConclusionContext *ctx) {}

    virtual void enterDiffuseConclusion(MizarParser::DiffuseConclusionContext *ctx) {}
    virtual void exitDiffuseConclusion(MizarParser::DiffuseConclusionContext *ctx) {}

    virtual void enterExemplification(MizarParser::ExemplificationContext *ctx) {}
    virtual void exitExemplification(MizarParser::ExemplificationContext *ctx) {}

    virtual void enterExample(MizarParser::ExampleContext *ctx) {}
    virtual void exitExample(MizarParser::ExampleContext *ctx) {}

    virtual void enterStatement(MizarParser::StatementContext *ctx) {}
    virtual void exitStatement(MizarParser::StatementContext *ctx) {}

    virtual void enterLinkableStatement(MizarParser::LinkableStatementContext *ctx) {}
    virtual void exitLinkableStatement(MizarParser::LinkableStatementContext *ctx) {}

    virtual void enterCompactStatement(MizarParser::CompactStatementContext *ctx) {}
    virtual void exitCompactStatement(MizarParser::CompactStatementContext *ctx) {}

    virtual void enterChoiceStatement(MizarParser::ChoiceStatementContext *ctx) {}
    virtual void exitChoiceStatement(MizarParser::ChoiceStatementContext *ctx) {}

    virtual void enterTypeChangingStatement(MizarParser::TypeChangingStatementContext *ctx) {}
    virtual void exitTypeChangingStatement(MizarParser::TypeChangingStatementContext *ctx) {}

    virtual void enterTypeChangeList(MizarParser::TypeChangeListContext *ctx) {}
    virtual void exitTypeChangeList(MizarParser::TypeChangeListContext *ctx) {}

    virtual void enterIterativeEquality(MizarParser::IterativeEqualityContext *ctx) {}
    virtual void exitIterativeEquality(MizarParser::IterativeEqualityContext *ctx) {}

    virtual void enterDiffuseStatement(MizarParser::DiffuseStatementContext *ctx) {}
    virtual void exitDiffuseStatement(MizarParser::DiffuseStatementContext *ctx) {}

    virtual void enterJustification(MizarParser::JustificationContext *ctx) {}
    virtual void exitJustification(MizarParser::JustificationContext *ctx) {}

    virtual void enterSimpleJustification(MizarParser::SimpleJustificationContext *ctx) {}
    virtual void exitSimpleJustification(MizarParser::SimpleJustificationContext *ctx) {}

    virtual void enterProof(MizarParser::ProofContext *ctx) {}
    virtual void exitProof(MizarParser::ProofContext *ctx) {}

    virtual void enterStraightforwardJustification(MizarParser::StraightforwardJustificationContext *ctx) {}
    virtual void exitStraightforwardJustification(MizarParser::StraightforwardJustificationContext *ctx) {}

    virtual void enterSchemeJustification(MizarParser::SchemeJustificationContext *ctx) {}
    virtual void exitSchemeJustification(MizarParser::SchemeJustificationContext *ctx) {}

    virtual void enterReferences(MizarParser::ReferencesContext *ctx) {}
    virtual void exitReferences(MizarParser::ReferencesContext *ctx) {}

    virtual void enterReference(MizarParser::ReferenceContext *ctx) {}
    virtual void exitReference(MizarParser::ReferenceContext *ctx) {}

    virtual void enterSchemeReference(MizarParser::SchemeReferenceContext *ctx) {}
    virtual void exitSchemeReference(MizarParser::SchemeReferenceContext *ctx) {}

    virtual void enterLocalReference(MizarParser::LocalReferenceContext *ctx) {}
    virtual void exitLocalReference(MizarParser::LocalReferenceContext *ctx) {}

    virtual void enterLocalSchemeReference(MizarParser::LocalSchemeReferenceContext *ctx) {}
    virtual void exitLocalSchemeReference(MizarParser::LocalSchemeReferenceContext *ctx) {}

    virtual void enterLibraryReference(MizarParser::LibraryReferenceContext *ctx) {}
    virtual void exitLibraryReference(MizarParser::LibraryReferenceContext *ctx) {}

    virtual void enterLibrarySchemeReference(MizarParser::LibrarySchemeReferenceContext *ctx) {}
    virtual void exitLibrarySchemeReference(MizarParser::LibrarySchemeReferenceContext *ctx) {}

    virtual void enterTheoremNumber(MizarParser::TheoremNumberContext *ctx) {}
    virtual void exitTheoremNumber(MizarParser::TheoremNumberContext *ctx) {}

    virtual void enterDefinitionNumber(MizarParser::DefinitionNumberContext *ctx) {}
    virtual void exitDefinitionNumber(MizarParser::DefinitionNumberContext *ctx) {}

    virtual void enterSchemeNumber(MizarParser::SchemeNumberContext *ctx) {}
    virtual void exitSchemeNumber(MizarParser::SchemeNumberContext *ctx) {}

    virtual void enterConditions(MizarParser::ConditionsContext *ctx) {}
    virtual void exitConditions(MizarParser::ConditionsContext *ctx) {}

    virtual void enterProposition(MizarParser::PropositionContext *ctx) {}
    virtual void exitProposition(MizarParser::PropositionContext *ctx) {}

    virtual void enterSentence(MizarParser::SentenceContext *ctx) {}
    virtual void exitSentence(MizarParser::SentenceContext *ctx) {}

    virtual void enterFormulaExpression(MizarParser::FormulaExpressionContext *ctx) {}
    virtual void exitFormulaExpression(MizarParser::FormulaExpressionContext *ctx) {}

    virtual void enterAtomicFormulaExpression(MizarParser::AtomicFormulaExpressionContext *ctx) {}
    virtual void exitAtomicFormulaExpression(MizarParser::AtomicFormulaExpressionContext *ctx) {}

    virtual void enterQuantifiedFormulaExpression(MizarParser::QuantifiedFormulaExpressionContext *ctx) {}
    virtual void exitQuantifiedFormulaExpression(MizarParser::QuantifiedFormulaExpressionContext *ctx) {}

    virtual void enterQualifiedVariables(MizarParser::QualifiedVariablesContext *ctx) {}
    virtual void exitQualifiedVariables(MizarParser::QualifiedVariablesContext *ctx) {}

    virtual void enterImplicitlyQualifiedVariables(MizarParser::ImplicitlyQualifiedVariablesContext *ctx) {}
    virtual void exitImplicitlyQualifiedVariables(MizarParser::ImplicitlyQualifiedVariablesContext *ctx) {}

    virtual void enterExplicitlyQualifiedVariables(MizarParser::ExplicitlyQualifiedVariablesContext *ctx) {}
    virtual void exitExplicitlyQualifiedVariables(MizarParser::ExplicitlyQualifiedVariablesContext *ctx) {}

    virtual void enterQualifiedSegment(MizarParser::QualifiedSegmentContext *ctx) {}
    virtual void exitQualifiedSegment(MizarParser::QualifiedSegmentContext *ctx) {}

    virtual void enterVariables(MizarParser::VariablesContext *ctx) {}
    virtual void exitVariables(MizarParser::VariablesContext *ctx) {}

    virtual void enterQualification(MizarParser::QualificationContext *ctx) {}
    virtual void exitQualification(MizarParser::QualificationContext *ctx) {}

    virtual void enterTypeExpression(MizarParser::TypeExpressionContext *ctx) {}
    virtual void exitTypeExpression(MizarParser::TypeExpressionContext *ctx) {}

    virtual void enterRadixTypeExpression(MizarParser::RadixTypeExpressionContext *ctx) {}
    virtual void exitRadixTypeExpression(MizarParser::RadixTypeExpressionContext *ctx) {}

    virtual void enterStructureTypeExpression(MizarParser::StructureTypeExpressionContext *ctx) {}
    virtual void exitStructureTypeExpression(MizarParser::StructureTypeExpressionContext *ctx) {}

    virtual void enterRadixType(MizarParser::RadixTypeContext *ctx) {}
    virtual void exitRadixType(MizarParser::RadixTypeContext *ctx) {}

    virtual void enterTypeExpressionList(MizarParser::TypeExpressionListContext *ctx) {}
    virtual void exitTypeExpressionList(MizarParser::TypeExpressionListContext *ctx) {}

    virtual void enterTermExpression(MizarParser::TermExpressionContext *ctx) {}
    virtual void exitTermExpression(MizarParser::TermExpressionContext *ctx) {}

    virtual void enterUnitaryTerm(MizarParser::UnitaryTermContext *ctx) {}
    virtual void exitUnitaryTerm(MizarParser::UnitaryTermContext *ctx) {}

    virtual void enterArguments(MizarParser::ArgumentsContext *ctx) {}
    virtual void exitArguments(MizarParser::ArgumentsContext *ctx) {}

    virtual void enterAdjectiveArguments(MizarParser::AdjectiveArgumentsContext *ctx) {}
    virtual void exitAdjectiveArguments(MizarParser::AdjectiveArgumentsContext *ctx) {}

    virtual void enterTermExpressionList(MizarParser::TermExpressionListContext *ctx) {}
    virtual void exitTermExpressionList(MizarParser::TermExpressionListContext *ctx) {}

    virtual void enterPostqualification(MizarParser::PostqualificationContext *ctx) {}
    virtual void exitPostqualification(MizarParser::PostqualificationContext *ctx) {}

    virtual void enterPostqualifyingSegment(MizarParser::PostqualifyingSegmentContext *ctx) {}
    virtual void exitPostqualifyingSegment(MizarParser::PostqualifyingSegmentContext *ctx) {}

    virtual void enterPostqualifiedVariable(MizarParser::PostqualifiedVariableContext *ctx) {}
    virtual void exitPostqualifiedVariable(MizarParser::PostqualifiedVariableContext *ctx) {}

    virtual void enterPrivateDefinitionParameter(MizarParser::PrivateDefinitionParameterContext *ctx) {}
    virtual void exitPrivateDefinitionParameter(MizarParser::PrivateDefinitionParameterContext *ctx) {}
};
