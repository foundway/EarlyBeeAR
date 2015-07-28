#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t826;
// System.Object
struct Object_t;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t831;
// System.Collections.Generic.IEnumerable`1<Vuforia.ITrackerEventHandler>
struct IEnumerable_1_t5023;
// System.Collections.Generic.IEnumerator`1<Vuforia.ITrackerEventHandler>
struct IEnumerator_1_t5024;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.ITrackerEventHandler>
struct ICollection_1_t5025;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackerEventHandler>
struct ReadOnlyCollection_1_t4160;
// Vuforia.ITrackerEventHandler[]
struct ITrackerEventHandlerU5BU5D_t4157;
// System.Predicate`1<Vuforia.ITrackerEventHandler>
struct Predicate_1_t4164;
// System.Comparison`1<Vuforia.ITrackerEventHandler>
struct Comparison_1_t4167;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackerEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m5629(__this, method) (( void (*) (List_1_t826 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26921(__this, ___collection, method) (( void (*) (List_1_t826 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m26922(__this, ___capacity, method) (( void (*) (List_1_t826 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::.cctor()
#define List_1__cctor_m26923(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26924(__this, method) (( Object_t* (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26925(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t826 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26926(__this, method) (( Object_t * (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26927(__this, ___item, method) (( int32_t (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26928(__this, ___item, method) (( bool (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26929(__this, ___item, method) (( int32_t (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26930(__this, ___index, ___item, method) (( void (*) (List_1_t826 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26931(__this, ___item, method) (( void (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26932(__this, method) (( bool (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26933(__this, method) (( bool (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26934(__this, method) (( Object_t * (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26935(__this, method) (( bool (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26936(__this, method) (( bool (*) (List_1_t826 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26937(__this, ___index, method) (( Object_t * (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26938(__this, ___index, ___value, method) (( void (*) (List_1_t826 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Add(T)
#define List_1_Add_m5588(__this, ___item, method) (( void (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26939(__this, ___newCount, method) (( void (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26940(__this, ___collection, method) (( void (*) (List_1_t826 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26941(__this, ___enumerable, method) (( void (*) (List_1_t826 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26942(__this, ___collection, method) (( void (*) (List_1_t826 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m26943(__this, method) (( ReadOnlyCollection_1_t4160 * (*) (List_1_t826 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Clear()
#define List_1_Clear_m26944(__this, method) (( void (*) (List_1_t826 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Contains(T)
#define List_1_Contains_m26945(__this, ___item, method) (( bool (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26946(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t826 *, ITrackerEventHandlerU5BU5D_t4157*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m26947(__this, ___match, method) (( Object_t * (*) (List_1_t826 *, Predicate_1_t4164 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26948(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4164 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26949(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t826 *, int32_t, int32_t, Predicate_1_t4164 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m5639(__this, method) (( Enumerator_t937  (*) (List_1_t826 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::IndexOf(T)
#define List_1_IndexOf_m26950(__this, ___item, method) (( int32_t (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26951(__this, ___start, ___delta, method) (( void (*) (List_1_t826 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26952(__this, ___index, method) (( void (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m26953(__this, ___index, ___item, method) (( void (*) (List_1_t826 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26954(__this, ___collection, method) (( void (*) (List_1_t826 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Remove(T)
#define List_1_Remove_m5590(__this, ___item, method) (( bool (*) (List_1_t826 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26955(__this, ___match, method) (( int32_t (*) (List_1_t826 *, Predicate_1_t4164 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26956(__this, ___index, method) (( void (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Reverse()
#define List_1_Reverse_m26957(__this, method) (( void (*) (List_1_t826 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort()
#define List_1_Sort_m26958(__this, method) (( void (*) (List_1_t826 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26959(__this, ___comparison, method) (( void (*) (List_1_t826 *, Comparison_1_t4167 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::ToArray()
#define List_1_ToArray_m26960(__this, method) (( ITrackerEventHandlerU5BU5D_t4157* (*) (List_1_t826 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::TrimExcess()
#define List_1_TrimExcess_m26961(__this, method) (( void (*) (List_1_t826 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Capacity()
#define List_1_get_Capacity_m26962(__this, method) (( int32_t (*) (List_1_t826 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26963(__this, ___value, method) (( void (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Count()
#define List_1_get_Count_m26964(__this, method) (( int32_t (*) (List_1_t826 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m26965(__this, ___index, method) (( Object_t * (*) (List_1_t826 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m26966(__this, ___index, ___value, method) (( void (*) (List_1_t826 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
