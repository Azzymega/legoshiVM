/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#include "class_exception_table_engine.h"
#include "../../core/exception_table.h"

abstract_data *class_exception_table_engine::perform_analyzing(loader *loader) {
    auto* file = new exception_table();
    file->start_pc = loader->init_u2();
    file->end_pc = loader->init_u2();
    file->handler_pc = loader->init_u2();
    file->catch_type = loader->init_u2();
    return file;
}
