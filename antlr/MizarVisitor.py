# Generated from c:\dev\mimosa-project\emparser\antlr\Mizar.g4 by ANTLR 4.7.1
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .MizarParser import MizarParser
else:
    from MizarParser import MizarParser

# This class defines a complete generic visitor for a parse tree produced by MizarParser.

class MizarVisitor(ParseTreeVisitor):

    # Visit a parse tree produced by MizarParser#article.
    def visitArticle(self, ctx:MizarParser.ArticleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#environment_declaration.
    def visitEnvironment_declaration(self, ctx:MizarParser.Environment_declarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#directive.
    def visitDirective(self, ctx:MizarParser.DirectiveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#vocabulary_directive.
    def visitVocabulary_directive(self, ctx:MizarParser.Vocabulary_directiveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#vocabulary_name.
    def visitVocabulary_name(self, ctx:MizarParser.Vocabulary_nameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#library_directive.
    def visitLibrary_directive(self, ctx:MizarParser.Library_directiveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#article_name.
    def visitArticle_name(self, ctx:MizarParser.Article_nameContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#requirement_directive.
    def visitRequirement_directive(self, ctx:MizarParser.Requirement_directiveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#requirement.
    def visitRequirement(self, ctx:MizarParser.RequirementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#text_proper.
    def visitText_proper(self, ctx:MizarParser.Text_properContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#section.
    def visitSection(self, ctx:MizarParser.SectionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#text_item.
    def visitText_item(self, ctx:MizarParser.Text_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reservation.
    def visitReservation(self, ctx:MizarParser.ReservationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reservation_segment.
    def visitReservation_segment(self, ctx:MizarParser.Reservation_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reserved_identifiers.
    def visitReserved_identifiers(self, ctx:MizarParser.Reserved_identifiersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reserved_identifier.
    def visitReserved_identifier(self, ctx:MizarParser.Reserved_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definitional_item.
    def visitDefinitional_item(self, ctx:MizarParser.Definitional_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#registration_item.
    def visitRegistration_item(self, ctx:MizarParser.Registration_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#notation_item.
    def visitNotation_item(self, ctx:MizarParser.Notation_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definitional_block.
    def visitDefinitional_block(self, ctx:MizarParser.Definitional_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#registration_block.
    def visitRegistration_block(self, ctx:MizarParser.Registration_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#notation_block.
    def visitNotation_block(self, ctx:MizarParser.Notation_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definition_item.
    def visitDefinition_item(self, ctx:MizarParser.Definition_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#notation_declaration.
    def visitNotation_declaration(self, ctx:MizarParser.Notation_declarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#loci_declaration.
    def visitLoci_declaration(self, ctx:MizarParser.Loci_declarationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#permissive_assumption.
    def visitPermissive_assumption(self, ctx:MizarParser.Permissive_assumptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definition.
    def visitDefinition(self, ctx:MizarParser.DefinitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#redefinition.
    def visitRedefinition(self, ctx:MizarParser.RedefinitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#structure_definition.
    def visitStructure_definition(self, ctx:MizarParser.Structure_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#ancestors.
    def visitAncestors(self, ctx:MizarParser.AncestorsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#structure_symbol.
    def visitStructure_symbol(self, ctx:MizarParser.Structure_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#loci.
    def visitLoci(self, ctx:MizarParser.LociContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#fields.
    def visitFields(self, ctx:MizarParser.FieldsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#locus.
    def visitLocus(self, ctx:MizarParser.LocusContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#variable_identifier.
    def visitVariable_identifier(self, ctx:MizarParser.Variable_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#field_segment.
    def visitField_segment(self, ctx:MizarParser.Field_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#selector_symbol.
    def visitSelector_symbol(self, ctx:MizarParser.Selector_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#specification.
    def visitSpecification(self, ctx:MizarParser.SpecificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#mode_definition.
    def visitMode_definition(self, ctx:MizarParser.Mode_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#mode_pattern.
    def visitMode_pattern(self, ctx:MizarParser.Mode_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#mode_symbol.
    def visitMode_symbol(self, ctx:MizarParser.Mode_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#mode_synonym.
    def visitMode_synonym(self, ctx:MizarParser.Mode_synonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definiens.
    def visitDefiniens(self, ctx:MizarParser.DefiniensContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#simple_definiens.
    def visitSimple_definiens(self, ctx:MizarParser.Simple_definiensContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#label_identifier.
    def visitLabel_identifier(self, ctx:MizarParser.Label_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#conditional_definiens.
    def visitConditional_definiens(self, ctx:MizarParser.Conditional_definiensContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#partial_definiens_list.
    def visitPartial_definiens_list(self, ctx:MizarParser.Partial_definiens_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#partial_definiens.
    def visitPartial_definiens(self, ctx:MizarParser.Partial_definiensContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#mode_property.
    def visitMode_property(self, ctx:MizarParser.Mode_propertyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_definition.
    def visitFunctor_definition(self, ctx:MizarParser.Functor_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_pattern.
    def visitFunctor_pattern(self, ctx:MizarParser.Functor_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_property.
    def visitFunctor_property(self, ctx:MizarParser.Functor_propertyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_synonym.
    def visitFunctor_synonym(self, ctx:MizarParser.Functor_synonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_loci.
    def visitFunctor_loci(self, ctx:MizarParser.Functor_lociContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_symbol.
    def visitFunctor_symbol(self, ctx:MizarParser.Functor_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#left_functor_bracket.
    def visitLeft_functor_bracket(self, ctx:MizarParser.Left_functor_bracketContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#right_functor_bracket.
    def visitRight_functor_bracket(self, ctx:MizarParser.Right_functor_bracketContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_definition.
    def visitPredicate_definition(self, ctx:MizarParser.Predicate_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_pattern.
    def visitPredicate_pattern(self, ctx:MizarParser.Predicate_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_property.
    def visitPredicate_property(self, ctx:MizarParser.Predicate_propertyContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_synonym.
    def visitPredicate_synonym(self, ctx:MizarParser.Predicate_synonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_antonym.
    def visitPredicate_antonym(self, ctx:MizarParser.Predicate_antonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_symbol.
    def visitPredicate_symbol(self, ctx:MizarParser.Predicate_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_definition.
    def visitAttribute_definition(self, ctx:MizarParser.Attribute_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_pattern.
    def visitAttribute_pattern(self, ctx:MizarParser.Attribute_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_synonym.
    def visitAttribute_synonym(self, ctx:MizarParser.Attribute_synonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_antonym.
    def visitAttribute_antonym(self, ctx:MizarParser.Attribute_antonymContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_symbol.
    def visitAttribute_symbol(self, ctx:MizarParser.Attribute_symbolContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#attribute_loci.
    def visitAttribute_loci(self, ctx:MizarParser.Attribute_lociContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#cluster_registration.
    def visitCluster_registration(self, ctx:MizarParser.Cluster_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#existential_registration.
    def visitExistential_registration(self, ctx:MizarParser.Existential_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#adjective_cluster.
    def visitAdjective_cluster(self, ctx:MizarParser.Adjective_clusterContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#adjective.
    def visitAdjective(self, ctx:MizarParser.AdjectiveContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#conditional_registration.
    def visitConditional_registration(self, ctx:MizarParser.Conditional_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functorial_registration.
    def visitFunctorial_registration(self, ctx:MizarParser.Functorial_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#identify_registration.
    def visitIdentify_registration(self, ctx:MizarParser.Identify_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#property_registration.
    def visitProperty_registration(self, ctx:MizarParser.Property_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reduction_registration.
    def visitReduction_registration(self, ctx:MizarParser.Reduction_registrationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#correctness_conditions.
    def visitCorrectness_conditions(self, ctx:MizarParser.Correctness_conditionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#correctness_condition.
    def visitCorrectness_condition(self, ctx:MizarParser.Correctness_conditionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#theorem.
    def visitTheorem(self, ctx:MizarParser.TheoremContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_item.
    def visitScheme_item(self, ctx:MizarParser.Scheme_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_block.
    def visitScheme_block(self, ctx:MizarParser.Scheme_blockContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_identifier.
    def visitScheme_identifier(self, ctx:MizarParser.Scheme_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_parameters.
    def visitScheme_parameters(self, ctx:MizarParser.Scheme_parametersContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_conclusion.
    def visitScheme_conclusion(self, ctx:MizarParser.Scheme_conclusionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_premise.
    def visitScheme_premise(self, ctx:MizarParser.Scheme_premiseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_segment.
    def visitScheme_segment(self, ctx:MizarParser.Scheme_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_segment.
    def visitPredicate_segment(self, ctx:MizarParser.Predicate_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#predicate_identifier.
    def visitPredicate_identifier(self, ctx:MizarParser.Predicate_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_segment.
    def visitFunctor_segment(self, ctx:MizarParser.Functor_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#functor_identifier.
    def visitFunctor_identifier(self, ctx:MizarParser.Functor_identifierContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#auxiliary_item.
    def visitAuxiliary_item(self, ctx:MizarParser.Auxiliary_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_definition.
    def visitPrivate_definition(self, ctx:MizarParser.Private_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#constant_definition.
    def visitConstant_definition(self, ctx:MizarParser.Constant_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#equating_list.
    def visitEquating_list(self, ctx:MizarParser.Equating_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#equating.
    def visitEquating(self, ctx:MizarParser.EquatingContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_functor_definition.
    def visitPrivate_functor_definition(self, ctx:MizarParser.Private_functor_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_predicate_definition.
    def visitPrivate_predicate_definition(self, ctx:MizarParser.Private_predicate_definitionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_functor_pattern.
    def visitPrivate_functor_pattern(self, ctx:MizarParser.Private_functor_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_predicate_pattern.
    def visitPrivate_predicate_pattern(self, ctx:MizarParser.Private_predicate_patternContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reasoning.
    def visitReasoning(self, ctx:MizarParser.ReasoningContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#case_list.
    def visitCase_list(self, ctx:MizarParser.Case_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#case.
    def visitCase(self, ctx:MizarParser.CaseContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#suppose_list.
    def visitSuppose_list(self, ctx:MizarParser.Suppose_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#suppose.
    def visitSuppose(self, ctx:MizarParser.SupposeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reasoning_item.
    def visitReasoning_item(self, ctx:MizarParser.Reasoning_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#skeleton_item.
    def visitSkeleton_item(self, ctx:MizarParser.Skeleton_itemContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#generalization.
    def visitGeneralization(self, ctx:MizarParser.GeneralizationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#assumption.
    def visitAssumption(self, ctx:MizarParser.AssumptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#single_assumption.
    def visitSingle_assumption(self, ctx:MizarParser.Single_assumptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#collective_assumption.
    def visitCollective_assumption(self, ctx:MizarParser.Collective_assumptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#existential_assumption.
    def visitExistential_assumption(self, ctx:MizarParser.Existential_assumptionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#conclusion.
    def visitConclusion(self, ctx:MizarParser.ConclusionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#diffuse_conclusion.
    def visitDiffuse_conclusion(self, ctx:MizarParser.Diffuse_conclusionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#exemplification.
    def visitExemplification(self, ctx:MizarParser.ExemplificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#example.
    def visitExample(self, ctx:MizarParser.ExampleContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#statement.
    def visitStatement(self, ctx:MizarParser.StatementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#linkable_statement.
    def visitLinkable_statement(self, ctx:MizarParser.Linkable_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#compact_statement.
    def visitCompact_statement(self, ctx:MizarParser.Compact_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#choice_statement.
    def visitChoice_statement(self, ctx:MizarParser.Choice_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#type_changing_statement.
    def visitType_changing_statement(self, ctx:MizarParser.Type_changing_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#type_change_list.
    def visitType_change_list(self, ctx:MizarParser.Type_change_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#iterative_equality.
    def visitIterative_equality(self, ctx:MizarParser.Iterative_equalityContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#diffuse_statement.
    def visitDiffuse_statement(self, ctx:MizarParser.Diffuse_statementContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#justification.
    def visitJustification(self, ctx:MizarParser.JustificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#simple_justification.
    def visitSimple_justification(self, ctx:MizarParser.Simple_justificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#proof.
    def visitProof(self, ctx:MizarParser.ProofContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#straightforward_justification.
    def visitStraightforward_justification(self, ctx:MizarParser.Straightforward_justificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_justification.
    def visitScheme_justification(self, ctx:MizarParser.Scheme_justificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#references.
    def visitReferences(self, ctx:MizarParser.ReferencesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#reference.
    def visitReference(self, ctx:MizarParser.ReferenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_reference.
    def visitScheme_reference(self, ctx:MizarParser.Scheme_referenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#local_reference.
    def visitLocal_reference(self, ctx:MizarParser.Local_referenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#local_scheme_reference.
    def visitLocal_scheme_reference(self, ctx:MizarParser.Local_scheme_referenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#library_reference.
    def visitLibrary_reference(self, ctx:MizarParser.Library_referenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#library_scheme_reference.
    def visitLibrary_scheme_reference(self, ctx:MizarParser.Library_scheme_referenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#theorem_number.
    def visitTheorem_number(self, ctx:MizarParser.Theorem_numberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#definition_number.
    def visitDefinition_number(self, ctx:MizarParser.Definition_numberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#scheme_number.
    def visitScheme_number(self, ctx:MizarParser.Scheme_numberContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#conditions.
    def visitConditions(self, ctx:MizarParser.ConditionsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#proposition.
    def visitProposition(self, ctx:MizarParser.PropositionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#sentence.
    def visitSentence(self, ctx:MizarParser.SentenceContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#formula_expression.
    def visitFormula_expression(self, ctx:MizarParser.Formula_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#atomic_formula_expression.
    def visitAtomic_formula_expression(self, ctx:MizarParser.Atomic_formula_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#quantified_formula_expression.
    def visitQuantified_formula_expression(self, ctx:MizarParser.Quantified_formula_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#qualified_variables.
    def visitQualified_variables(self, ctx:MizarParser.Qualified_variablesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#implicitly_qualified_variables.
    def visitImplicitly_qualified_variables(self, ctx:MizarParser.Implicitly_qualified_variablesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#explicitly_qualified_variables.
    def visitExplicitly_qualified_variables(self, ctx:MizarParser.Explicitly_qualified_variablesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#qualified_segment.
    def visitQualified_segment(self, ctx:MizarParser.Qualified_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#variables.
    def visitVariables(self, ctx:MizarParser.VariablesContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#qualification.
    def visitQualification(self, ctx:MizarParser.QualificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#type_expression.
    def visitType_expression(self, ctx:MizarParser.Type_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#structure_type_expression.
    def visitStructure_type_expression(self, ctx:MizarParser.Structure_type_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#radix_type.
    def visitRadix_type(self, ctx:MizarParser.Radix_typeContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#type_expression_list.
    def visitType_expression_list(self, ctx:MizarParser.Type_expression_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#term_expression.
    def visitTerm_expression(self, ctx:MizarParser.Term_expressionContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#arguments.
    def visitArguments(self, ctx:MizarParser.ArgumentsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#adjective_arguments.
    def visitAdjective_arguments(self, ctx:MizarParser.Adjective_argumentsContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#term_expression_list.
    def visitTerm_expression_list(self, ctx:MizarParser.Term_expression_listContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#postqualification.
    def visitPostqualification(self, ctx:MizarParser.PostqualificationContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#postqualifying_segment.
    def visitPostqualifying_segment(self, ctx:MizarParser.Postqualifying_segmentContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#postqualified_variable.
    def visitPostqualified_variable(self, ctx:MizarParser.Postqualified_variableContext):
        return self.visitChildren(ctx)


    # Visit a parse tree produced by MizarParser#private_definition_parameter.
    def visitPrivate_definition_parameter(self, ctx:MizarParser.Private_definition_parameterContext):
        return self.visitChildren(ctx)



del MizarParser