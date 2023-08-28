//
// Created by Danil on 28.08.2023.
//

#include "class_local_variable_table_engine.h"
#include "../../core/local_variable_table.h"

abstract_data *class_local_variable_table_engine::perform_analyzing(loader *loader) {
    auto* file = new local_variable_table();
    file->start_pc = loader->init_u2();
    file->length = loader->init_u2();
    file->name_index = loader->init_u2();
    file->signature_index = loader->init_u2();
    file->slot = loader->init_u2();
    return file;
}
