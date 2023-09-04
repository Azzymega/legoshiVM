/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "assigment.hpp"

void assigment::initStatement(std::vector<token> statement)
{
    this->assigmentType = statement[0];
    this->localName = statement[1];
    this->logic = statement[2];
    this->value = statement[3];
}

std::vector<u1> assigment::translateIntoBinary(ClassFile* file, method* method)
{
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    for (size_t i = 0; i < this->localName.internals.size(); i++)
    {
        info.info.push_back(localName.internals.at(i));
    }
    file->constantPool.push_back(info);
    file->constantPoolAmount++;
    info.tag = cptype::CONSTANT_Integer;
    for (size_t i = 0; i < this->value.internals.size(); i++)
    {
        info.info.push_back(value.internals.at(i));
    }
    file->constantPool.push_back(info);
    return std::vector<u1>; // fix
}
