#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t4663;
// System.Func`2<System.Object,System.Object>
struct Func_2_t212;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4660;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4662;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m31889_gshared (SortSequenceContext_2_t4663 * __this, Func_2_t212 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4662 * ___child_context, MethodInfo* method);
#define SortSequenceContext_2__ctor_m31889(__this, ___selector, ___comparer, ___direction, ___child_context, method) (( void (*) (SortSequenceContext_2_t4663 *, Func_2_t212 *, Object_t*, int32_t, SortContext_1_t4662 *, MethodInfo*))SortSequenceContext_2__ctor_m31889_gshared)(__this, ___selector, ___comparer, ___direction, ___child_context, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C" void SortSequenceContext_2_Initialize_m31890_gshared (SortSequenceContext_2_t4663 * __this, ObjectU5BU5D_t178* ___elements, MethodInfo* method);
#define SortSequenceContext_2_Initialize_m31890(__this, ___elements, method) (( void (*) (SortSequenceContext_2_t4663 *, ObjectU5BU5D_t178*, MethodInfo*))SortSequenceContext_2_Initialize_m31890_gshared)(__this, ___elements, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C" int32_t SortSequenceContext_2_Compare_m31891_gshared (SortSequenceContext_2_t4663 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define SortSequenceContext_2_Compare_m31891(__this, ___first_index, ___second_index, method) (( int32_t (*) (SortSequenceContext_2_t4663 *, int32_t, int32_t, MethodInfo*))SortSequenceContext_2_Compare_m31891_gshared)(__this, ___first_index, ___second_index, method)
