/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H
#define LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H


#include "../abstract_engine.h"
#include "class_item_engine.h"

class class_const_pool_engine : public abstract_engine {
private:
    class_item_engine const_pool_item_engine;
public:
    abstract_data * perform_analyzing(loader* loader) override;
};


#endif //LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H
