/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_CLASS_MT_ENGINE_H
#define LEGOSHIVM_CLASS_MT_ENGINE_H


#include "../abstract_engine.h"
#include "../../utility/class_metadata.h"

class class_mt_engine : public abstract_engine{
public:
    abstract_data * perform_analyzing(loader* loader) override;

    abstract_data *perform_second_analyzing(loader *loader);
};


#endif //LEGOSHIVM_CLASS_MT_ENGINE_H
