#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Int32,System.Single>
struct SortSequenceContext_2_t3135;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t32;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t3129;
// System.Linq.SortContext`1<System.Int32>
struct SortContext_1_t3132;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Int32,System.Single>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m15960_gshared (SortSequenceContext_2_t3135 * __this, Func_2_t32 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t3132 * ___child_context, MethodInfo* method);
#define SortSequenceContext_2__ctor_m15960(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t3135 *, Func_2_t32 *, Object_t*, int32_t, SortContext_1_t3132 *, MethodInfo*))SortSequenceContext_2__ctor_m15960_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Int32,System.Single>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m15961_gshared (SortSequenceContext_2_t3135 * __this, Int32U5BU5D_t34* ___elements, MethodInfo* method);
#define SortSequenceContext_2_Initialize_m15961(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t3135 *, Int32U5BU5D_t34*, MethodInfo*))SortSequenceContext_2_Initialize_m15961_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Int32,System.Single>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m15962_gshared (SortSequenceContext_2_t3135 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define SortSequenceContext_2_Compare_m15962(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t3135 *, int32_t, int32_t, MethodInfo*))SortSequenceContext_2_Compare_m15962_gshared)(__this, ___first_index, ___second_index, method)
