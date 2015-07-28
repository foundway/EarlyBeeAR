#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t2583;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m14725_gshared (GenericEqualityComparer_1_t2583 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m14725(__this, method) (( void (*) (GenericEqualityComparer_1_t2583 *, MethodInfo*))GenericEqualityComparer_1__ctor_m14725_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32905_gshared (GenericEqualityComparer_1_t2583 * __this, Guid_t1275  ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m32905(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t2583 *, Guid_t1275 , MethodInfo*))GenericEqualityComparer_1_GetHashCode_m32905_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m32906_gshared (GenericEqualityComparer_1_t2583 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m32906(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t2583 *, Guid_t1275 , Guid_t1275 , MethodInfo*))GenericEqualityComparer_1_Equals_m32906_gshared)(__this, ___x, ___y, method)
