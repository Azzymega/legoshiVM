/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_INTERFACE_H
#define LEGOSHIVM_INTERFACE_H


#include <vector>
#include <string>
#include "../../lvm/base/def.h"
#include "../utility/abstract_data.h"

class interface : public abstract_data {
public:
    u2 interface_count;
    std::vector<u2> interface_indexes;
};


#endif //LEGOSHIVM_INTERFACE_H
