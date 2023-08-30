/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#include "class_item_engine.h"
#include "../../constant-pool-types/constant_utf8_info.h"
#include "../../constant-pool-types/constant_class_info.h"
#include "../../constant-pool-types/constant_field_ref_info.h"
#include "../../constant-pool-types/constant_method_ref_info.h"
#include "../../constant-pool-types/constant_interface_method_ref_info.h"
#include "../../constant-pool-types/constant_string_info.h"
#include "../../constant-pool-types/constant_integer_info.h"
#include "../../constant-pool-types/constant_float_info.h"
#include "../../constant-pool-types/constant_long_info.h"
#include "../../constant-pool-types/constant_name_and_type_info.h"

abstract_data *class_item_engine::perform_analyzing(loader *loader) {
    switch (loader->init_u1()) {
        case CONSTANT_Utf8:{
            auto* info = new constant_utf8_info();
            info->length = loader->init_u2();
            info->string = new std::string();
            for (int i = 0; i < info->length; ++i) {
                info->string->push_back(loader->init_u1());
            }
            return info;
        }
        case CONSTANT_Class: {
            auto* info = new constant_class_info();
            info->name_index = loader->init_u2();
            return info;
        }
        case CONSTANT_Fieldref: {
            auto* info = new constant_field_ref_info();
            info->class_index = loader->init_u2();
            info->name_and_type_index = loader->init_u2();
            return info;
        }
        case CONSTANT_Methodref: {
            auto* info = new constant_method_ref_info();
            info->class_index = loader->init_u2();
            info->name_and_type_index = loader->init_u2();
            return info;
        }
        case CONSTANT_InterfaceMethodref: {
            auto* info = new constant_interface_method_ref_info();
            info->class_index = loader->init_u2();
            info->name_and_type_index = loader->init_u2();
            return info;
        }
        case CONSTANT_String: {
            auto* info = new constant_string_info();
            info->string_index = loader->init_u2();
            return info;
        }
        case CONSTANT_Integer: {
            auto* info = new constant_integer_info();
            info->bytes = loader->init_u4();
            return info;
        }
        case CONSTANT_Float: {
            auto* info = new constant_float_info();
            info->bytes = loader->init_u4();
            return info;
        }
        case CONSTANT_Long: {
            auto* info = new constant_long_info();
            info->low_bytes = loader->init_u4();
            info->high_bytes = loader->init_u4();
            return info;
        }
        case CONSTANT_Double: {
            auto* info = new constant_long_info();
            info->low_bytes = loader->init_u4();
            info->high_bytes = loader->init_u4();
            return info;
        }
        case CONSTANT_NameAndType: {
            auto* info = new constant_name_and_type_info();
            info->name_index = loader->init_u2();
            info->descriptor_index = loader->init_u2();
            return info;
        }
        default:{
            loader->set_bytes_amount(loader->return_bytes()-1);
            *size-=1;
            return nullptr;
        }
    }
}
