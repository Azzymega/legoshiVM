/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_CLASS_METADATA_H
#define LEGOSHIVM_CLASS_METADATA_H


#include "../../lvm/base/def.h"
#include "abstract_data.h"

class class_metadata : public abstract_data{
public:
    u4 reserved_jvm_numbers; // 0xCAFEBABE
    u2 minor_version;
    u2 major_version;
    u2 access_flags;
    u2 this_class;
    u2 super_class;
    void resolve_reserved(u4 data);
    void resolve_min_ver(u2 data);
    void resolve_maj_ver(u2 data);
    void resolve_acc_flags(u2 data);
    void resolve_this(u2 data);
    void resolve_super(u2 data);
};


#endif //LEGOSHIVM_CLASS_METADATA_H
