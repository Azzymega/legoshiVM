/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_CLASS_ATTRIBUTE_ENGINE_H
#define LEGOSHIVM_CLASS_ATTRIBUTE_ENGINE_H


#include "../abstract_engine.h"
#include "../../constant-pool-types/constant_pool_item.h"
#include "../../core/tags.h"
#include "class_exception_table_engine.h"
#include "class_line_number_table_engine.h"
#include "class_local_variable_table_engine.h"

class class_attribute_engine : public abstract_engine {
private:
    class_exception_table_engine class_exception_table_engine;
    class_line_number_table_engine class_line_number_table_engine;
    class_local_variable_table_engine class_local_variable_table_engine;
public:
    std::vector<constant_pool_item*>* constant_pool;
    attributes analyze_constant_pool_index(const std::string& data);
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_ATTRIBUTE_ENGINE_H
