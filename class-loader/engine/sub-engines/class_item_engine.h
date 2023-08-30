/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#ifndef LEGOSHIVM_CLASS_ITEM_ENGINE_H
#define LEGOSHIVM_CLASS_ITEM_ENGINE_H

#include "../../core/tags.h"
#include "../abstract_engine.h"

class class_item_engine : public abstract_engine {
public:
    u2* size;
    abstract_data * perform_analyzing(loader* loader) override;
};


#endif //LEGOSHIVM_CLASS_ITEM_ENGINE_H
