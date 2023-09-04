/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractCodeStatement.hpp"

class call : public abstractCodeStatement {
private:
    token callName;
    std::vector<token> params;
public:
    void initStatement(std::vector<token> statement) override;
    std::vector<u1> translateIntoBinary(ClassFile* file, method* method) override;
};