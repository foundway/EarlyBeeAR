#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4801;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m32903_gshared (DefaultComparer_t4801 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32903(__this, method) (( void (*) (DefaultComparer_t4801 *, MethodInfo*))DefaultComparer__ctor_m32903_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m32904_gshared (DefaultComparer_t4801 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m32904(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4801 *, Guid_t1275 , Guid_t1275 , MethodInfo*))DefaultComparer_Compare_m32904_gshared)(__this, ___x, ___y, method)
