/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#pragma once
#include "../abstractStatement.hpp"
#include <vector>
#include "field.hpp"
#include "method.hpp"

class classSyn : public abstractStatement {
private:
    std::vector<token> flags;
    std::vector<field> fields;
    std::vector<method> methods;
    token className;
public:
    void initStatement (std::vector<token> statement) override;
    void translateIntoBinary(ClassFile* file) override;
};