#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<MazeCoord>
struct List_1_t177;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<MazeCoord>
struct IEnumerable_1_t4811;
// System.Collections.Generic.IEnumerator`1<MazeCoord>
struct IEnumerator_1_t4812;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<MazeCoord>
struct ICollection_1_t4813;
// System.Collections.ObjectModel.ReadOnlyCollection`1<MazeCoord>
struct ReadOnlyCollection_1_t3120;
// MazeCoord[]
struct MazeCoordU5BU5D_t3116;
// System.Predicate`1<MazeCoord>
struct Predicate_1_t3124;
// System.Comparison`1<MazeCoord>
struct Comparison_1_t3127;
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"
// System.Collections.Generic.List`1/Enumerator<MazeCoord>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_27.h"

// System.Void System.Collections.Generic.List`1<MazeCoord>::.ctor()
extern "C" void List_1__ctor_m628_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1__ctor_m628(__this, method) (( void (*) (List_1_t177 *, MethodInfo*))List_1__ctor_m628_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15803_gshared (List_1_t177 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m15803(__this, ___collection, method) (( void (*) (List_1_t177 *, Object_t*, MethodInfo*))List_1__ctor_m15803_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15804_gshared (List_1_t177 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m15804(__this, ___capacity, method) (( void (*) (List_1_t177 *, int32_t, MethodInfo*))List_1__ctor_m15804_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::.cctor()
extern "C" void List_1__cctor_m15805_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m15805(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15805_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<MazeCoord>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15806_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15806(__this, method) (( Object_t* (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15806_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15807_gshared (List_1_t177 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15807(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t177 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15807_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<MazeCoord>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15808_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15808(__this, method) (( Object_t * (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15808_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15809_gshared (List_1_t177 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15809(__this, ___item, method) (( int32_t (*) (List_1_t177 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m15809_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15810_gshared (List_1_t177 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15810(__this, ___item, method) (( bool (*) (List_1_t177 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m15810_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15811_gshared (List_1_t177 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15811(__this, ___item, method) (( int32_t (*) (List_1_t177 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m15811_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15812_gshared (List_1_t177 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15812(__this, ___index, ___item, method) (( void (*) (List_1_t177 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m15812_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15813_gshared (List_1_t177 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15813(__this, ___item, method) (( void (*) (List_1_t177 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m15813_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15814_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15814(__this, method) (( bool (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15814_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15815_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15815(__this, method) (( bool (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15815_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MazeCoord>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15816_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15816(__this, method) (( Object_t * (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15816_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15817_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15817(__this, method) (( bool (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15818_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15818(__this, method) (( bool (*) (List_1_t177 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15818_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15819_gshared (List_1_t177 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15819(__this, ___index, method) (( Object_t * (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m15819_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15820_gshared (List_1_t177 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15820(__this, ___index, ___value, method) (( void (*) (List_1_t177 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m15820_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Add(T)
extern "C" void List_1_Add_m629_gshared (List_1_t177 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define List_1_Add_m629(__this, ___item, method) (( void (*) (List_1_t177 *, MazeCoord_t28 , MethodInfo*))List_1_Add_m629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15821_gshared (List_1_t177 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15821(__this, ___newCount, method) (( void (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15821_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15822_gshared (List_1_t177 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15822(__this, ___collection, method) (( void (*) (List_1_t177 *, Object_t*, MethodInfo*))List_1_AddCollection_m15822_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15823_gshared (List_1_t177 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15823(__this, ___enumerable, method) (( void (*) (List_1_t177 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15823_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15824_gshared (List_1_t177 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15824(__this, ___collection, method) (( void (*) (List_1_t177 *, Object_t*, MethodInfo*))List_1_AddRange_m15824_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<MazeCoord>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3120 * List_1_AsReadOnly_m15825_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15825(__this, method) (( ReadOnlyCollection_1_t3120 * (*) (List_1_t177 *, MethodInfo*))List_1_AsReadOnly_m15825_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Clear()
extern "C" void List_1_Clear_m15826_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_Clear_m15826(__this, method) (( void (*) (List_1_t177 *, MethodInfo*))List_1_Clear_m15826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::Contains(T)
extern "C" bool List_1_Contains_m15827_gshared (List_1_t177 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define List_1_Contains_m15827(__this, ___item, method) (( bool (*) (List_1_t177 *, MazeCoord_t28 , MethodInfo*))List_1_Contains_m15827_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15828_gshared (List_1_t177 * __this, MazeCoordU5BU5D_t3116* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m15828(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t177 *, MazeCoordU5BU5D_t3116*, int32_t, MethodInfo*))List_1_CopyTo_m15828_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<MazeCoord>::Find(System.Predicate`1<T>)
extern "C" MazeCoord_t28  List_1_Find_m15829_gshared (List_1_t177 * __this, Predicate_1_t3124 * ___match, MethodInfo* method);
#define List_1_Find_m15829(__this, ___match, method) (( MazeCoord_t28  (*) (List_1_t177 *, Predicate_1_t3124 *, MethodInfo*))List_1_Find_m15829_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15830_gshared (Object_t * __this /* static, unused */, Predicate_1_t3124 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15830(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3124 *, MethodInfo*))List_1_CheckMatch_m15830_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15831_gshared (List_1_t177 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3124 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15831(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t177 *, int32_t, int32_t, Predicate_1_t3124 *, MethodInfo*))List_1_GetIndex_m15831_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<MazeCoord>::GetEnumerator()
extern "C" Enumerator_t3118  List_1_GetEnumerator_m15832_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m15832(__this, method) (( Enumerator_t3118  (*) (List_1_t177 *, MethodInfo*))List_1_GetEnumerator_m15832_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15833_gshared (List_1_t177 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define List_1_IndexOf_m15833(__this, ___item, method) (( int32_t (*) (List_1_t177 *, MazeCoord_t28 , MethodInfo*))List_1_IndexOf_m15833_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15834_gshared (List_1_t177 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15834(__this, ___start, ___delta, method) (( void (*) (List_1_t177 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15834_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15835_gshared (List_1_t177 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15835(__this, ___index, method) (( void (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_CheckIndex_m15835_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15836_gshared (List_1_t177 * __this, int32_t ___index, MazeCoord_t28  ___item, MethodInfo* method);
#define List_1_Insert_m15836(__this, ___index, ___item, method) (( void (*) (List_1_t177 *, int32_t, MazeCoord_t28 , MethodInfo*))List_1_Insert_m15836_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15837_gshared (List_1_t177 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15837(__this, ___collection, method) (( void (*) (List_1_t177 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15837_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<MazeCoord>::Remove(T)
extern "C" bool List_1_Remove_m632_gshared (List_1_t177 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define List_1_Remove_m632(__this, ___item, method) (( bool (*) (List_1_t177 *, MazeCoord_t28 , MethodInfo*))List_1_Remove_m632_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15838_gshared (List_1_t177 * __this, Predicate_1_t3124 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15838(__this, ___match, method) (( int32_t (*) (List_1_t177 *, Predicate_1_t3124 *, MethodInfo*))List_1_RemoveAll_m15838_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15839_gshared (List_1_t177 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m15839(__this, ___index, method) (( void (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_RemoveAt_m15839_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Reverse()
extern "C" void List_1_Reverse_m15840_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_Reverse_m15840(__this, method) (( void (*) (List_1_t177 *, MethodInfo*))List_1_Reverse_m15840_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Sort()
extern "C" void List_1_Sort_m15841_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_Sort_m15841(__this, method) (( void (*) (List_1_t177 *, MethodInfo*))List_1_Sort_m15841_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15842_gshared (List_1_t177 * __this, Comparison_1_t3127 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15842(__this, ___comparison, method) (( void (*) (List_1_t177 *, Comparison_1_t3127 *, MethodInfo*))List_1_Sort_m15842_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<MazeCoord>::ToArray()
extern "C" MazeCoordU5BU5D_t3116* List_1_ToArray_m15843_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_ToArray_m15843(__this, method) (( MazeCoordU5BU5D_t3116* (*) (List_1_t177 *, MethodInfo*))List_1_ToArray_m15843_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::TrimExcess()
extern "C" void List_1_TrimExcess_m15844_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15844(__this, method) (( void (*) (List_1_t177 *, MethodInfo*))List_1_TrimExcess_m15844_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15845_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_get_Capacity_m15845(__this, method) (( int32_t (*) (List_1_t177 *, MethodInfo*))List_1_get_Capacity_m15845_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15846_gshared (List_1_t177 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m15846(__this, ___value, method) (( void (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_set_Capacity_m15846_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<MazeCoord>::get_Count()
extern "C" int32_t List_1_get_Count_m630_gshared (List_1_t177 * __this, MethodInfo* method);
#define List_1_get_Count_m630(__this, method) (( int32_t (*) (List_1_t177 *, MethodInfo*))List_1_get_Count_m630_gshared)(__this, method)
// T System.Collections.Generic.List`1<MazeCoord>::get_Item(System.Int32)
extern "C" MazeCoord_t28  List_1_get_Item_m631_gshared (List_1_t177 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m631(__this, ___index, method) (( MazeCoord_t28  (*) (List_1_t177 *, int32_t, MethodInfo*))List_1_get_Item_m631_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<MazeCoord>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15847_gshared (List_1_t177 * __this, int32_t ___index, MazeCoord_t28  ___value, MethodInfo* method);
#define List_1_set_Item_m15847(__this, ___index, ___value, method) (( void (*) (List_1_t177 *, int32_t, MazeCoord_t28 , MethodInfo*))List_1_set_Item_m15847_gshared)(__this, ___index, ___value, method)
