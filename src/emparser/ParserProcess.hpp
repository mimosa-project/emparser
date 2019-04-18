#pragma once

#include <string>
#include <map>
#include <utility>
#include "PositionMap.hpp"

class ParserProcess
{
public:
    ParserProcess() {}
    virtual ~ParserProcess() {}

    std::string parse(
        const std::string& text,
        PositionMap::ptr position_map,
        const std::string& rule = std::string("article"));
    
    std::string parse_environment(const std::string& text, PositionMap::ptr position_map);
    std::string parse_text_proper(const std::string& text, PositionMap::ptr position_map);
    std::string parse_theorem(const std::string& text, PositionMap::ptr position_map);
    std::string parse_definition(const std::string& text, PositionMap::ptr position_map);
    std::string parse_registration(const std::string& text, PositionMap::ptr position_map);
    std::string parse_notation(const std::string& text, PositionMap::ptr position_map);
    std::string parse_scheme(const std::string& text, PositionMap::ptr position_map);
};