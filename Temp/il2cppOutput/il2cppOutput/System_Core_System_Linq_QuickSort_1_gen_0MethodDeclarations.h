#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t4664;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1353;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t4662;
// System.Int32[]
struct Int32U5BU5D_t34;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m31892_gshared (QuickSort_1_t4664 * __this, Object_t* ___source, SortContext_1_t4662 * ___context, MethodInfo* method);
#define QuickSort_1__ctor_m31892(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t4664 *, Object_t*, SortContext_1_t4662 *, MethodInfo*))QuickSort_1__ctor_m31892_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t34* QuickSort_1_CreateIndexes_m31893_gshared (Object_t * __this /* static, unused */, int32_t ___length, MethodInfo* method);
#define QuickSort_1_CreateIndexes_m31893(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t34* (*) (Object_t * /* static, unused */, int32_t, MethodInfo*))QuickSort_1_CreateIndexes_m31893_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m31894_gshared (QuickSort_1_t4664 * __this, MethodInfo* method);
#define QuickSort_1_PerformSort_m31894(__this, method) (( void (*) (QuickSort_1_t4664 *, MethodInfo*))QuickSort_1_PerformSort_m31894_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m31895_gshared (QuickSort_1_t4664 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define QuickSort_1_CompareItems_m31895(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))QuickSort_1_CompareItems_m31895_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m31896_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_MedianOfThree_m31896(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))QuickSort_1_MedianOfThree_m31896_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m31897_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Sort_m31897(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))QuickSort_1_Sort_m31897_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m31898_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_InsertionSort_m31898(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))QuickSort_1_InsertionSort_m31898_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m31899_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Swap_m31899(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))QuickSort_1_Swap_m31899_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m31900_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t4662 * ___context, MethodInfo* method);
#define QuickSort_1_Sort_m31900(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t4662 *, MethodInfo*))QuickSort_1_Sort_m31900_gshared)(__this /* static, unused */, ___source, ___context, method)
