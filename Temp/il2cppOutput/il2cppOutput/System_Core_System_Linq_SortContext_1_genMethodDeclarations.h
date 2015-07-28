#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortContext`1<System.Int32>
struct SortContext_1_t3132;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortContext`1<System.Int32>::.ctor(System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortContext_1__ctor_m15953_gshared (SortContext_1_t3132 * __this, int32_t ___direction, SortContext_1_t3132 * ___child_context, MethodInfo* method);
#define SortContext_1__ctor_m15953(__this, ___direction, ___child_context, method) (( void (*) (SortContext_1_t3132 *, int32_t, SortContext_1_t3132 *, MethodInfo*))SortContext_1__ctor_m15953_gshared)(__this, ___direction, ___child_context, method)
// System.Void System.Linq.SortContext`1<System.Int32>::Initialize(TElement[])
// System.Int32 System.Linq.SortContext`1<System.Int32>::Compare(System.Int32,System.Int32)
