#include "MizarErrorListener.hpp"
#include "spdlog/spdlog.h"
#include <regex>

using namespace std;

MizarErrorListener::MizarErrorListener(PositionMap::ptr position_map)
: position_map_(position_map) {

}

void MizarErrorListener::syntaxError(
    antlr4::Recognizer *recognizer,
    antlr4::Token * offendingSymbol,
    size_t line,
    size_t charPositionInLine,
    const std::string &msg,
    std::exception_ptr e)
{
    regex SYMBOL_PREFIX_REG("(__[GKLMORUV]\\d*_)");
    string msg_mod = regex_replace(msg, SYMBOL_PREFIX_REG, "");
    PositionMap::PositionType after_pos(line, charPositionInLine+1);
    if (position_map_) {
        if (position_map_->is_pos_exist(after_pos)) {
            PositionMap::PositionType before_pos = position_map_->get_before_pos(after_pos);
            spdlog::error("line {}:{} {}", before_pos.first, before_pos.second, msg_mod);
        } else {
            spdlog::error("line {} {}", after_pos.first, msg_mod);
        }
    }
}
