/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_ABSTRACT_ENGINE_H
#define LEGOSHIVM_ABSTRACT_ENGINE_H


#include "../utility/abstract_data.h"
#include "../io/loader.h"

class abstract_engine {
public:
    abstract_engine();
    virtual abstract_data* perform_analyzing(loader* loader) = 0;
};


#endif //LEGOSHIVM_ABSTRACT_ENGINE_H
