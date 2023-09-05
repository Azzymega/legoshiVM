#include "field.hpp"

void field::initStatement(std::vector<token> statement)
{
    for (size_t i = 0; i < statement.size(); i++)
    {
        if (statement[i].type == tokenType::flags)
        {
            this->flags.push_back(statement[i]);
        }
        else {
            this->fieldType = statement[i+1];
            this->fieldName = statement[i+2];
        }
    }
    
}

void field::translateIntoBinary(ClassFile *file)
{
    file->FieldCount++;
    field_t fl = field_t();
    fl.access_flags = fieldFlags::ACC_PUBLICF;
    cpinfo info;
    info.tag = cptype::CONSTANT_Utf8;
    for (size_t i = 0; i < fieldName.internals.size(); i++)
    {
        info.info.push_back(fieldName.internals.at(i));
    }
    file->constantPool.push_back(info);
    file->constantPoolAmount++;
    fl.name_index = file->constantPoolAmount;
    fl.descriptor_index = file->constantPoolAmount;
    file->fields.push_back(fl);
}
