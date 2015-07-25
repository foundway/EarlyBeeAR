#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Int32>
struct QuickSort_1_t3136;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t3131;
// System.Linq.SortContext`1<System.Int32>
struct SortContext_1_t3132;
// System.Int32[]
struct Int32U5BU5D_t34;

// System.Void System.Linq.QuickSort`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m15963_gshared (QuickSort_1_t3136 * __this, Object_t* ___source, SortContext_1_t3132 * ___context, MethodInfo* method);
#define QuickSort_1__ctor_m15963(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t3136 *, Object_t*, SortContext_1_t3132 *, MethodInfo*))QuickSort_1__ctor_m15963_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Int32>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t34* QuickSort_1_CreateIndexes_m15964_gshared (Object_t * __this /* static, unused */, int32_t ___length, MethodInfo* method);
#define QuickSort_1_CreateIndexes_m15964(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t34* (*) (Object_t * /* static, unused */, int32_t, MethodInfo*))QuickSort_1_CreateIndexes_m15964_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Int32>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m15965_gshared (QuickSort_1_t3136 * __this, MethodInfo* method);
#define QuickSort_1_PerformSort_m15965(__this, method) (( void (*) (QuickSort_1_t3136 *, MethodInfo*))QuickSort_1_PerformSort_m15965_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Int32>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m15966_gshared (QuickSort_1_t3136 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define QuickSort_1_CompareItems_m15966(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t3136 *, int32_t, int32_t, MethodInfo*))QuickSort_1_CompareItems_m15966_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Int32>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m15967_gshared (QuickSort_1_t3136 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_MedianOfThree_m15967(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t3136 *, int32_t, int32_t, MethodInfo*))QuickSort_1_MedianOfThree_m15967_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Int32>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m15968_gshared (QuickSort_1_t3136 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Sort_m15968(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t3136 *, int32_t, int32_t, MethodInfo*))QuickSort_1_Sort_m15968_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Int32>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m15969_gshared (QuickSort_1_t3136 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_InsertionSort_m15969(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t3136 *, int32_t, int32_t, MethodInfo*))QuickSort_1_InsertionSort_m15969_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Int32>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m15970_gshared (QuickSort_1_t3136 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Swap_m15970(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t3136 *, int32_t, int32_t, MethodInfo*))QuickSort_1_Swap_m15970_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Int32>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m15971_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t3132 * ___context, MethodInfo* method);
#define QuickSort_1_Sort_m15971(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t3132 *, MethodInfo*))QuickSort_1_Sort_m15971_gshared)(__this /* static, unused */, ___source, ___context, method)
