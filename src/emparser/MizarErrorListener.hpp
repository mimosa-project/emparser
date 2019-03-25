#pragma once

#include "BaseErrorListener.h"
#include "PositionMap.hpp"

class MizarErrorListener : public antlr4::BaseErrorListener {
public:
    MizarErrorListener(PositionMap::ptr position_map = nullptr);
    virtual ~MizarErrorListener() {}

    virtual void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine,
      const std::string &msg, std::exception_ptr e) override;
private:
    PositionMap::ptr position_map_;
};
