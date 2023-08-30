/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H
#define LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H


#include "../abstract_engine.h"

class class_line_number_table_engine : public abstract_engine {
public:
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_LINE_NUMBER_TABLE_ENGINE_H
