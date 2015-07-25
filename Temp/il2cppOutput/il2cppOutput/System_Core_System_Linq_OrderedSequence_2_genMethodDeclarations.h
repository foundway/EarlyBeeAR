#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<System.Int32,System.Single>
struct OrderedSequence_2_t3130;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3131;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t32;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t3129;
// System.Linq.SortContext`1<System.Int32>
struct SortContext_1_t3132;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m15947_gshared (OrderedSequence_2_t3130 * __this, Object_t* ___source, Func_2_t32 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method);
#define OrderedSequence_2__ctor_m15947(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t3130 *, Object_t*, Func_2_t32 *, Object_t*, int32_t, MethodInfo*))OrderedSequence_2__ctor_m15947_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Int32,System.Single>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t3132 * OrderedSequence_2_CreateContext_m15948_gshared (OrderedSequence_2_t3130 * __this, SortContext_1_t3132 * ___current, MethodInfo* method);
#define OrderedSequence_2_CreateContext_m15948(__this, ___current, method) (( SortContext_1_t3132 * (*) (OrderedSequence_2_t3130 *, SortContext_1_t3132 *, MethodInfo*))OrderedSequence_2_CreateContext_m15948_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Int32,System.Single>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m15949_gshared (OrderedSequence_2_t3130 * __this, Object_t* ___source, MethodInfo* method);
#define OrderedSequence_2_Sort_m15949(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t3130 *, Object_t*, MethodInfo*))OrderedSequence_2_Sort_m15949_gshared)(__this, ___source, method)
