#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t688;
// System.Object
struct Object_t;
// Vuforia.DataSetImpl
struct DataSetImpl_t638;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSetImpl>
struct IEnumerable_1_t4933;
// System.Collections.Generic.IEnumerator`1<Vuforia.DataSetImpl>
struct IEnumerator_1_t4934;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.DataSetImpl>
struct ICollection_1_t4935;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.DataSetImpl>
struct ReadOnlyCollection_1_t3742;
// Vuforia.DataSetImpl[]
struct DataSetImplU5BU5D_t3738;
// System.Predicate`1<Vuforia.DataSetImpl>
struct Predicate_1_t3746;
// System.Comparison`1<Vuforia.DataSetImpl>
struct Comparison_1_t3749;
// System.Collections.Generic.List`1/Enumerator<Vuforia.DataSetImpl>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m5047(__this, method) (( void (*) (List_1_t688 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m5063(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.ctor(System.Int32)
#define List_1__ctor_m22214(__this, ___capacity, method) (( void (*) (List_1_t688 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::.cctor()
#define List_1__cctor_m22215(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22216(__this, method) (( Object_t* (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m22217(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t688 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m22218(__this, method) (( Object_t * (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m22219(__this, ___item, method) (( int32_t (*) (List_1_t688 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m22220(__this, ___item, method) (( bool (*) (List_1_t688 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m22221(__this, ___item, method) (( int32_t (*) (List_1_t688 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m22222(__this, ___index, ___item, method) (( void (*) (List_1_t688 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m22223(__this, ___item, method) (( void (*) (List_1_t688 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22224(__this, method) (( bool (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m22225(__this, method) (( bool (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m22226(__this, method) (( Object_t * (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m22227(__this, method) (( bool (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m22228(__this, method) (( bool (*) (List_1_t688 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m22229(__this, ___index, method) (( Object_t * (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m22230(__this, ___index, ___value, method) (( void (*) (List_1_t688 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Add(T)
#define List_1_Add_m5060(__this, ___item, method) (( void (*) (List_1_t688 *, DataSetImpl_t638 *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m22231(__this, ___newCount, method) (( void (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m22232(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m22233(__this, ___enumerable, method) (( void (*) (List_1_t688 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m22234(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::AsReadOnly()
#define List_1_AsReadOnly_m22235(__this, method) (( ReadOnlyCollection_1_t3742 * (*) (List_1_t688 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Clear()
#define List_1_Clear_m22236(__this, method) (( void (*) (List_1_t688 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Contains(T)
#define List_1_Contains_m22237(__this, ___item, method) (( bool (*) (List_1_t688 *, DataSetImpl_t638 *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m22238(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t688 *, DataSetImplU5BU5D_t3738*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Find(System.Predicate`1<T>)
#define List_1_Find_m22239(__this, ___match, method) (( DataSetImpl_t638 * (*) (List_1_t688 *, Predicate_1_t3746 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m22240(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3746 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m22241(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t688 *, int32_t, int32_t, Predicate_1_t3746 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.DataSetImpl>::GetEnumerator()
#define List_1_GetEnumerator_m5072(__this, method) (( Enumerator_t862  (*) (List_1_t688 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::IndexOf(T)
#define List_1_IndexOf_m22242(__this, ___item, method) (( int32_t (*) (List_1_t688 *, DataSetImpl_t638 *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m22243(__this, ___start, ___delta, method) (( void (*) (List_1_t688 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m22244(__this, ___index, method) (( void (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Insert(System.Int32,T)
#define List_1_Insert_m22245(__this, ___index, ___item, method) (( void (*) (List_1_t688 *, int32_t, DataSetImpl_t638 *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m22246(__this, ___collection, method) (( void (*) (List_1_t688 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Remove(T)
#define List_1_Remove_m5062(__this, ___item, method) (( bool (*) (List_1_t688 *, DataSetImpl_t638 *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m22247(__this, ___match, method) (( int32_t (*) (List_1_t688 *, Predicate_1_t3746 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m22248(__this, ___index, method) (( void (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Reverse()
#define List_1_Reverse_m22249(__this, method) (( void (*) (List_1_t688 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Sort()
#define List_1_Sort_m22250(__this, method) (( void (*) (List_1_t688 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m22251(__this, ___comparison, method) (( void (*) (List_1_t688 *, Comparison_1_t3749 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.DataSetImpl>::ToArray()
#define List_1_ToArray_m22252(__this, method) (( DataSetImplU5BU5D_t3738* (*) (List_1_t688 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::TrimExcess()
#define List_1_TrimExcess_m22253(__this, method) (( void (*) (List_1_t688 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Capacity()
#define List_1_get_Capacity_m22254(__this, method) (( int32_t (*) (List_1_t688 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m22255(__this, ___value, method) (( void (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Count()
#define List_1_get_Count_m22256(__this, method) (( int32_t (*) (List_1_t688 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.DataSetImpl>::get_Item(System.Int32)
#define List_1_get_Item_m22257(__this, ___index, method) (( DataSetImpl_t638 * (*) (List_1_t688 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.DataSetImpl>::set_Item(System.Int32,T)
#define List_1_set_Item_m22258(__this, ___index, ___value, method) (( void (*) (List_1_t688 *, int32_t, DataSetImpl_t638 *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
