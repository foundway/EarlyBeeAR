#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t2512;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1377;

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m14217 (AttributeInfo_t2512 * __this, AttributeUsageAttribute_t1377 * ___usage, int32_t ___inheritanceLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t1377 * AttributeInfo_get_Usage_m14218 (AttributeInfo_t2512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m14219 (AttributeInfo_t2512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
