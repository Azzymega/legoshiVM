cmake_minimum_required(VERSION 3.25)
project(legoshiVM)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -static-libstdc++)
set(CMAKE_CXX_FLAGS -Wall)
set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CSS_STANDARD_LIBRARIES}")
set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

add_executable(legoshiVM main.cpp vm/type-system/basic_primitive_type.cpp
        vm/type-system/basic_primitive_type.h vm/type-system/types/value/byte.cpp
        vm/type-system/types/value/byte.h vm/base/def.h vm/type-system/types/value/short.cpp
        vm/type-system/types/value/short.h vm/type-system/types/value/int.cpp
        vm/type-system/types/value/int.h vm/type-system/types/value/long.cpp
        vm/type-system/types/value/long.h vm/type-system/types/value/float.cpp
        vm/type-system/types/value/float.h vm/type-system/types/value/double.cpp
        vm/type-system/types/value/double.h vm/type-system/types/value/char.cpp
        vm/type-system/types/value/char.h vm/type-system/types/reference/object.cpp
        vm/type-system/types/reference/object.h vm/type-system/types/reference/return_address.cpp
        vm/type-system/types/reference/return_address.h vm/base/lvm.cpp vm/base/lvm.h
        vm/base/vm-types/method.cpp vm/base/vm-types/method.h vm/heap/heap_controller.cpp
        vm/heap/heap_controller.h class-loader/class_file.cpp class-loader/class_file.h
        class-loader/core/tags.h class-loader/core/flags.h class-loader/constant-pool-types/constant_class_info.h
        class-loader/constant-pool-types/constant_double_info.h class-loader/constant-pool-types/constant_field_ref_info.h
        class-loader/constant-pool-types/constant_float_info.h class-loader/constant-pool-types/constant_integer_info.h
        class-loader/constant-pool-types/constant_interface_method_ref_info.h class-loader/constant-pool-types/constant_invoke_dynamic_info.h
        class-loader/constant-pool-types/constant_long_info.h class-loader/constant-pool-types/constant_method_handle_info.h
        class-loader/constant-pool-types/constant_method_ref_info.h class-loader/constant-pool-types/constant_method_type_info.h
        class-loader/constant-pool-types/constant_name_and_type_info.h class-loader/constant-pool-types/constant_string_info.h
        class-loader/constant-pool-types/constant_utf8_info.h class-loader/constant-pool-types/constant_pool_item.cpp
        class-loader/constant-pool-types/constant_pool_item.h class-loader/attributes/attribute.cpp
        class-loader/attributes/attribute.h class-loader/attributes/source_file.cpp class-loader/attributes/source_file.h
        class-loader/attributes/constant_value.cpp class-loader/attributes/constant_value.h
        class-loader/core/exception_table.h class-loader/attributes/code.cpp class-loader/attributes/code.h
        class-loader/field-method/field.cpp class-loader/field-method/field.h class-loader/field-method/methods.cpp
        class-loader/field-method/methods.h class-loader/attribute_factory.cpp class-loader/attribute_factory.h
        class-loader/engine/class_machine.cpp class-loader/engine/class_machine.h class-loader/utility/class_metadata.cpp
        class-loader/utility/class_metadata.h class-loader/io/loader.cpp class-loader/io/loader.h
        class-loader/engine/sub-engines/class_mt_engine.cpp class-loader/engine/sub-engines/class_mt_engine.h
        class-loader/utility/abstract_data.cpp class-loader/utility/abstract_data.h
        class-loader/engine/abstract_engine.cpp class-loader/engine/abstract_engine.h
        class-loader/utility/class_constant_pool.cpp class-loader/utility/class_constant_pool.h
        class-loader/engine/sub-engines/class_const_pool_engine.cpp
        class-loader/engine/sub-engines/class_const_pool_engine.h
        class-loader/engine/sub-engines/class_item_engine.cpp
        class-loader/engine/sub-engines/class_item_engine.h
        class-loader/attributes/exceptions.cpp class-loader/attributes/exceptions.h
        class-loader/core/line_number_table.cpp class-loader/core/line_number_table.h
        class-loader/attributes/line_number_table_attr.cpp class-loader/attributes/line_number_table_attr.h
        class-loader/core/local_variable_table.cpp class-loader/core/local_variable_table.h
        class-loader/attributes/local_variable_table_attr.cpp class-loader/attributes/local_variable_table_attr.h
        class-loader/engine/sub-engines/class_attribute_engine.cpp
        class-loader/engine/sub-engines/class_attribute_engine.h
        class-loader/engine/sub-engines/class_exception_table_engine.cpp
        class-loader/engine/sub-engines/class_exception_table_engine.h
        class-loader/engine/sub-engines/class_line_number_table_engine.cpp
        class-loader/engine/sub-engines/class_line_number_table_engine.h
        class-loader/engine/sub-engines/class_local_variable_table_engine.cpp
        class-loader/engine/sub-engines/class_local_variable_table_engine.h
        class-loader/engine/sub-engines/class_field_engine.cpp
        class-loader/engine/sub-engines/class_field_engine.h
        class-loader/engine/sub-engines/class_method_engine.cpp
        class-loader/engine/sub-engines/class_method_engine.h class-loader/engine/sub-engines/class_interface_engine.cpp class-loader/engine/sub-engines/class_interface_engine.h class-loader/field-method/interface.cpp class-loader/field-method/interface.h vm/base/memory.cpp vm/base/memory.h vm/base/memory/load_lvm_frames.cpp vm/base/memory/load_lvm_frames.h vm/base/thread.cpp vm/base/thread.h vm/base/memory/init_lvm.cpp vm/base/memory/init_lvm.h vm/native_calls/jdirect_call_manager.cpp vm/native_calls/jdirect_call_manager.h vm/native_calls/jvm_types.h)
