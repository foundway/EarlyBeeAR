﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4797;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m32882_gshared (DefaultComparer_t4797 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32882(__this, method) (( void (*) (DefaultComparer_t4797 *, MethodInfo*))DefaultComparer__ctor_m32882_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m32883_gshared (DefaultComparer_t4797 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m32883(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4797 *, DateTimeOffset_t1274 , DateTimeOffset_t1274 , MethodInfo*))DefaultComparer_Compare_m32883_gshared)(__this, ___x, ___y, method)