//
// Created by Danil on 28.08.2023.
//

#include "class_attribute_engine.h"
#include "../../constant-pool-types/constant_utf8_info.h"
#include "../../attributes/source_file.h"
#include "../../attributes/constant_value.h"
#include "../../attributes/code.h"
#include "../../attributes/exceptions.h"
#include "../../core/line_number_table.h"
#include "../../attributes/line_number_table_attr.h"
#include "../../attributes/local_variable_table_attr.h"

abstract_data *class_attribute_engine::perform_analyzing(loader *loader) {
    u2 attribute_name_index = loader->init_u2();
    u4 attribute_length = loader->init_u4();
    switch (analyze_constant_pool_index(static_cast<constant_utf8_info*>(constant_pool->at(attribute_name_index - 1))->string->c_str())) {
        case attributes::source_file:{
            auto* file = new class source_file();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->resolve_file_index(loader->init_u2());
            return file;
        }
        case attributes::constant_value: {
            auto* file = new class constant_value();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->resolve_value_index(loader->init_u2());
            return file;
        }
        case attributes::code: {
            auto* file = new class code();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->max_stack = loader->init_u2();
            file->max_locals = loader->init_u2();
            file->code_length = loader->init_u4();
            for (size_t i = 0; i < file->code_length; ++i) {
                file->code.push_back(loader->init_u1());
            }
            file->exception_table_length = loader->init_u2();
            for (int i = 0; i < file->exception_table_length; ++i) {
                file->exception_table.push_back(*static_cast<exception_table*>(this->class_exception_table_engine.perform_analyzing(loader)));
            }
            file->attribute_count = loader->init_u2();
            for (int i = 0; i < file->attribute_count; ++i) {
                file->attributes.push_back(static_cast<attribute*>(perform_analyzing(loader)));
            }
            return file;
        }
        case attributes::exceptions: {
            auto* file = new class exceptions();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->number_of_exceptions = loader->init_u2();
            for (int i = 0; i < file->number_of_exceptions; ++i) {
                file->exception_index_table.push_back(loader->init_u2());
            }
            return file;
        }
        case attributes::line_number_table: {
            auto* file = new class line_number_table_attr();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->line_number_table_length = loader->init_u2();
            for (int i = 0; i < file->line_number_table_length; ++i) {
                file->line_number_table.push_back(*static_cast<class line_number_table*>(class_line_number_table_engine.perform_analyzing(loader)));
            }
            return file;
        }
        case attributes::local_variable_table: {
            auto* file = new local_variable_table_attr();
            file->resolve_name(attribute_name_index);
            file->resolve_length(attribute_length);
            file->local_variable_table_length = loader->init_u2();
            for (int i = 0; i < file->local_variable_table_length; ++i) {
                file->local_variable_table.push_back(*static_cast<class local_variable_table*>(class_local_variable_table_engine.perform_analyzing(loader)));
            }
            return file;
        }
    }
    return nullptr;
}

attributes class_attribute_engine::analyze_constant_pool_index(const std::string& data) {
    if (data == "SourceFile"){
        return attributes::source_file;
    }
    else if (data == "ConstantValue"){
        return attributes::constant_value;
    }
    else if (data == "Code"){
        return attributes::code;
    }
    else if (data == "Exceptions"){
        return attributes::exceptions;
    }
    else if (data == "LineNumberTable"){
        return attributes::line_number_table;
    }
    else if (data == "LocalVariableTable"){
        return attributes::local_variable_table;
    }
    else {
        return attributes::bootstrap_method;
    }
}

