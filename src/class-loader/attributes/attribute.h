/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_ATTRIBUTE_H
#define LEGOSHIVM_ATTRIBUTE_H


#include <vector>
#include "../../lvm/base/def.h"
#include "../utility/abstract_data.h"

class attribute : public abstract_data {
protected:
    u2 attribute_name;
    u4 attribute_length;
private:
    std::vector<u1> info;
public:
    void resolve_name(u2 data);
    void resolve_length(u4 data);
};


#endif //LEGOSHIVM_ATTRIBUTE_H
