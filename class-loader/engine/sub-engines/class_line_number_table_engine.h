//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H
#define LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H


#include "../abstract_engine.h"

class class_line_number_table_engine : public abstract_engine {
public:
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H
