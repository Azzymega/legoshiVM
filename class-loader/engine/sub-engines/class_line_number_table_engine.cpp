//
// Created by Danil on 28.08.2023.
//

#include "class_line_number_table_engine.h"
#include "../../core/line_number_table.h"

abstract_data *class_line_number_table_engine::perform_analyzing(loader *loader) {
    auto* file = new line_number_table();
    file->start_pc = loader->init_u2();
    file->line_number = loader->init_u2();
    return file;
}
