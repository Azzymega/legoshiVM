/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#include "load_lvm_frames.h"

method load_lvm_frames::produce_frame(const methods& raw_method) {
    method mt = method();
    mt.attributes = raw_method.attributes;
    mt.attributes_count = raw_method.attributes_count;
    mt.access_flags = raw_method.access_flags;
    mt.signature_index = raw_method.signature_index;
    mt.name_index = raw_method.name_index;
    return mt;
}
