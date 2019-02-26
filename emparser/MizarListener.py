# Generated from c:\dev\mimosa-project\emparser\antlr\Mizar.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .MizarParser import MizarParser
else:
    from MizarParser import MizarParser

# This class defines a complete listener for a parse tree produced by MizarParser.
class MizarListener(ParseTreeListener):

    # Enter a parse tree produced by MizarParser#article.
    def enterArticle(self, ctx:MizarParser.ArticleContext):
        pass

    # Exit a parse tree produced by MizarParser#article.
    def exitArticle(self, ctx:MizarParser.ArticleContext):
        pass


    # Enter a parse tree produced by MizarParser#environmentDeclaration.
    def enterEnvironmentDeclaration(self, ctx:MizarParser.EnvironmentDeclarationContext):
        pass

    # Exit a parse tree produced by MizarParser#environmentDeclaration.
    def exitEnvironmentDeclaration(self, ctx:MizarParser.EnvironmentDeclarationContext):
        pass


    # Enter a parse tree produced by MizarParser#directive.
    def enterDirective(self, ctx:MizarParser.DirectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#directive.
    def exitDirective(self, ctx:MizarParser.DirectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#vocabularyDirective.
    def enterVocabularyDirective(self, ctx:MizarParser.VocabularyDirectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#vocabularyDirective.
    def exitVocabularyDirective(self, ctx:MizarParser.VocabularyDirectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#vocabularyName.
    def enterVocabularyName(self, ctx:MizarParser.VocabularyNameContext):
        pass

    # Exit a parse tree produced by MizarParser#vocabularyName.
    def exitVocabularyName(self, ctx:MizarParser.VocabularyNameContext):
        pass


    # Enter a parse tree produced by MizarParser#libraryDirective.
    def enterLibraryDirective(self, ctx:MizarParser.LibraryDirectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#libraryDirective.
    def exitLibraryDirective(self, ctx:MizarParser.LibraryDirectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#articleName.
    def enterArticleName(self, ctx:MizarParser.ArticleNameContext):
        pass

    # Exit a parse tree produced by MizarParser#articleName.
    def exitArticleName(self, ctx:MizarParser.ArticleNameContext):
        pass


    # Enter a parse tree produced by MizarParser#requirementDirective.
    def enterRequirementDirective(self, ctx:MizarParser.RequirementDirectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#requirementDirective.
    def exitRequirementDirective(self, ctx:MizarParser.RequirementDirectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#requirement.
    def enterRequirement(self, ctx:MizarParser.RequirementContext):
        pass

    # Exit a parse tree produced by MizarParser#requirement.
    def exitRequirement(self, ctx:MizarParser.RequirementContext):
        pass


    # Enter a parse tree produced by MizarParser#textProper.
    def enterTextProper(self, ctx:MizarParser.TextProperContext):
        pass

    # Exit a parse tree produced by MizarParser#textProper.
    def exitTextProper(self, ctx:MizarParser.TextProperContext):
        pass


    # Enter a parse tree produced by MizarParser#section.
    def enterSection(self, ctx:MizarParser.SectionContext):
        pass

    # Exit a parse tree produced by MizarParser#section.
    def exitSection(self, ctx:MizarParser.SectionContext):
        pass


    # Enter a parse tree produced by MizarParser#textItem.
    def enterTextItem(self, ctx:MizarParser.TextItemContext):
        pass

    # Exit a parse tree produced by MizarParser#textItem.
    def exitTextItem(self, ctx:MizarParser.TextItemContext):
        pass


    # Enter a parse tree produced by MizarParser#reservation.
    def enterReservation(self, ctx:MizarParser.ReservationContext):
        pass

    # Exit a parse tree produced by MizarParser#reservation.
    def exitReservation(self, ctx:MizarParser.ReservationContext):
        pass


    # Enter a parse tree produced by MizarParser#reservationSegment.
    def enterReservationSegment(self, ctx:MizarParser.ReservationSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#reservationSegment.
    def exitReservationSegment(self, ctx:MizarParser.ReservationSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#reservedIdentifiers.
    def enterReservedIdentifiers(self, ctx:MizarParser.ReservedIdentifiersContext):
        pass

    # Exit a parse tree produced by MizarParser#reservedIdentifiers.
    def exitReservedIdentifiers(self, ctx:MizarParser.ReservedIdentifiersContext):
        pass


    # Enter a parse tree produced by MizarParser#reservedIdentifier.
    def enterReservedIdentifier(self, ctx:MizarParser.ReservedIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#reservedIdentifier.
    def exitReservedIdentifier(self, ctx:MizarParser.ReservedIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#definitionalItem.
    def enterDefinitionalItem(self, ctx:MizarParser.DefinitionalItemContext):
        pass

    # Exit a parse tree produced by MizarParser#definitionalItem.
    def exitDefinitionalItem(self, ctx:MizarParser.DefinitionalItemContext):
        pass


    # Enter a parse tree produced by MizarParser#registrationItem.
    def enterRegistrationItem(self, ctx:MizarParser.RegistrationItemContext):
        pass

    # Exit a parse tree produced by MizarParser#registrationItem.
    def exitRegistrationItem(self, ctx:MizarParser.RegistrationItemContext):
        pass


    # Enter a parse tree produced by MizarParser#notationItem.
    def enterNotationItem(self, ctx:MizarParser.NotationItemContext):
        pass

    # Exit a parse tree produced by MizarParser#notationItem.
    def exitNotationItem(self, ctx:MizarParser.NotationItemContext):
        pass


    # Enter a parse tree produced by MizarParser#definitionalBlock.
    def enterDefinitionalBlock(self, ctx:MizarParser.DefinitionalBlockContext):
        pass

    # Exit a parse tree produced by MizarParser#definitionalBlock.
    def exitDefinitionalBlock(self, ctx:MizarParser.DefinitionalBlockContext):
        pass


    # Enter a parse tree produced by MizarParser#registrationBlock.
    def enterRegistrationBlock(self, ctx:MizarParser.RegistrationBlockContext):
        pass

    # Exit a parse tree produced by MizarParser#registrationBlock.
    def exitRegistrationBlock(self, ctx:MizarParser.RegistrationBlockContext):
        pass


    # Enter a parse tree produced by MizarParser#notationBlock.
    def enterNotationBlock(self, ctx:MizarParser.NotationBlockContext):
        pass

    # Exit a parse tree produced by MizarParser#notationBlock.
    def exitNotationBlock(self, ctx:MizarParser.NotationBlockContext):
        pass


    # Enter a parse tree produced by MizarParser#definitionItem.
    def enterDefinitionItem(self, ctx:MizarParser.DefinitionItemContext):
        pass

    # Exit a parse tree produced by MizarParser#definitionItem.
    def exitDefinitionItem(self, ctx:MizarParser.DefinitionItemContext):
        pass


    # Enter a parse tree produced by MizarParser#notationDeclaration.
    def enterNotationDeclaration(self, ctx:MizarParser.NotationDeclarationContext):
        pass

    # Exit a parse tree produced by MizarParser#notationDeclaration.
    def exitNotationDeclaration(self, ctx:MizarParser.NotationDeclarationContext):
        pass


    # Enter a parse tree produced by MizarParser#lociDeclaration.
    def enterLociDeclaration(self, ctx:MizarParser.LociDeclarationContext):
        pass

    # Exit a parse tree produced by MizarParser#lociDeclaration.
    def exitLociDeclaration(self, ctx:MizarParser.LociDeclarationContext):
        pass


    # Enter a parse tree produced by MizarParser#permissiveAssumption.
    def enterPermissiveAssumption(self, ctx:MizarParser.PermissiveAssumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#permissiveAssumption.
    def exitPermissiveAssumption(self, ctx:MizarParser.PermissiveAssumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#definition.
    def enterDefinition(self, ctx:MizarParser.DefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#definition.
    def exitDefinition(self, ctx:MizarParser.DefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#redefinition.
    def enterRedefinition(self, ctx:MizarParser.RedefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#redefinition.
    def exitRedefinition(self, ctx:MizarParser.RedefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#structureDefinition.
    def enterStructureDefinition(self, ctx:MizarParser.StructureDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#structureDefinition.
    def exitStructureDefinition(self, ctx:MizarParser.StructureDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#ancestors.
    def enterAncestors(self, ctx:MizarParser.AncestorsContext):
        pass

    # Exit a parse tree produced by MizarParser#ancestors.
    def exitAncestors(self, ctx:MizarParser.AncestorsContext):
        pass


    # Enter a parse tree produced by MizarParser#structureSymbol.
    def enterStructureSymbol(self, ctx:MizarParser.StructureSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#structureSymbol.
    def exitStructureSymbol(self, ctx:MizarParser.StructureSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#loci.
    def enterLoci(self, ctx:MizarParser.LociContext):
        pass

    # Exit a parse tree produced by MizarParser#loci.
    def exitLoci(self, ctx:MizarParser.LociContext):
        pass


    # Enter a parse tree produced by MizarParser#fields.
    def enterFields(self, ctx:MizarParser.FieldsContext):
        pass

    # Exit a parse tree produced by MizarParser#fields.
    def exitFields(self, ctx:MizarParser.FieldsContext):
        pass


    # Enter a parse tree produced by MizarParser#locus.
    def enterLocus(self, ctx:MizarParser.LocusContext):
        pass

    # Exit a parse tree produced by MizarParser#locus.
    def exitLocus(self, ctx:MizarParser.LocusContext):
        pass


    # Enter a parse tree produced by MizarParser#variableIdentifier.
    def enterVariableIdentifier(self, ctx:MizarParser.VariableIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#variableIdentifier.
    def exitVariableIdentifier(self, ctx:MizarParser.VariableIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#fieldSegment.
    def enterFieldSegment(self, ctx:MizarParser.FieldSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#fieldSegment.
    def exitFieldSegment(self, ctx:MizarParser.FieldSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#selectorSymbol.
    def enterSelectorSymbol(self, ctx:MizarParser.SelectorSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#selectorSymbol.
    def exitSelectorSymbol(self, ctx:MizarParser.SelectorSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#specification.
    def enterSpecification(self, ctx:MizarParser.SpecificationContext):
        pass

    # Exit a parse tree produced by MizarParser#specification.
    def exitSpecification(self, ctx:MizarParser.SpecificationContext):
        pass


    # Enter a parse tree produced by MizarParser#modeDefinition.
    def enterModeDefinition(self, ctx:MizarParser.ModeDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#modeDefinition.
    def exitModeDefinition(self, ctx:MizarParser.ModeDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#modePattern.
    def enterModePattern(self, ctx:MizarParser.ModePatternContext):
        pass

    # Exit a parse tree produced by MizarParser#modePattern.
    def exitModePattern(self, ctx:MizarParser.ModePatternContext):
        pass


    # Enter a parse tree produced by MizarParser#modeSymbol.
    def enterModeSymbol(self, ctx:MizarParser.ModeSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#modeSymbol.
    def exitModeSymbol(self, ctx:MizarParser.ModeSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#modeSynonym.
    def enterModeSynonym(self, ctx:MizarParser.ModeSynonymContext):
        pass

    # Exit a parse tree produced by MizarParser#modeSynonym.
    def exitModeSynonym(self, ctx:MizarParser.ModeSynonymContext):
        pass


    # Enter a parse tree produced by MizarParser#definiens.
    def enterDefiniens(self, ctx:MizarParser.DefiniensContext):
        pass

    # Exit a parse tree produced by MizarParser#definiens.
    def exitDefiniens(self, ctx:MizarParser.DefiniensContext):
        pass


    # Enter a parse tree produced by MizarParser#simpleDefiniens.
    def enterSimpleDefiniens(self, ctx:MizarParser.SimpleDefiniensContext):
        pass

    # Exit a parse tree produced by MizarParser#simpleDefiniens.
    def exitSimpleDefiniens(self, ctx:MizarParser.SimpleDefiniensContext):
        pass


    # Enter a parse tree produced by MizarParser#labelIdentifier.
    def enterLabelIdentifier(self, ctx:MizarParser.LabelIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#labelIdentifier.
    def exitLabelIdentifier(self, ctx:MizarParser.LabelIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#conditionalDefiniens.
    def enterConditionalDefiniens(self, ctx:MizarParser.ConditionalDefiniensContext):
        pass

    # Exit a parse tree produced by MizarParser#conditionalDefiniens.
    def exitConditionalDefiniens(self, ctx:MizarParser.ConditionalDefiniensContext):
        pass


    # Enter a parse tree produced by MizarParser#partialDefiniensList.
    def enterPartialDefiniensList(self, ctx:MizarParser.PartialDefiniensListContext):
        pass

    # Exit a parse tree produced by MizarParser#partialDefiniensList.
    def exitPartialDefiniensList(self, ctx:MizarParser.PartialDefiniensListContext):
        pass


    # Enter a parse tree produced by MizarParser#partialDefiniens.
    def enterPartialDefiniens(self, ctx:MizarParser.PartialDefiniensContext):
        pass

    # Exit a parse tree produced by MizarParser#partialDefiniens.
    def exitPartialDefiniens(self, ctx:MizarParser.PartialDefiniensContext):
        pass


    # Enter a parse tree produced by MizarParser#modeProperty.
    def enterModeProperty(self, ctx:MizarParser.ModePropertyContext):
        pass

    # Exit a parse tree produced by MizarParser#modeProperty.
    def exitModeProperty(self, ctx:MizarParser.ModePropertyContext):
        pass


    # Enter a parse tree produced by MizarParser#functorDefinition.
    def enterFunctorDefinition(self, ctx:MizarParser.FunctorDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#functorDefinition.
    def exitFunctorDefinition(self, ctx:MizarParser.FunctorDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#functorPattern.
    def enterFunctorPattern(self, ctx:MizarParser.FunctorPatternContext):
        pass

    # Exit a parse tree produced by MizarParser#functorPattern.
    def exitFunctorPattern(self, ctx:MizarParser.FunctorPatternContext):
        pass


    # Enter a parse tree produced by MizarParser#functorProperty.
    def enterFunctorProperty(self, ctx:MizarParser.FunctorPropertyContext):
        pass

    # Exit a parse tree produced by MizarParser#functorProperty.
    def exitFunctorProperty(self, ctx:MizarParser.FunctorPropertyContext):
        pass


    # Enter a parse tree produced by MizarParser#functorSynonym.
    def enterFunctorSynonym(self, ctx:MizarParser.FunctorSynonymContext):
        pass

    # Exit a parse tree produced by MizarParser#functorSynonym.
    def exitFunctorSynonym(self, ctx:MizarParser.FunctorSynonymContext):
        pass


    # Enter a parse tree produced by MizarParser#functorLoci.
    def enterFunctorLoci(self, ctx:MizarParser.FunctorLociContext):
        pass

    # Exit a parse tree produced by MizarParser#functorLoci.
    def exitFunctorLoci(self, ctx:MizarParser.FunctorLociContext):
        pass


    # Enter a parse tree produced by MizarParser#functorSymbol.
    def enterFunctorSymbol(self, ctx:MizarParser.FunctorSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#functorSymbol.
    def exitFunctorSymbol(self, ctx:MizarParser.FunctorSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#leftFunctorBracket.
    def enterLeftFunctorBracket(self, ctx:MizarParser.LeftFunctorBracketContext):
        pass

    # Exit a parse tree produced by MizarParser#leftFunctorBracket.
    def exitLeftFunctorBracket(self, ctx:MizarParser.LeftFunctorBracketContext):
        pass


    # Enter a parse tree produced by MizarParser#rightFunctorBracket.
    def enterRightFunctorBracket(self, ctx:MizarParser.RightFunctorBracketContext):
        pass

    # Exit a parse tree produced by MizarParser#rightFunctorBracket.
    def exitRightFunctorBracket(self, ctx:MizarParser.RightFunctorBracketContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateDefinition.
    def enterPredicateDefinition(self, ctx:MizarParser.PredicateDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateDefinition.
    def exitPredicateDefinition(self, ctx:MizarParser.PredicateDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#predicatePattern.
    def enterPredicatePattern(self, ctx:MizarParser.PredicatePatternContext):
        pass

    # Exit a parse tree produced by MizarParser#predicatePattern.
    def exitPredicatePattern(self, ctx:MizarParser.PredicatePatternContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateProperty.
    def enterPredicateProperty(self, ctx:MizarParser.PredicatePropertyContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateProperty.
    def exitPredicateProperty(self, ctx:MizarParser.PredicatePropertyContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateSynonym.
    def enterPredicateSynonym(self, ctx:MizarParser.PredicateSynonymContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateSynonym.
    def exitPredicateSynonym(self, ctx:MizarParser.PredicateSynonymContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateAntonym.
    def enterPredicateAntonym(self, ctx:MizarParser.PredicateAntonymContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateAntonym.
    def exitPredicateAntonym(self, ctx:MizarParser.PredicateAntonymContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateSymbol.
    def enterPredicateSymbol(self, ctx:MizarParser.PredicateSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateSymbol.
    def exitPredicateSymbol(self, ctx:MizarParser.PredicateSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#attributeDefinition.
    def enterAttributeDefinition(self, ctx:MizarParser.AttributeDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#attributeDefinition.
    def exitAttributeDefinition(self, ctx:MizarParser.AttributeDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#attributePattern.
    def enterAttributePattern(self, ctx:MizarParser.AttributePatternContext):
        pass

    # Exit a parse tree produced by MizarParser#attributePattern.
    def exitAttributePattern(self, ctx:MizarParser.AttributePatternContext):
        pass


    # Enter a parse tree produced by MizarParser#attributeSynonym.
    def enterAttributeSynonym(self, ctx:MizarParser.AttributeSynonymContext):
        pass

    # Exit a parse tree produced by MizarParser#attributeSynonym.
    def exitAttributeSynonym(self, ctx:MizarParser.AttributeSynonymContext):
        pass


    # Enter a parse tree produced by MizarParser#attributeAntonym.
    def enterAttributeAntonym(self, ctx:MizarParser.AttributeAntonymContext):
        pass

    # Exit a parse tree produced by MizarParser#attributeAntonym.
    def exitAttributeAntonym(self, ctx:MizarParser.AttributeAntonymContext):
        pass


    # Enter a parse tree produced by MizarParser#attributeSymbol.
    def enterAttributeSymbol(self, ctx:MizarParser.AttributeSymbolContext):
        pass

    # Exit a parse tree produced by MizarParser#attributeSymbol.
    def exitAttributeSymbol(self, ctx:MizarParser.AttributeSymbolContext):
        pass


    # Enter a parse tree produced by MizarParser#attributeLoci.
    def enterAttributeLoci(self, ctx:MizarParser.AttributeLociContext):
        pass

    # Exit a parse tree produced by MizarParser#attributeLoci.
    def exitAttributeLoci(self, ctx:MizarParser.AttributeLociContext):
        pass


    # Enter a parse tree produced by MizarParser#clusterRegistration.
    def enterClusterRegistration(self, ctx:MizarParser.ClusterRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#clusterRegistration.
    def exitClusterRegistration(self, ctx:MizarParser.ClusterRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#existentialRegistration.
    def enterExistentialRegistration(self, ctx:MizarParser.ExistentialRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#existentialRegistration.
    def exitExistentialRegistration(self, ctx:MizarParser.ExistentialRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#adjectiveCluster.
    def enterAdjectiveCluster(self, ctx:MizarParser.AdjectiveClusterContext):
        pass

    # Exit a parse tree produced by MizarParser#adjectiveCluster.
    def exitAdjectiveCluster(self, ctx:MizarParser.AdjectiveClusterContext):
        pass


    # Enter a parse tree produced by MizarParser#adjective.
    def enterAdjective(self, ctx:MizarParser.AdjectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#adjective.
    def exitAdjective(self, ctx:MizarParser.AdjectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#conditionalRegistration.
    def enterConditionalRegistration(self, ctx:MizarParser.ConditionalRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#conditionalRegistration.
    def exitConditionalRegistration(self, ctx:MizarParser.ConditionalRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#functorialRegistration.
    def enterFunctorialRegistration(self, ctx:MizarParser.FunctorialRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#functorialRegistration.
    def exitFunctorialRegistration(self, ctx:MizarParser.FunctorialRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#identifyRegistration.
    def enterIdentifyRegistration(self, ctx:MizarParser.IdentifyRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#identifyRegistration.
    def exitIdentifyRegistration(self, ctx:MizarParser.IdentifyRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#propertyRegistration.
    def enterPropertyRegistration(self, ctx:MizarParser.PropertyRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#propertyRegistration.
    def exitPropertyRegistration(self, ctx:MizarParser.PropertyRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#reductionRegistration.
    def enterReductionRegistration(self, ctx:MizarParser.ReductionRegistrationContext):
        pass

    # Exit a parse tree produced by MizarParser#reductionRegistration.
    def exitReductionRegistration(self, ctx:MizarParser.ReductionRegistrationContext):
        pass


    # Enter a parse tree produced by MizarParser#correctnessConditions.
    def enterCorrectnessConditions(self, ctx:MizarParser.CorrectnessConditionsContext):
        pass

    # Exit a parse tree produced by MizarParser#correctnessConditions.
    def exitCorrectnessConditions(self, ctx:MizarParser.CorrectnessConditionsContext):
        pass


    # Enter a parse tree produced by MizarParser#correctnessCondition.
    def enterCorrectnessCondition(self, ctx:MizarParser.CorrectnessConditionContext):
        pass

    # Exit a parse tree produced by MizarParser#correctnessCondition.
    def exitCorrectnessCondition(self, ctx:MizarParser.CorrectnessConditionContext):
        pass


    # Enter a parse tree produced by MizarParser#theorem.
    def enterTheorem(self, ctx:MizarParser.TheoremContext):
        pass

    # Exit a parse tree produced by MizarParser#theorem.
    def exitTheorem(self, ctx:MizarParser.TheoremContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeItem.
    def enterSchemeItem(self, ctx:MizarParser.SchemeItemContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeItem.
    def exitSchemeItem(self, ctx:MizarParser.SchemeItemContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeBlock.
    def enterSchemeBlock(self, ctx:MizarParser.SchemeBlockContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeBlock.
    def exitSchemeBlock(self, ctx:MizarParser.SchemeBlockContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeIdentifier.
    def enterSchemeIdentifier(self, ctx:MizarParser.SchemeIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeIdentifier.
    def exitSchemeIdentifier(self, ctx:MizarParser.SchemeIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeParameters.
    def enterSchemeParameters(self, ctx:MizarParser.SchemeParametersContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeParameters.
    def exitSchemeParameters(self, ctx:MizarParser.SchemeParametersContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeConclusion.
    def enterSchemeConclusion(self, ctx:MizarParser.SchemeConclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeConclusion.
    def exitSchemeConclusion(self, ctx:MizarParser.SchemeConclusionContext):
        pass


    # Enter a parse tree produced by MizarParser#schemePremise.
    def enterSchemePremise(self, ctx:MizarParser.SchemePremiseContext):
        pass

    # Exit a parse tree produced by MizarParser#schemePremise.
    def exitSchemePremise(self, ctx:MizarParser.SchemePremiseContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeSegment.
    def enterSchemeSegment(self, ctx:MizarParser.SchemeSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeSegment.
    def exitSchemeSegment(self, ctx:MizarParser.SchemeSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateSegment.
    def enterPredicateSegment(self, ctx:MizarParser.PredicateSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateSegment.
    def exitPredicateSegment(self, ctx:MizarParser.PredicateSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#predicateIdentifier.
    def enterPredicateIdentifier(self, ctx:MizarParser.PredicateIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#predicateIdentifier.
    def exitPredicateIdentifier(self, ctx:MizarParser.PredicateIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#functorSegment.
    def enterFunctorSegment(self, ctx:MizarParser.FunctorSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#functorSegment.
    def exitFunctorSegment(self, ctx:MizarParser.FunctorSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#functorIdentifier.
    def enterFunctorIdentifier(self, ctx:MizarParser.FunctorIdentifierContext):
        pass

    # Exit a parse tree produced by MizarParser#functorIdentifier.
    def exitFunctorIdentifier(self, ctx:MizarParser.FunctorIdentifierContext):
        pass


    # Enter a parse tree produced by MizarParser#auxiliaryItem.
    def enterAuxiliaryItem(self, ctx:MizarParser.AuxiliaryItemContext):
        pass

    # Exit a parse tree produced by MizarParser#auxiliaryItem.
    def exitAuxiliaryItem(self, ctx:MizarParser.AuxiliaryItemContext):
        pass


    # Enter a parse tree produced by MizarParser#privateDefinition.
    def enterPrivateDefinition(self, ctx:MizarParser.PrivateDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#privateDefinition.
    def exitPrivateDefinition(self, ctx:MizarParser.PrivateDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#constantDefinition.
    def enterConstantDefinition(self, ctx:MizarParser.ConstantDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#constantDefinition.
    def exitConstantDefinition(self, ctx:MizarParser.ConstantDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#equatingList.
    def enterEquatingList(self, ctx:MizarParser.EquatingListContext):
        pass

    # Exit a parse tree produced by MizarParser#equatingList.
    def exitEquatingList(self, ctx:MizarParser.EquatingListContext):
        pass


    # Enter a parse tree produced by MizarParser#equating.
    def enterEquating(self, ctx:MizarParser.EquatingContext):
        pass

    # Exit a parse tree produced by MizarParser#equating.
    def exitEquating(self, ctx:MizarParser.EquatingContext):
        pass


    # Enter a parse tree produced by MizarParser#privateFunctorDefinition.
    def enterPrivateFunctorDefinition(self, ctx:MizarParser.PrivateFunctorDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#privateFunctorDefinition.
    def exitPrivateFunctorDefinition(self, ctx:MizarParser.PrivateFunctorDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#privatePredicateDefinition.
    def enterPrivatePredicateDefinition(self, ctx:MizarParser.PrivatePredicateDefinitionContext):
        pass

    # Exit a parse tree produced by MizarParser#privatePredicateDefinition.
    def exitPrivatePredicateDefinition(self, ctx:MizarParser.PrivatePredicateDefinitionContext):
        pass


    # Enter a parse tree produced by MizarParser#privateFunctorPattern.
    def enterPrivateFunctorPattern(self, ctx:MizarParser.PrivateFunctorPatternContext):
        pass

    # Exit a parse tree produced by MizarParser#privateFunctorPattern.
    def exitPrivateFunctorPattern(self, ctx:MizarParser.PrivateFunctorPatternContext):
        pass


    # Enter a parse tree produced by MizarParser#privatePredicatePattern.
    def enterPrivatePredicatePattern(self, ctx:MizarParser.PrivatePredicatePatternContext):
        pass

    # Exit a parse tree produced by MizarParser#privatePredicatePattern.
    def exitPrivatePredicatePattern(self, ctx:MizarParser.PrivatePredicatePatternContext):
        pass


    # Enter a parse tree produced by MizarParser#reasoning.
    def enterReasoning(self, ctx:MizarParser.ReasoningContext):
        pass

    # Exit a parse tree produced by MizarParser#reasoning.
    def exitReasoning(self, ctx:MizarParser.ReasoningContext):
        pass


    # Enter a parse tree produced by MizarParser#caseList.
    def enterCaseList(self, ctx:MizarParser.CaseListContext):
        pass

    # Exit a parse tree produced by MizarParser#caseList.
    def exitCaseList(self, ctx:MizarParser.CaseListContext):
        pass


    # Enter a parse tree produced by MizarParser#case.
    def enterCase(self, ctx:MizarParser.CaseContext):
        pass

    # Exit a parse tree produced by MizarParser#case.
    def exitCase(self, ctx:MizarParser.CaseContext):
        pass


    # Enter a parse tree produced by MizarParser#supposeList.
    def enterSupposeList(self, ctx:MizarParser.SupposeListContext):
        pass

    # Exit a parse tree produced by MizarParser#supposeList.
    def exitSupposeList(self, ctx:MizarParser.SupposeListContext):
        pass


    # Enter a parse tree produced by MizarParser#suppose.
    def enterSuppose(self, ctx:MizarParser.SupposeContext):
        pass

    # Exit a parse tree produced by MizarParser#suppose.
    def exitSuppose(self, ctx:MizarParser.SupposeContext):
        pass


    # Enter a parse tree produced by MizarParser#reasoningItem.
    def enterReasoningItem(self, ctx:MizarParser.ReasoningItemContext):
        pass

    # Exit a parse tree produced by MizarParser#reasoningItem.
    def exitReasoningItem(self, ctx:MizarParser.ReasoningItemContext):
        pass


    # Enter a parse tree produced by MizarParser#skeletonItem.
    def enterSkeletonItem(self, ctx:MizarParser.SkeletonItemContext):
        pass

    # Exit a parse tree produced by MizarParser#skeletonItem.
    def exitSkeletonItem(self, ctx:MizarParser.SkeletonItemContext):
        pass


    # Enter a parse tree produced by MizarParser#generalization.
    def enterGeneralization(self, ctx:MizarParser.GeneralizationContext):
        pass

    # Exit a parse tree produced by MizarParser#generalization.
    def exitGeneralization(self, ctx:MizarParser.GeneralizationContext):
        pass


    # Enter a parse tree produced by MizarParser#assumption.
    def enterAssumption(self, ctx:MizarParser.AssumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#assumption.
    def exitAssumption(self, ctx:MizarParser.AssumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#singleAssumption.
    def enterSingleAssumption(self, ctx:MizarParser.SingleAssumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#singleAssumption.
    def exitSingleAssumption(self, ctx:MizarParser.SingleAssumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#collectiveAssumption.
    def enterCollectiveAssumption(self, ctx:MizarParser.CollectiveAssumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#collectiveAssumption.
    def exitCollectiveAssumption(self, ctx:MizarParser.CollectiveAssumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#existentialAssumption.
    def enterExistentialAssumption(self, ctx:MizarParser.ExistentialAssumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#existentialAssumption.
    def exitExistentialAssumption(self, ctx:MizarParser.ExistentialAssumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#conclusion.
    def enterConclusion(self, ctx:MizarParser.ConclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#conclusion.
    def exitConclusion(self, ctx:MizarParser.ConclusionContext):
        pass


    # Enter a parse tree produced by MizarParser#diffuseConclusion.
    def enterDiffuseConclusion(self, ctx:MizarParser.DiffuseConclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#diffuseConclusion.
    def exitDiffuseConclusion(self, ctx:MizarParser.DiffuseConclusionContext):
        pass


    # Enter a parse tree produced by MizarParser#exemplification.
    def enterExemplification(self, ctx:MizarParser.ExemplificationContext):
        pass

    # Exit a parse tree produced by MizarParser#exemplification.
    def exitExemplification(self, ctx:MizarParser.ExemplificationContext):
        pass


    # Enter a parse tree produced by MizarParser#example.
    def enterExample(self, ctx:MizarParser.ExampleContext):
        pass

    # Exit a parse tree produced by MizarParser#example.
    def exitExample(self, ctx:MizarParser.ExampleContext):
        pass


    # Enter a parse tree produced by MizarParser#statement.
    def enterStatement(self, ctx:MizarParser.StatementContext):
        pass

    # Exit a parse tree produced by MizarParser#statement.
    def exitStatement(self, ctx:MizarParser.StatementContext):
        pass


    # Enter a parse tree produced by MizarParser#linkableStatement.
    def enterLinkableStatement(self, ctx:MizarParser.LinkableStatementContext):
        pass

    # Exit a parse tree produced by MizarParser#linkableStatement.
    def exitLinkableStatement(self, ctx:MizarParser.LinkableStatementContext):
        pass


    # Enter a parse tree produced by MizarParser#compactStatement.
    def enterCompactStatement(self, ctx:MizarParser.CompactStatementContext):
        pass

    # Exit a parse tree produced by MizarParser#compactStatement.
    def exitCompactStatement(self, ctx:MizarParser.CompactStatementContext):
        pass


    # Enter a parse tree produced by MizarParser#choiceStatement.
    def enterChoiceStatement(self, ctx:MizarParser.ChoiceStatementContext):
        pass

    # Exit a parse tree produced by MizarParser#choiceStatement.
    def exitChoiceStatement(self, ctx:MizarParser.ChoiceStatementContext):
        pass


    # Enter a parse tree produced by MizarParser#typeChangingStatement.
    def enterTypeChangingStatement(self, ctx:MizarParser.TypeChangingStatementContext):
        pass

    # Exit a parse tree produced by MizarParser#typeChangingStatement.
    def exitTypeChangingStatement(self, ctx:MizarParser.TypeChangingStatementContext):
        pass


    # Enter a parse tree produced by MizarParser#typeChangeList.
    def enterTypeChangeList(self, ctx:MizarParser.TypeChangeListContext):
        pass

    # Exit a parse tree produced by MizarParser#typeChangeList.
    def exitTypeChangeList(self, ctx:MizarParser.TypeChangeListContext):
        pass


    # Enter a parse tree produced by MizarParser#iterativeEquality.
    def enterIterativeEquality(self, ctx:MizarParser.IterativeEqualityContext):
        pass

    # Exit a parse tree produced by MizarParser#iterativeEquality.
    def exitIterativeEquality(self, ctx:MizarParser.IterativeEqualityContext):
        pass


    # Enter a parse tree produced by MizarParser#diffuseStatement.
    def enterDiffuseStatement(self, ctx:MizarParser.DiffuseStatementContext):
        pass

    # Exit a parse tree produced by MizarParser#diffuseStatement.
    def exitDiffuseStatement(self, ctx:MizarParser.DiffuseStatementContext):
        pass


    # Enter a parse tree produced by MizarParser#justification.
    def enterJustification(self, ctx:MizarParser.JustificationContext):
        pass

    # Exit a parse tree produced by MizarParser#justification.
    def exitJustification(self, ctx:MizarParser.JustificationContext):
        pass


    # Enter a parse tree produced by MizarParser#simpleJustification.
    def enterSimpleJustification(self, ctx:MizarParser.SimpleJustificationContext):
        pass

    # Exit a parse tree produced by MizarParser#simpleJustification.
    def exitSimpleJustification(self, ctx:MizarParser.SimpleJustificationContext):
        pass


    # Enter a parse tree produced by MizarParser#proof.
    def enterProof(self, ctx:MizarParser.ProofContext):
        pass

    # Exit a parse tree produced by MizarParser#proof.
    def exitProof(self, ctx:MizarParser.ProofContext):
        pass


    # Enter a parse tree produced by MizarParser#straightforwardJustification.
    def enterStraightforwardJustification(self, ctx:MizarParser.StraightforwardJustificationContext):
        pass

    # Exit a parse tree produced by MizarParser#straightforwardJustification.
    def exitStraightforwardJustification(self, ctx:MizarParser.StraightforwardJustificationContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeJustification.
    def enterSchemeJustification(self, ctx:MizarParser.SchemeJustificationContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeJustification.
    def exitSchemeJustification(self, ctx:MizarParser.SchemeJustificationContext):
        pass


    # Enter a parse tree produced by MizarParser#references.
    def enterReferences(self, ctx:MizarParser.ReferencesContext):
        pass

    # Exit a parse tree produced by MizarParser#references.
    def exitReferences(self, ctx:MizarParser.ReferencesContext):
        pass


    # Enter a parse tree produced by MizarParser#reference.
    def enterReference(self, ctx:MizarParser.ReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#reference.
    def exitReference(self, ctx:MizarParser.ReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeReference.
    def enterSchemeReference(self, ctx:MizarParser.SchemeReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeReference.
    def exitSchemeReference(self, ctx:MizarParser.SchemeReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#localReference.
    def enterLocalReference(self, ctx:MizarParser.LocalReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#localReference.
    def exitLocalReference(self, ctx:MizarParser.LocalReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#localSchemeReference.
    def enterLocalSchemeReference(self, ctx:MizarParser.LocalSchemeReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#localSchemeReference.
    def exitLocalSchemeReference(self, ctx:MizarParser.LocalSchemeReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#libraryReference.
    def enterLibraryReference(self, ctx:MizarParser.LibraryReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#libraryReference.
    def exitLibraryReference(self, ctx:MizarParser.LibraryReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#librarySchemeReference.
    def enterLibrarySchemeReference(self, ctx:MizarParser.LibrarySchemeReferenceContext):
        pass

    # Exit a parse tree produced by MizarParser#librarySchemeReference.
    def exitLibrarySchemeReference(self, ctx:MizarParser.LibrarySchemeReferenceContext):
        pass


    # Enter a parse tree produced by MizarParser#theoremNumber.
    def enterTheoremNumber(self, ctx:MizarParser.TheoremNumberContext):
        pass

    # Exit a parse tree produced by MizarParser#theoremNumber.
    def exitTheoremNumber(self, ctx:MizarParser.TheoremNumberContext):
        pass


    # Enter a parse tree produced by MizarParser#definitionNumber.
    def enterDefinitionNumber(self, ctx:MizarParser.DefinitionNumberContext):
        pass

    # Exit a parse tree produced by MizarParser#definitionNumber.
    def exitDefinitionNumber(self, ctx:MizarParser.DefinitionNumberContext):
        pass


    # Enter a parse tree produced by MizarParser#schemeNumber.
    def enterSchemeNumber(self, ctx:MizarParser.SchemeNumberContext):
        pass

    # Exit a parse tree produced by MizarParser#schemeNumber.
    def exitSchemeNumber(self, ctx:MizarParser.SchemeNumberContext):
        pass


    # Enter a parse tree produced by MizarParser#conditions.
    def enterConditions(self, ctx:MizarParser.ConditionsContext):
        pass

    # Exit a parse tree produced by MizarParser#conditions.
    def exitConditions(self, ctx:MizarParser.ConditionsContext):
        pass


    # Enter a parse tree produced by MizarParser#proposition.
    def enterProposition(self, ctx:MizarParser.PropositionContext):
        pass

    # Exit a parse tree produced by MizarParser#proposition.
    def exitProposition(self, ctx:MizarParser.PropositionContext):
        pass


    # Enter a parse tree produced by MizarParser#sentence.
    def enterSentence(self, ctx:MizarParser.SentenceContext):
        pass

    # Exit a parse tree produced by MizarParser#sentence.
    def exitSentence(self, ctx:MizarParser.SentenceContext):
        pass


    # Enter a parse tree produced by MizarParser#formulaExpression.
    def enterFormulaExpression(self, ctx:MizarParser.FormulaExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#formulaExpression.
    def exitFormulaExpression(self, ctx:MizarParser.FormulaExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#atomicFormulaExpression.
    def enterAtomicFormulaExpression(self, ctx:MizarParser.AtomicFormulaExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#atomicFormulaExpression.
    def exitAtomicFormulaExpression(self, ctx:MizarParser.AtomicFormulaExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#quantifiedFormulaExpression.
    def enterQuantifiedFormulaExpression(self, ctx:MizarParser.QuantifiedFormulaExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#quantifiedFormulaExpression.
    def exitQuantifiedFormulaExpression(self, ctx:MizarParser.QuantifiedFormulaExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#qualifiedVariables.
    def enterQualifiedVariables(self, ctx:MizarParser.QualifiedVariablesContext):
        pass

    # Exit a parse tree produced by MizarParser#qualifiedVariables.
    def exitQualifiedVariables(self, ctx:MizarParser.QualifiedVariablesContext):
        pass


    # Enter a parse tree produced by MizarParser#implicitlyQualifiedVariables.
    def enterImplicitlyQualifiedVariables(self, ctx:MizarParser.ImplicitlyQualifiedVariablesContext):
        pass

    # Exit a parse tree produced by MizarParser#implicitlyQualifiedVariables.
    def exitImplicitlyQualifiedVariables(self, ctx:MizarParser.ImplicitlyQualifiedVariablesContext):
        pass


    # Enter a parse tree produced by MizarParser#explicitlyQualifiedVariables.
    def enterExplicitlyQualifiedVariables(self, ctx:MizarParser.ExplicitlyQualifiedVariablesContext):
        pass

    # Exit a parse tree produced by MizarParser#explicitlyQualifiedVariables.
    def exitExplicitlyQualifiedVariables(self, ctx:MizarParser.ExplicitlyQualifiedVariablesContext):
        pass


    # Enter a parse tree produced by MizarParser#qualifiedSegment.
    def enterQualifiedSegment(self, ctx:MizarParser.QualifiedSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#qualifiedSegment.
    def exitQualifiedSegment(self, ctx:MizarParser.QualifiedSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#variables.
    def enterVariables(self, ctx:MizarParser.VariablesContext):
        pass

    # Exit a parse tree produced by MizarParser#variables.
    def exitVariables(self, ctx:MizarParser.VariablesContext):
        pass


    # Enter a parse tree produced by MizarParser#qualification.
    def enterQualification(self, ctx:MizarParser.QualificationContext):
        pass

    # Exit a parse tree produced by MizarParser#qualification.
    def exitQualification(self, ctx:MizarParser.QualificationContext):
        pass


    # Enter a parse tree produced by MizarParser#typeExpression.
    def enterTypeExpression(self, ctx:MizarParser.TypeExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#typeExpression.
    def exitTypeExpression(self, ctx:MizarParser.TypeExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#structureTypeExpression.
    def enterStructureTypeExpression(self, ctx:MizarParser.StructureTypeExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#structureTypeExpression.
    def exitStructureTypeExpression(self, ctx:MizarParser.StructureTypeExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#radixType.
    def enterRadixType(self, ctx:MizarParser.RadixTypeContext):
        pass

    # Exit a parse tree produced by MizarParser#radixType.
    def exitRadixType(self, ctx:MizarParser.RadixTypeContext):
        pass


    # Enter a parse tree produced by MizarParser#typeExpressionList.
    def enterTypeExpressionList(self, ctx:MizarParser.TypeExpressionListContext):
        pass

    # Exit a parse tree produced by MizarParser#typeExpressionList.
    def exitTypeExpressionList(self, ctx:MizarParser.TypeExpressionListContext):
        pass


    # Enter a parse tree produced by MizarParser#termExpression.
    def enterTermExpression(self, ctx:MizarParser.TermExpressionContext):
        pass

    # Exit a parse tree produced by MizarParser#termExpression.
    def exitTermExpression(self, ctx:MizarParser.TermExpressionContext):
        pass


    # Enter a parse tree produced by MizarParser#arguments.
    def enterArguments(self, ctx:MizarParser.ArgumentsContext):
        pass

    # Exit a parse tree produced by MizarParser#arguments.
    def exitArguments(self, ctx:MizarParser.ArgumentsContext):
        pass


    # Enter a parse tree produced by MizarParser#adjectiveArguments.
    def enterAdjectiveArguments(self, ctx:MizarParser.AdjectiveArgumentsContext):
        pass

    # Exit a parse tree produced by MizarParser#adjectiveArguments.
    def exitAdjectiveArguments(self, ctx:MizarParser.AdjectiveArgumentsContext):
        pass


    # Enter a parse tree produced by MizarParser#termExpressionList.
    def enterTermExpressionList(self, ctx:MizarParser.TermExpressionListContext):
        pass

    # Exit a parse tree produced by MizarParser#termExpressionList.
    def exitTermExpressionList(self, ctx:MizarParser.TermExpressionListContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualification.
    def enterPostqualification(self, ctx:MizarParser.PostqualificationContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualification.
    def exitPostqualification(self, ctx:MizarParser.PostqualificationContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualifyingSegment.
    def enterPostqualifyingSegment(self, ctx:MizarParser.PostqualifyingSegmentContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualifyingSegment.
    def exitPostqualifyingSegment(self, ctx:MizarParser.PostqualifyingSegmentContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualifiedVariable.
    def enterPostqualifiedVariable(self, ctx:MizarParser.PostqualifiedVariableContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualifiedVariable.
    def exitPostqualifiedVariable(self, ctx:MizarParser.PostqualifiedVariableContext):
        pass


    # Enter a parse tree produced by MizarParser#privateDefinitionParameter.
    def enterPrivateDefinitionParameter(self, ctx:MizarParser.PrivateDefinitionParameterContext):
        pass

    # Exit a parse tree produced by MizarParser#privateDefinitionParameter.
    def exitPrivateDefinitionParameter(self, ctx:MizarParser.PrivateDefinitionParameterContext):
        pass


