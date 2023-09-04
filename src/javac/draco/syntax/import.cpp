/*
 * PROJECT:     LegoshiVM - javac
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */
#include "import.hpp"

void import::initStatement(std::vector<token> statement)
{
    this->packageName = statement[0];
}

void import::translateIntoBinary(ClassFile *file)
{
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    for (size_t i = 0; i < packageName.internals.size(); i++)
    {
        info.info.push_back(packageName.internals.at(i));
    }
    file->constantPool.push_back(info);
    file->constantPoolAmount++;
}
