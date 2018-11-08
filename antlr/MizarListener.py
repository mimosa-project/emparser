# Generated from c:\dev\mimosa\amparser\antlr\Mizar.g4 by ANTLR 4.7.1
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


    # Enter a parse tree produced by MizarParser#environment_declaration.
    def enterEnvironment_declaration(self, ctx:MizarParser.Environment_declarationContext):
        pass

    # Exit a parse tree produced by MizarParser#environment_declaration.
    def exitEnvironment_declaration(self, ctx:MizarParser.Environment_declarationContext):
        pass


    # Enter a parse tree produced by MizarParser#directive.
    def enterDirective(self, ctx:MizarParser.DirectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#directive.
    def exitDirective(self, ctx:MizarParser.DirectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#vocabulary_directive.
    def enterVocabulary_directive(self, ctx:MizarParser.Vocabulary_directiveContext):
        pass

    # Exit a parse tree produced by MizarParser#vocabulary_directive.
    def exitVocabulary_directive(self, ctx:MizarParser.Vocabulary_directiveContext):
        pass


    # Enter a parse tree produced by MizarParser#vocabulary_name.
    def enterVocabulary_name(self, ctx:MizarParser.Vocabulary_nameContext):
        pass

    # Exit a parse tree produced by MizarParser#vocabulary_name.
    def exitVocabulary_name(self, ctx:MizarParser.Vocabulary_nameContext):
        pass


    # Enter a parse tree produced by MizarParser#library_directive.
    def enterLibrary_directive(self, ctx:MizarParser.Library_directiveContext):
        pass

    # Exit a parse tree produced by MizarParser#library_directive.
    def exitLibrary_directive(self, ctx:MizarParser.Library_directiveContext):
        pass


    # Enter a parse tree produced by MizarParser#article_name.
    def enterArticle_name(self, ctx:MizarParser.Article_nameContext):
        pass

    # Exit a parse tree produced by MizarParser#article_name.
    def exitArticle_name(self, ctx:MizarParser.Article_nameContext):
        pass


    # Enter a parse tree produced by MizarParser#requirement_directive.
    def enterRequirement_directive(self, ctx:MizarParser.Requirement_directiveContext):
        pass

    # Exit a parse tree produced by MizarParser#requirement_directive.
    def exitRequirement_directive(self, ctx:MizarParser.Requirement_directiveContext):
        pass


    # Enter a parse tree produced by MizarParser#requirement.
    def enterRequirement(self, ctx:MizarParser.RequirementContext):
        pass

    # Exit a parse tree produced by MizarParser#requirement.
    def exitRequirement(self, ctx:MizarParser.RequirementContext):
        pass


    # Enter a parse tree produced by MizarParser#text_proper.
    def enterText_proper(self, ctx:MizarParser.Text_properContext):
        pass

    # Exit a parse tree produced by MizarParser#text_proper.
    def exitText_proper(self, ctx:MizarParser.Text_properContext):
        pass


    # Enter a parse tree produced by MizarParser#section.
    def enterSection(self, ctx:MizarParser.SectionContext):
        pass

    # Exit a parse tree produced by MizarParser#section.
    def exitSection(self, ctx:MizarParser.SectionContext):
        pass


    # Enter a parse tree produced by MizarParser#text_item.
    def enterText_item(self, ctx:MizarParser.Text_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#text_item.
    def exitText_item(self, ctx:MizarParser.Text_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#reservation.
    def enterReservation(self, ctx:MizarParser.ReservationContext):
        pass

    # Exit a parse tree produced by MizarParser#reservation.
    def exitReservation(self, ctx:MizarParser.ReservationContext):
        pass


    # Enter a parse tree produced by MizarParser#reservation_segment.
    def enterReservation_segment(self, ctx:MizarParser.Reservation_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#reservation_segment.
    def exitReservation_segment(self, ctx:MizarParser.Reservation_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#reserved_identifiers.
    def enterReserved_identifiers(self, ctx:MizarParser.Reserved_identifiersContext):
        pass

    # Exit a parse tree produced by MizarParser#reserved_identifiers.
    def exitReserved_identifiers(self, ctx:MizarParser.Reserved_identifiersContext):
        pass


    # Enter a parse tree produced by MizarParser#reserved_identifier.
    def enterReserved_identifier(self, ctx:MizarParser.Reserved_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#reserved_identifier.
    def exitReserved_identifier(self, ctx:MizarParser.Reserved_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#definitional_item.
    def enterDefinitional_item(self, ctx:MizarParser.Definitional_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#definitional_item.
    def exitDefinitional_item(self, ctx:MizarParser.Definitional_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#registration_item.
    def enterRegistration_item(self, ctx:MizarParser.Registration_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#registration_item.
    def exitRegistration_item(self, ctx:MizarParser.Registration_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#notation_item.
    def enterNotation_item(self, ctx:MizarParser.Notation_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#notation_item.
    def exitNotation_item(self, ctx:MizarParser.Notation_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#definitional_block.
    def enterDefinitional_block(self, ctx:MizarParser.Definitional_blockContext):
        pass

    # Exit a parse tree produced by MizarParser#definitional_block.
    def exitDefinitional_block(self, ctx:MizarParser.Definitional_blockContext):
        pass


    # Enter a parse tree produced by MizarParser#registration_block.
    def enterRegistration_block(self, ctx:MizarParser.Registration_blockContext):
        pass

    # Exit a parse tree produced by MizarParser#registration_block.
    def exitRegistration_block(self, ctx:MizarParser.Registration_blockContext):
        pass


    # Enter a parse tree produced by MizarParser#notation_block.
    def enterNotation_block(self, ctx:MizarParser.Notation_blockContext):
        pass

    # Exit a parse tree produced by MizarParser#notation_block.
    def exitNotation_block(self, ctx:MizarParser.Notation_blockContext):
        pass


    # Enter a parse tree produced by MizarParser#definition_item.
    def enterDefinition_item(self, ctx:MizarParser.Definition_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#definition_item.
    def exitDefinition_item(self, ctx:MizarParser.Definition_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#notation_declaration.
    def enterNotation_declaration(self, ctx:MizarParser.Notation_declarationContext):
        pass

    # Exit a parse tree produced by MizarParser#notation_declaration.
    def exitNotation_declaration(self, ctx:MizarParser.Notation_declarationContext):
        pass


    # Enter a parse tree produced by MizarParser#loci_declaration.
    def enterLoci_declaration(self, ctx:MizarParser.Loci_declarationContext):
        pass

    # Exit a parse tree produced by MizarParser#loci_declaration.
    def exitLoci_declaration(self, ctx:MizarParser.Loci_declarationContext):
        pass


    # Enter a parse tree produced by MizarParser#permissive_assumption.
    def enterPermissive_assumption(self, ctx:MizarParser.Permissive_assumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#permissive_assumption.
    def exitPermissive_assumption(self, ctx:MizarParser.Permissive_assumptionContext):
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


    # Enter a parse tree produced by MizarParser#structure_definition.
    def enterStructure_definition(self, ctx:MizarParser.Structure_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#structure_definition.
    def exitStructure_definition(self, ctx:MizarParser.Structure_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#ancestors.
    def enterAncestors(self, ctx:MizarParser.AncestorsContext):
        pass

    # Exit a parse tree produced by MizarParser#ancestors.
    def exitAncestors(self, ctx:MizarParser.AncestorsContext):
        pass


    # Enter a parse tree produced by MizarParser#structure_symbol.
    def enterStructure_symbol(self, ctx:MizarParser.Structure_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#structure_symbol.
    def exitStructure_symbol(self, ctx:MizarParser.Structure_symbolContext):
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


    # Enter a parse tree produced by MizarParser#variable_identifier.
    def enterVariable_identifier(self, ctx:MizarParser.Variable_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#variable_identifier.
    def exitVariable_identifier(self, ctx:MizarParser.Variable_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#field_segment.
    def enterField_segment(self, ctx:MizarParser.Field_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#field_segment.
    def exitField_segment(self, ctx:MizarParser.Field_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#selector_symbol.
    def enterSelector_symbol(self, ctx:MizarParser.Selector_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#selector_symbol.
    def exitSelector_symbol(self, ctx:MizarParser.Selector_symbolContext):
        pass


    # Enter a parse tree produced by MizarParser#specification.
    def enterSpecification(self, ctx:MizarParser.SpecificationContext):
        pass

    # Exit a parse tree produced by MizarParser#specification.
    def exitSpecification(self, ctx:MizarParser.SpecificationContext):
        pass


    # Enter a parse tree produced by MizarParser#mode_definition.
    def enterMode_definition(self, ctx:MizarParser.Mode_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#mode_definition.
    def exitMode_definition(self, ctx:MizarParser.Mode_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#mode_pattern.
    def enterMode_pattern(self, ctx:MizarParser.Mode_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#mode_pattern.
    def exitMode_pattern(self, ctx:MizarParser.Mode_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#mode_symbol.
    def enterMode_symbol(self, ctx:MizarParser.Mode_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#mode_symbol.
    def exitMode_symbol(self, ctx:MizarParser.Mode_symbolContext):
        pass


    # Enter a parse tree produced by MizarParser#mode_synonym.
    def enterMode_synonym(self, ctx:MizarParser.Mode_synonymContext):
        pass

    # Exit a parse tree produced by MizarParser#mode_synonym.
    def exitMode_synonym(self, ctx:MizarParser.Mode_synonymContext):
        pass


    # Enter a parse tree produced by MizarParser#definiens.
    def enterDefiniens(self, ctx:MizarParser.DefiniensContext):
        pass

    # Exit a parse tree produced by MizarParser#definiens.
    def exitDefiniens(self, ctx:MizarParser.DefiniensContext):
        pass


    # Enter a parse tree produced by MizarParser#simple_definiens.
    def enterSimple_definiens(self, ctx:MizarParser.Simple_definiensContext):
        pass

    # Exit a parse tree produced by MizarParser#simple_definiens.
    def exitSimple_definiens(self, ctx:MizarParser.Simple_definiensContext):
        pass


    # Enter a parse tree produced by MizarParser#label_identifier.
    def enterLabel_identifier(self, ctx:MizarParser.Label_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#label_identifier.
    def exitLabel_identifier(self, ctx:MizarParser.Label_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#conditional_definiens.
    def enterConditional_definiens(self, ctx:MizarParser.Conditional_definiensContext):
        pass

    # Exit a parse tree produced by MizarParser#conditional_definiens.
    def exitConditional_definiens(self, ctx:MizarParser.Conditional_definiensContext):
        pass


    # Enter a parse tree produced by MizarParser#partial_definiens_list.
    def enterPartial_definiens_list(self, ctx:MizarParser.Partial_definiens_listContext):
        pass

    # Exit a parse tree produced by MizarParser#partial_definiens_list.
    def exitPartial_definiens_list(self, ctx:MizarParser.Partial_definiens_listContext):
        pass


    # Enter a parse tree produced by MizarParser#partial_definiens.
    def enterPartial_definiens(self, ctx:MizarParser.Partial_definiensContext):
        pass

    # Exit a parse tree produced by MizarParser#partial_definiens.
    def exitPartial_definiens(self, ctx:MizarParser.Partial_definiensContext):
        pass


    # Enter a parse tree produced by MizarParser#mode_property.
    def enterMode_property(self, ctx:MizarParser.Mode_propertyContext):
        pass

    # Exit a parse tree produced by MizarParser#mode_property.
    def exitMode_property(self, ctx:MizarParser.Mode_propertyContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_definition.
    def enterFunctor_definition(self, ctx:MizarParser.Functor_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_definition.
    def exitFunctor_definition(self, ctx:MizarParser.Functor_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_pattern.
    def enterFunctor_pattern(self, ctx:MizarParser.Functor_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_pattern.
    def exitFunctor_pattern(self, ctx:MizarParser.Functor_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_property.
    def enterFunctor_property(self, ctx:MizarParser.Functor_propertyContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_property.
    def exitFunctor_property(self, ctx:MizarParser.Functor_propertyContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_synonym.
    def enterFunctor_synonym(self, ctx:MizarParser.Functor_synonymContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_synonym.
    def exitFunctor_synonym(self, ctx:MizarParser.Functor_synonymContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_loci.
    def enterFunctor_loci(self, ctx:MizarParser.Functor_lociContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_loci.
    def exitFunctor_loci(self, ctx:MizarParser.Functor_lociContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_symbol.
    def enterFunctor_symbol(self, ctx:MizarParser.Functor_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_symbol.
    def exitFunctor_symbol(self, ctx:MizarParser.Functor_symbolContext):
        pass


    # Enter a parse tree produced by MizarParser#left_functor_bracket.
    def enterLeft_functor_bracket(self, ctx:MizarParser.Left_functor_bracketContext):
        pass

    # Exit a parse tree produced by MizarParser#left_functor_bracket.
    def exitLeft_functor_bracket(self, ctx:MizarParser.Left_functor_bracketContext):
        pass


    # Enter a parse tree produced by MizarParser#right_functor_bracket.
    def enterRight_functor_bracket(self, ctx:MizarParser.Right_functor_bracketContext):
        pass

    # Exit a parse tree produced by MizarParser#right_functor_bracket.
    def exitRight_functor_bracket(self, ctx:MizarParser.Right_functor_bracketContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_definition.
    def enterPredicate_definition(self, ctx:MizarParser.Predicate_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_definition.
    def exitPredicate_definition(self, ctx:MizarParser.Predicate_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_pattern.
    def enterPredicate_pattern(self, ctx:MizarParser.Predicate_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_pattern.
    def exitPredicate_pattern(self, ctx:MizarParser.Predicate_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_property.
    def enterPredicate_property(self, ctx:MizarParser.Predicate_propertyContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_property.
    def exitPredicate_property(self, ctx:MizarParser.Predicate_propertyContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_synonym.
    def enterPredicate_synonym(self, ctx:MizarParser.Predicate_synonymContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_synonym.
    def exitPredicate_synonym(self, ctx:MizarParser.Predicate_synonymContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_antonym.
    def enterPredicate_antonym(self, ctx:MizarParser.Predicate_antonymContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_antonym.
    def exitPredicate_antonym(self, ctx:MizarParser.Predicate_antonymContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_symbol.
    def enterPredicate_symbol(self, ctx:MizarParser.Predicate_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_symbol.
    def exitPredicate_symbol(self, ctx:MizarParser.Predicate_symbolContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_definition.
    def enterAttribute_definition(self, ctx:MizarParser.Attribute_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_definition.
    def exitAttribute_definition(self, ctx:MizarParser.Attribute_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_pattern.
    def enterAttribute_pattern(self, ctx:MizarParser.Attribute_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_pattern.
    def exitAttribute_pattern(self, ctx:MizarParser.Attribute_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_synonym.
    def enterAttribute_synonym(self, ctx:MizarParser.Attribute_synonymContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_synonym.
    def exitAttribute_synonym(self, ctx:MizarParser.Attribute_synonymContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_antonym.
    def enterAttribute_antonym(self, ctx:MizarParser.Attribute_antonymContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_antonym.
    def exitAttribute_antonym(self, ctx:MizarParser.Attribute_antonymContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_symbol.
    def enterAttribute_symbol(self, ctx:MizarParser.Attribute_symbolContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_symbol.
    def exitAttribute_symbol(self, ctx:MizarParser.Attribute_symbolContext):
        pass


    # Enter a parse tree produced by MizarParser#attribute_loci.
    def enterAttribute_loci(self, ctx:MizarParser.Attribute_lociContext):
        pass

    # Exit a parse tree produced by MizarParser#attribute_loci.
    def exitAttribute_loci(self, ctx:MizarParser.Attribute_lociContext):
        pass


    # Enter a parse tree produced by MizarParser#cluster_registration.
    def enterCluster_registration(self, ctx:MizarParser.Cluster_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#cluster_registration.
    def exitCluster_registration(self, ctx:MizarParser.Cluster_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#existential_registration.
    def enterExistential_registration(self, ctx:MizarParser.Existential_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#existential_registration.
    def exitExistential_registration(self, ctx:MizarParser.Existential_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#adjective_cluster.
    def enterAdjective_cluster(self, ctx:MizarParser.Adjective_clusterContext):
        pass

    # Exit a parse tree produced by MizarParser#adjective_cluster.
    def exitAdjective_cluster(self, ctx:MizarParser.Adjective_clusterContext):
        pass


    # Enter a parse tree produced by MizarParser#adjective.
    def enterAdjective(self, ctx:MizarParser.AdjectiveContext):
        pass

    # Exit a parse tree produced by MizarParser#adjective.
    def exitAdjective(self, ctx:MizarParser.AdjectiveContext):
        pass


    # Enter a parse tree produced by MizarParser#conditional_registration.
    def enterConditional_registration(self, ctx:MizarParser.Conditional_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#conditional_registration.
    def exitConditional_registration(self, ctx:MizarParser.Conditional_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#functorial_registration.
    def enterFunctorial_registration(self, ctx:MizarParser.Functorial_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#functorial_registration.
    def exitFunctorial_registration(self, ctx:MizarParser.Functorial_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#identify_registration.
    def enterIdentify_registration(self, ctx:MizarParser.Identify_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#identify_registration.
    def exitIdentify_registration(self, ctx:MizarParser.Identify_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#property_registration.
    def enterProperty_registration(self, ctx:MizarParser.Property_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#property_registration.
    def exitProperty_registration(self, ctx:MizarParser.Property_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#reduction_registration.
    def enterReduction_registration(self, ctx:MizarParser.Reduction_registrationContext):
        pass

    # Exit a parse tree produced by MizarParser#reduction_registration.
    def exitReduction_registration(self, ctx:MizarParser.Reduction_registrationContext):
        pass


    # Enter a parse tree produced by MizarParser#correctness_conditions.
    def enterCorrectness_conditions(self, ctx:MizarParser.Correctness_conditionsContext):
        pass

    # Exit a parse tree produced by MizarParser#correctness_conditions.
    def exitCorrectness_conditions(self, ctx:MizarParser.Correctness_conditionsContext):
        pass


    # Enter a parse tree produced by MizarParser#correctness_condition.
    def enterCorrectness_condition(self, ctx:MizarParser.Correctness_conditionContext):
        pass

    # Exit a parse tree produced by MizarParser#correctness_condition.
    def exitCorrectness_condition(self, ctx:MizarParser.Correctness_conditionContext):
        pass


    # Enter a parse tree produced by MizarParser#theorem.
    def enterTheorem(self, ctx:MizarParser.TheoremContext):
        pass

    # Exit a parse tree produced by MizarParser#theorem.
    def exitTheorem(self, ctx:MizarParser.TheoremContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_item.
    def enterScheme_item(self, ctx:MizarParser.Scheme_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_item.
    def exitScheme_item(self, ctx:MizarParser.Scheme_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_block.
    def enterScheme_block(self, ctx:MizarParser.Scheme_blockContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_block.
    def exitScheme_block(self, ctx:MizarParser.Scheme_blockContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_identifier.
    def enterScheme_identifier(self, ctx:MizarParser.Scheme_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_identifier.
    def exitScheme_identifier(self, ctx:MizarParser.Scheme_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_parameters.
    def enterScheme_parameters(self, ctx:MizarParser.Scheme_parametersContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_parameters.
    def exitScheme_parameters(self, ctx:MizarParser.Scheme_parametersContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_conclusion.
    def enterScheme_conclusion(self, ctx:MizarParser.Scheme_conclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_conclusion.
    def exitScheme_conclusion(self, ctx:MizarParser.Scheme_conclusionContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_premise.
    def enterScheme_premise(self, ctx:MizarParser.Scheme_premiseContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_premise.
    def exitScheme_premise(self, ctx:MizarParser.Scheme_premiseContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_segment.
    def enterScheme_segment(self, ctx:MizarParser.Scheme_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_segment.
    def exitScheme_segment(self, ctx:MizarParser.Scheme_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_segment.
    def enterPredicate_segment(self, ctx:MizarParser.Predicate_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_segment.
    def exitPredicate_segment(self, ctx:MizarParser.Predicate_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#predicate_identifier.
    def enterPredicate_identifier(self, ctx:MizarParser.Predicate_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#predicate_identifier.
    def exitPredicate_identifier(self, ctx:MizarParser.Predicate_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_segment.
    def enterFunctor_segment(self, ctx:MizarParser.Functor_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_segment.
    def exitFunctor_segment(self, ctx:MizarParser.Functor_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#functor_identifier.
    def enterFunctor_identifier(self, ctx:MizarParser.Functor_identifierContext):
        pass

    # Exit a parse tree produced by MizarParser#functor_identifier.
    def exitFunctor_identifier(self, ctx:MizarParser.Functor_identifierContext):
        pass


    # Enter a parse tree produced by MizarParser#auxiliary_item.
    def enterAuxiliary_item(self, ctx:MizarParser.Auxiliary_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#auxiliary_item.
    def exitAuxiliary_item(self, ctx:MizarParser.Auxiliary_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#private_definition.
    def enterPrivate_definition(self, ctx:MizarParser.Private_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#private_definition.
    def exitPrivate_definition(self, ctx:MizarParser.Private_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#constant_definition.
    def enterConstant_definition(self, ctx:MizarParser.Constant_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#constant_definition.
    def exitConstant_definition(self, ctx:MizarParser.Constant_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#equating_list.
    def enterEquating_list(self, ctx:MizarParser.Equating_listContext):
        pass

    # Exit a parse tree produced by MizarParser#equating_list.
    def exitEquating_list(self, ctx:MizarParser.Equating_listContext):
        pass


    # Enter a parse tree produced by MizarParser#equating.
    def enterEquating(self, ctx:MizarParser.EquatingContext):
        pass

    # Exit a parse tree produced by MizarParser#equating.
    def exitEquating(self, ctx:MizarParser.EquatingContext):
        pass


    # Enter a parse tree produced by MizarParser#private_functor_definition.
    def enterPrivate_functor_definition(self, ctx:MizarParser.Private_functor_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#private_functor_definition.
    def exitPrivate_functor_definition(self, ctx:MizarParser.Private_functor_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#private_predicate_definition.
    def enterPrivate_predicate_definition(self, ctx:MizarParser.Private_predicate_definitionContext):
        pass

    # Exit a parse tree produced by MizarParser#private_predicate_definition.
    def exitPrivate_predicate_definition(self, ctx:MizarParser.Private_predicate_definitionContext):
        pass


    # Enter a parse tree produced by MizarParser#private_functor_pattern.
    def enterPrivate_functor_pattern(self, ctx:MizarParser.Private_functor_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#private_functor_pattern.
    def exitPrivate_functor_pattern(self, ctx:MizarParser.Private_functor_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#private_predicate_pattern.
    def enterPrivate_predicate_pattern(self, ctx:MizarParser.Private_predicate_patternContext):
        pass

    # Exit a parse tree produced by MizarParser#private_predicate_pattern.
    def exitPrivate_predicate_pattern(self, ctx:MizarParser.Private_predicate_patternContext):
        pass


    # Enter a parse tree produced by MizarParser#reasoning.
    def enterReasoning(self, ctx:MizarParser.ReasoningContext):
        pass

    # Exit a parse tree produced by MizarParser#reasoning.
    def exitReasoning(self, ctx:MizarParser.ReasoningContext):
        pass


    # Enter a parse tree produced by MizarParser#case_list.
    def enterCase_list(self, ctx:MizarParser.Case_listContext):
        pass

    # Exit a parse tree produced by MizarParser#case_list.
    def exitCase_list(self, ctx:MizarParser.Case_listContext):
        pass


    # Enter a parse tree produced by MizarParser#case.
    def enterCase(self, ctx:MizarParser.CaseContext):
        pass

    # Exit a parse tree produced by MizarParser#case.
    def exitCase(self, ctx:MizarParser.CaseContext):
        pass


    # Enter a parse tree produced by MizarParser#suppose_list.
    def enterSuppose_list(self, ctx:MizarParser.Suppose_listContext):
        pass

    # Exit a parse tree produced by MizarParser#suppose_list.
    def exitSuppose_list(self, ctx:MizarParser.Suppose_listContext):
        pass


    # Enter a parse tree produced by MizarParser#suppose.
    def enterSuppose(self, ctx:MizarParser.SupposeContext):
        pass

    # Exit a parse tree produced by MizarParser#suppose.
    def exitSuppose(self, ctx:MizarParser.SupposeContext):
        pass


    # Enter a parse tree produced by MizarParser#reasoning_item.
    def enterReasoning_item(self, ctx:MizarParser.Reasoning_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#reasoning_item.
    def exitReasoning_item(self, ctx:MizarParser.Reasoning_itemContext):
        pass


    # Enter a parse tree produced by MizarParser#skeleton_item.
    def enterSkeleton_item(self, ctx:MizarParser.Skeleton_itemContext):
        pass

    # Exit a parse tree produced by MizarParser#skeleton_item.
    def exitSkeleton_item(self, ctx:MizarParser.Skeleton_itemContext):
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


    # Enter a parse tree produced by MizarParser#single_assumption.
    def enterSingle_assumption(self, ctx:MizarParser.Single_assumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#single_assumption.
    def exitSingle_assumption(self, ctx:MizarParser.Single_assumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#collective_assumption.
    def enterCollective_assumption(self, ctx:MizarParser.Collective_assumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#collective_assumption.
    def exitCollective_assumption(self, ctx:MizarParser.Collective_assumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#existential_assumption.
    def enterExistential_assumption(self, ctx:MizarParser.Existential_assumptionContext):
        pass

    # Exit a parse tree produced by MizarParser#existential_assumption.
    def exitExistential_assumption(self, ctx:MizarParser.Existential_assumptionContext):
        pass


    # Enter a parse tree produced by MizarParser#conclusion.
    def enterConclusion(self, ctx:MizarParser.ConclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#conclusion.
    def exitConclusion(self, ctx:MizarParser.ConclusionContext):
        pass


    # Enter a parse tree produced by MizarParser#diffuse_conclusion.
    def enterDiffuse_conclusion(self, ctx:MizarParser.Diffuse_conclusionContext):
        pass

    # Exit a parse tree produced by MizarParser#diffuse_conclusion.
    def exitDiffuse_conclusion(self, ctx:MizarParser.Diffuse_conclusionContext):
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


    # Enter a parse tree produced by MizarParser#linkable_statement.
    def enterLinkable_statement(self, ctx:MizarParser.Linkable_statementContext):
        pass

    # Exit a parse tree produced by MizarParser#linkable_statement.
    def exitLinkable_statement(self, ctx:MizarParser.Linkable_statementContext):
        pass


    # Enter a parse tree produced by MizarParser#compact_statement.
    def enterCompact_statement(self, ctx:MizarParser.Compact_statementContext):
        pass

    # Exit a parse tree produced by MizarParser#compact_statement.
    def exitCompact_statement(self, ctx:MizarParser.Compact_statementContext):
        pass


    # Enter a parse tree produced by MizarParser#choice_statement.
    def enterChoice_statement(self, ctx:MizarParser.Choice_statementContext):
        pass

    # Exit a parse tree produced by MizarParser#choice_statement.
    def exitChoice_statement(self, ctx:MizarParser.Choice_statementContext):
        pass


    # Enter a parse tree produced by MizarParser#type_changing_statement.
    def enterType_changing_statement(self, ctx:MizarParser.Type_changing_statementContext):
        pass

    # Exit a parse tree produced by MizarParser#type_changing_statement.
    def exitType_changing_statement(self, ctx:MizarParser.Type_changing_statementContext):
        pass


    # Enter a parse tree produced by MizarParser#type_change_list.
    def enterType_change_list(self, ctx:MizarParser.Type_change_listContext):
        pass

    # Exit a parse tree produced by MizarParser#type_change_list.
    def exitType_change_list(self, ctx:MizarParser.Type_change_listContext):
        pass


    # Enter a parse tree produced by MizarParser#iterative_equality.
    def enterIterative_equality(self, ctx:MizarParser.Iterative_equalityContext):
        pass

    # Exit a parse tree produced by MizarParser#iterative_equality.
    def exitIterative_equality(self, ctx:MizarParser.Iterative_equalityContext):
        pass


    # Enter a parse tree produced by MizarParser#diffuse_statement.
    def enterDiffuse_statement(self, ctx:MizarParser.Diffuse_statementContext):
        pass

    # Exit a parse tree produced by MizarParser#diffuse_statement.
    def exitDiffuse_statement(self, ctx:MizarParser.Diffuse_statementContext):
        pass


    # Enter a parse tree produced by MizarParser#justification.
    def enterJustification(self, ctx:MizarParser.JustificationContext):
        pass

    # Exit a parse tree produced by MizarParser#justification.
    def exitJustification(self, ctx:MizarParser.JustificationContext):
        pass


    # Enter a parse tree produced by MizarParser#simple_justification.
    def enterSimple_justification(self, ctx:MizarParser.Simple_justificationContext):
        pass

    # Exit a parse tree produced by MizarParser#simple_justification.
    def exitSimple_justification(self, ctx:MizarParser.Simple_justificationContext):
        pass


    # Enter a parse tree produced by MizarParser#proof.
    def enterProof(self, ctx:MizarParser.ProofContext):
        pass

    # Exit a parse tree produced by MizarParser#proof.
    def exitProof(self, ctx:MizarParser.ProofContext):
        pass


    # Enter a parse tree produced by MizarParser#straightforward_justification.
    def enterStraightforward_justification(self, ctx:MizarParser.Straightforward_justificationContext):
        pass

    # Exit a parse tree produced by MizarParser#straightforward_justification.
    def exitStraightforward_justification(self, ctx:MizarParser.Straightforward_justificationContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_justification.
    def enterScheme_justification(self, ctx:MizarParser.Scheme_justificationContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_justification.
    def exitScheme_justification(self, ctx:MizarParser.Scheme_justificationContext):
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


    # Enter a parse tree produced by MizarParser#scheme_reference.
    def enterScheme_reference(self, ctx:MizarParser.Scheme_referenceContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_reference.
    def exitScheme_reference(self, ctx:MizarParser.Scheme_referenceContext):
        pass


    # Enter a parse tree produced by MizarParser#local_reference.
    def enterLocal_reference(self, ctx:MizarParser.Local_referenceContext):
        pass

    # Exit a parse tree produced by MizarParser#local_reference.
    def exitLocal_reference(self, ctx:MizarParser.Local_referenceContext):
        pass


    # Enter a parse tree produced by MizarParser#local_scheme_reference.
    def enterLocal_scheme_reference(self, ctx:MizarParser.Local_scheme_referenceContext):
        pass

    # Exit a parse tree produced by MizarParser#local_scheme_reference.
    def exitLocal_scheme_reference(self, ctx:MizarParser.Local_scheme_referenceContext):
        pass


    # Enter a parse tree produced by MizarParser#library_reference.
    def enterLibrary_reference(self, ctx:MizarParser.Library_referenceContext):
        pass

    # Exit a parse tree produced by MizarParser#library_reference.
    def exitLibrary_reference(self, ctx:MizarParser.Library_referenceContext):
        pass


    # Enter a parse tree produced by MizarParser#library_scheme_reference.
    def enterLibrary_scheme_reference(self, ctx:MizarParser.Library_scheme_referenceContext):
        pass

    # Exit a parse tree produced by MizarParser#library_scheme_reference.
    def exitLibrary_scheme_reference(self, ctx:MizarParser.Library_scheme_referenceContext):
        pass


    # Enter a parse tree produced by MizarParser#theorem_number.
    def enterTheorem_number(self, ctx:MizarParser.Theorem_numberContext):
        pass

    # Exit a parse tree produced by MizarParser#theorem_number.
    def exitTheorem_number(self, ctx:MizarParser.Theorem_numberContext):
        pass


    # Enter a parse tree produced by MizarParser#definition_number.
    def enterDefinition_number(self, ctx:MizarParser.Definition_numberContext):
        pass

    # Exit a parse tree produced by MizarParser#definition_number.
    def exitDefinition_number(self, ctx:MizarParser.Definition_numberContext):
        pass


    # Enter a parse tree produced by MizarParser#scheme_number.
    def enterScheme_number(self, ctx:MizarParser.Scheme_numberContext):
        pass

    # Exit a parse tree produced by MizarParser#scheme_number.
    def exitScheme_number(self, ctx:MizarParser.Scheme_numberContext):
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


    # Enter a parse tree produced by MizarParser#formula_expression.
    def enterFormula_expression(self, ctx:MizarParser.Formula_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#formula_expression.
    def exitFormula_expression(self, ctx:MizarParser.Formula_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#atomic_formula_expression.
    def enterAtomic_formula_expression(self, ctx:MizarParser.Atomic_formula_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#atomic_formula_expression.
    def exitAtomic_formula_expression(self, ctx:MizarParser.Atomic_formula_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#quantified_formula_expression.
    def enterQuantified_formula_expression(self, ctx:MizarParser.Quantified_formula_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#quantified_formula_expression.
    def exitQuantified_formula_expression(self, ctx:MizarParser.Quantified_formula_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#qualified_variables.
    def enterQualified_variables(self, ctx:MizarParser.Qualified_variablesContext):
        pass

    # Exit a parse tree produced by MizarParser#qualified_variables.
    def exitQualified_variables(self, ctx:MizarParser.Qualified_variablesContext):
        pass


    # Enter a parse tree produced by MizarParser#implicitly_qualified_variables.
    def enterImplicitly_qualified_variables(self, ctx:MizarParser.Implicitly_qualified_variablesContext):
        pass

    # Exit a parse tree produced by MizarParser#implicitly_qualified_variables.
    def exitImplicitly_qualified_variables(self, ctx:MizarParser.Implicitly_qualified_variablesContext):
        pass


    # Enter a parse tree produced by MizarParser#explicitly_qualified_variables.
    def enterExplicitly_qualified_variables(self, ctx:MizarParser.Explicitly_qualified_variablesContext):
        pass

    # Exit a parse tree produced by MizarParser#explicitly_qualified_variables.
    def exitExplicitly_qualified_variables(self, ctx:MizarParser.Explicitly_qualified_variablesContext):
        pass


    # Enter a parse tree produced by MizarParser#qualified_segment.
    def enterQualified_segment(self, ctx:MizarParser.Qualified_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#qualified_segment.
    def exitQualified_segment(self, ctx:MizarParser.Qualified_segmentContext):
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


    # Enter a parse tree produced by MizarParser#type_expression.
    def enterType_expression(self, ctx:MizarParser.Type_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#type_expression.
    def exitType_expression(self, ctx:MizarParser.Type_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#structure_type_expression.
    def enterStructure_type_expression(self, ctx:MizarParser.Structure_type_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#structure_type_expression.
    def exitStructure_type_expression(self, ctx:MizarParser.Structure_type_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#radix_type.
    def enterRadix_type(self, ctx:MizarParser.Radix_typeContext):
        pass

    # Exit a parse tree produced by MizarParser#radix_type.
    def exitRadix_type(self, ctx:MizarParser.Radix_typeContext):
        pass


    # Enter a parse tree produced by MizarParser#type_expression_list.
    def enterType_expression_list(self, ctx:MizarParser.Type_expression_listContext):
        pass

    # Exit a parse tree produced by MizarParser#type_expression_list.
    def exitType_expression_list(self, ctx:MizarParser.Type_expression_listContext):
        pass


    # Enter a parse tree produced by MizarParser#term_expression.
    def enterTerm_expression(self, ctx:MizarParser.Term_expressionContext):
        pass

    # Exit a parse tree produced by MizarParser#term_expression.
    def exitTerm_expression(self, ctx:MizarParser.Term_expressionContext):
        pass


    # Enter a parse tree produced by MizarParser#term_expression_impl.
    def enterTerm_expression_impl(self, ctx:MizarParser.Term_expression_implContext):
        pass

    # Exit a parse tree produced by MizarParser#term_expression_impl.
    def exitTerm_expression_impl(self, ctx:MizarParser.Term_expression_implContext):
        pass


    # Enter a parse tree produced by MizarParser#arguments.
    def enterArguments(self, ctx:MizarParser.ArgumentsContext):
        pass

    # Exit a parse tree produced by MizarParser#arguments.
    def exitArguments(self, ctx:MizarParser.ArgumentsContext):
        pass


    # Enter a parse tree produced by MizarParser#adjective_arguments.
    def enterAdjective_arguments(self, ctx:MizarParser.Adjective_argumentsContext):
        pass

    # Exit a parse tree produced by MizarParser#adjective_arguments.
    def exitAdjective_arguments(self, ctx:MizarParser.Adjective_argumentsContext):
        pass


    # Enter a parse tree produced by MizarParser#term_expression_list.
    def enterTerm_expression_list(self, ctx:MizarParser.Term_expression_listContext):
        pass

    # Exit a parse tree produced by MizarParser#term_expression_list.
    def exitTerm_expression_list(self, ctx:MizarParser.Term_expression_listContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualification.
    def enterPostqualification(self, ctx:MizarParser.PostqualificationContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualification.
    def exitPostqualification(self, ctx:MizarParser.PostqualificationContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualifying_segment.
    def enterPostqualifying_segment(self, ctx:MizarParser.Postqualifying_segmentContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualifying_segment.
    def exitPostqualifying_segment(self, ctx:MizarParser.Postqualifying_segmentContext):
        pass


    # Enter a parse tree produced by MizarParser#postqualified_variable.
    def enterPostqualified_variable(self, ctx:MizarParser.Postqualified_variableContext):
        pass

    # Exit a parse tree produced by MizarParser#postqualified_variable.
    def exitPostqualified_variable(self, ctx:MizarParser.Postqualified_variableContext):
        pass


    # Enter a parse tree produced by MizarParser#private_definition_parameter.
    def enterPrivate_definition_parameter(self, ctx:MizarParser.Private_definition_parameterContext):
        pass

    # Exit a parse tree produced by MizarParser#private_definition_parameter.
    def exitPrivate_definition_parameter(self, ctx:MizarParser.Private_definition_parameterContext):
        pass


