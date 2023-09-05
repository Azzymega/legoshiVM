/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractCodeStatement.hpp"

class assigment : public abstractCodeStatement {
private:
    token assigmentType;
    token localName;
    token logic;
    token value;
public:
    void initStatement(std::vector<token> statement) override;
    std::vector<u1> translateIntoBinary(ClassFile* file, method_t* method) override;
};