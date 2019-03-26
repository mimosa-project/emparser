
#include <cassert>
#include <exception>
#include <sstream>
#include "spdlog/spdlog.h"
#include "MizarXMLBuilder.hpp"
#include "antlr/MizarLexer.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;
using namespace pugi;

MizarXMLBuilder::MizarXMLBuilder(MizarParser* parser, PositionMap::ptr position_map) 
:   parser_(parser), position_map_(position_map) {
}

MizarXMLBuilder::~MizarXMLBuilder() {

}

string MizarXMLBuilder::getXMLText() const {
    std::ostringstream stream;
    xml_writer_stream writer(stream);
    xml_doc_.save(writer, " ");
    return stream.str();
}

void MizarXMLBuilder::visitTerminal(TerminalNode *node) {
    if (xml_node_stack_.empty()) {
        throw invalid_argument("Terminal node must not be root");
    }
    xml_node above_xml_node = xml_node_stack_.back();

    xml_node current_xml_node;
    Token* symbol = node->getSymbol();
    if (symbol->getType() < MizarLexer::PREDICATE_SYMBOL) {
        // Caution: If you modify a grammar file (Mizar.g4),
        // check MizarLexer::PREDICATE_SYMBOL is the first token type of the symbols
        // There seems to be no alternative way to check 
        // if a symbol is mizar keyword or mizar symbol.
        current_xml_node = above_xml_node.append_child("keyword");
        current_xml_node.append_attribute("spelling").set_value(node->getText().c_str());
    } else {
        current_xml_node = above_xml_node;
        current_xml_node.append_attribute("spelling").set_value(node->getText().c_str());
    }

    if (position_map_) {
        PositionMap::PositionType after_pos(symbol->getLine(), symbol->getCharPositionInLine()+1);
        if (position_map_->is_pos_exist(after_pos)) {
            PositionMap::PositionType before_pos = position_map_->get_before_pos(after_pos);
            current_xml_node.append_attribute("line").set_value(before_pos.first);
            current_xml_node.append_attribute("col").set_value(before_pos.second);
        } else {
            spdlog::error("MizarXMLBuilder::visitTerminal Position ({}, {}) not found.",
                after_pos.first, after_pos.second);
        }
    }
}

void MizarXMLBuilder::visitErrorNode(ErrorNode *node) {
    if (xml_node_stack_.empty()) {
        throw invalid_argument("Error node must not be root");
    }

    xml_node above_xml_node = xml_node_stack_.back();
    Token* symbol = node->getSymbol();
    xml_node error_xml_node = above_xml_node.append_child("error");
    error_xml_node.append_attribute("spelling")
                  .set_value(node->getText().c_str());
    
    if (position_map_) {
        PositionMap::PositionType after_pos(symbol->getLine(), symbol->getCharPositionInLine()+1);
        if (position_map_->is_pos_exist(after_pos)) {
            PositionMap::PositionType before_pos = position_map_->get_before_pos(after_pos);
            error_xml_node.append_attribute("line").set_value(before_pos.first);
            error_xml_node.append_attribute("col").set_value(before_pos.second);
        } else {
            spdlog::error("MizarXMLBuilder::visitErrorNode Position ({}, {}) not found.",
                after_pos.first, after_pos.second);
        }
    }
}

void MizarXMLBuilder::enterEveryRule(ParserRuleContext *ctx) {
    size_t rule_index = ctx->getRuleIndex();
    const string& rule_name = parser_->getRuleNames()[rule_index];

    if (xml_node_stack_.empty()) {
        xml_node root_node = xml_doc_.append_child(rule_name.c_str());
        xml_node_stack_.push_back(root_node);
    } else {
        xml_node above_xml_node = xml_node_stack_.back();
        xml_node child_xml_node = above_xml_node.append_child(rule_name.c_str());
        xml_node_stack_.push_back(child_xml_node);
    }
}

void MizarXMLBuilder::exitEveryRule(ParserRuleContext *ctx) {
    xml_node_stack_.pop_back();
}

