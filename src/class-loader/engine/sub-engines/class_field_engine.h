/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_CLASS_FIELD_ENGINE_H
#define LEGOSHIVM_CLASS_FIELD_ENGINE_H


#include "../abstract_engine.h"
#include "class_attribute_engine.h"

class class_field_engine : public abstract_engine{
public:
    class_attribute_engine class_attribute_engine;
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_FIELD_ENGINE_H
