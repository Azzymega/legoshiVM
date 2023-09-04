/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractStatement.hpp"
#include "../../tokens/token.hpp"

class package : public abstractStatement {
private:
    token packageName;
public:
    void initStatement (std::vector<token> statement) override;
    void translateIntoBinary(ClassFile* file) override;
};