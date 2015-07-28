#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t2582;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m14724_gshared (GenericComparer_1_t2582 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m14724(__this, method) (( void (*) (GenericComparer_1_t2582 *, MethodInfo*))GenericComparer_1__ctor_m14724_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m32898_gshared (GenericComparer_1_t2582 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m32898(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2582 *, Guid_t1275 , Guid_t1275 , MethodInfo*))GenericComparer_1_Compare_m32898_gshared)(__this, ___x, ___y, method)
