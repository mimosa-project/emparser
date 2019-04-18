#include "ParserProcess.hpp"
#include <sstream>

#include "ANTLRInputStream.h"
#include "ConsoleErrorListener.h"
#include "CommonTokenStream.h"
#include "ParseTreeWalker.h"

#include "MizarErrorListener.hpp"
#include "MizarXMLBuilder.hpp"
#include "antlr/MizarLexer.h"
#include "antlr/MizarParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

string ParserProcess::parse(
    const string& text,
    PositionMap::ptr position_map,
    const string& rule)
{
    istringstream stream(text);
    ANTLRInputStream input(stream);
    MizarLexer lexer(&input);
    lexer.removeErrorListener(&ConsoleErrorListener::INSTANCE);
    MizarErrorListener mizar_error_listener(position_map);
    lexer.addErrorListener(&mizar_error_listener);

    CommonTokenStream tokens(&lexer);
    MizarParser parser(&tokens);
    parser.removeErrorListener(&ConsoleErrorListener::INSTANCE);
    parser.addErrorListener(&mizar_error_listener);

    ParseTree* tree = nullptr;
    if (rule == "article") {
        tree = parser.article();
    } else if (rule == "environment") {
        tree = parser.environmentDeclaration();
    } else if (rule == "text_proper") {
        tree = parser.textProper();
    } else if (rule == "theorem") {
        tree = parser.theorem();
    } else if (rule == "definition") {
        tree = parser.definitionalItem();
    } else if (rule == "registration") {
        tree = parser.registrationItem();
    } else if (rule == "notation") {
        tree = parser.notationItem();
    } else if (rule == "scheme") {
        tree = parser.schemeItem();
    } else {
        throw invalid_argument("Specified rule is not implemented.");
    }

    MizarXMLBuilder xml_builder(&parser, position_map);
    ParseTreeWalker::DEFAULT.walk(&xml_builder, tree);
    return xml_builder.getXMLText();
}

string ParserProcess::parse_environment(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("environment"));
}

string ParserProcess::parse_text_proper(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("text_proper"));
}

string ParserProcess::parse_theorem(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("theorem"));
}

string ParserProcess::parse_definition(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("definition"));
}

string ParserProcess::parse_registration(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("registration"));
}

string ParserProcess::parse_notation(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("notation"));
}

string ParserProcess::parse_scheme(const string& text, PositionMap::ptr position_map) {
    return parse(text, position_map, string("scheme"));
}
