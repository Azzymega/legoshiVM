/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "call.hpp"

void call::initStatement(std::vector<token> statement)
{
    this->callName = statement[0];
    for (size_t i = 2; i < statement.size(); i++)
    {
        if (statement.at(i).type == tokenType::internals_ends)
        {
            break;
        }
        else {
            this->params.push_back(statement[i]);
        }
    }
    
}

std::vector<u1> call::translateIntoBinary(ClassFile* file, method* method)
{
    std::vector<u1> bytecode;
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    int call_Index;
    for (size_t i = 0; i < this->callName.internals.size(); i++)
    {
        info.info.push_back(callName.internals.at(i));
    }
    file->constantPool.push_back(info);
    call_Index = file->constantPoolAmount;
    file->constantPoolAmount++;
    std::vector<u1> paramsIndexes;
    for (size_t i = 0; i < this->params.size(); i++)
    {
        info.tag = cptype::CONSTANT_Utf8;
        for (size_t i = 0; i < this->params[i].internals.size(); i++)
        {
            info.info.push_back(params[i].internals.at(i));
        }
        file->constantPool.push_back(info);
        paramsIndexes.push_back(file->constantPoolAmount);
        file->constantPoolAmount++;
    for (size_t i = 0; i < paramsIndexes.size(); i++)
    {
        bytecode.push_back(18);// add bytecode enum
        bytecode.push_back(paramsIndexes[i]);
    }
    bytecode.push_back(184);
    bytecode.push_back(call_Index);
    bytecode.push_back(177);
    return bytecode;
}
