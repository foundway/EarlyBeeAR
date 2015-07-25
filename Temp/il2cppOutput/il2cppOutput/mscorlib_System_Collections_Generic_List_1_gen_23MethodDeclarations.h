#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t623;
// System.Object
struct Object_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t274;
// System.Collections.Generic.IEnumerable`1<Vuforia.ITrackableEventHandler>
struct IEnumerable_1_t4908;
// System.Collections.Generic.IEnumerator`1<Vuforia.ITrackableEventHandler>
struct IEnumerator_1_t4909;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.ITrackableEventHandler>
struct ICollection_1_t4910;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ITrackableEventHandler>
struct ReadOnlyCollection_1_t3625;
// Vuforia.ITrackableEventHandler[]
struct ITrackableEventHandlerU5BU5D_t3622;
// System.Predicate`1<Vuforia.ITrackableEventHandler>
struct Predicate_1_t3629;
// System.Comparison`1<Vuforia.ITrackableEventHandler>
struct Comparison_1_t3632;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ITrackableEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m4845(__this, method) (( void (*) (List_1_t623 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m20907(__this, ___collection, method) (( void (*) (List_1_t623 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m20908(__this, ___capacity, method) (( void (*) (List_1_t623 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::.cctor()
#define List_1__cctor_m20909(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m20910(__this, method) (( Object_t* (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m20911(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t623 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m20912(__this, method) (( Object_t * (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m20913(__this, ___item, method) (( int32_t (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m20914(__this, ___item, method) (( bool (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m20915(__this, ___item, method) (( int32_t (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m20916(__this, ___index, ___item, method) (( void (*) (List_1_t623 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m20917(__this, ___item, method) (( void (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m20918(__this, method) (( bool (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m20919(__this, method) (( bool (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m20920(__this, method) (( Object_t * (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m20921(__this, method) (( bool (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m20922(__this, method) (( bool (*) (List_1_t623 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m20923(__this, ___index, method) (( Object_t * (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m20924(__this, ___index, ___value, method) (( void (*) (List_1_t623 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Add(T)
#define List_1_Add_m4841(__this, ___item, method) (( void (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m20925(__this, ___newCount, method) (( void (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m20926(__this, ___collection, method) (( void (*) (List_1_t623 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m20927(__this, ___enumerable, method) (( void (*) (List_1_t623 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m20928(__this, ___collection, method) (( void (*) (List_1_t623 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m20929(__this, method) (( ReadOnlyCollection_1_t3625 * (*) (List_1_t623 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Clear()
#define List_1_Clear_m20930(__this, method) (( void (*) (List_1_t623 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Contains(T)
#define List_1_Contains_m20931(__this, ___item, method) (( bool (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m20932(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t623 *, ITrackableEventHandlerU5BU5D_t3622*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m20933(__this, ___match, method) (( Object_t * (*) (List_1_t623 *, Predicate_1_t3629 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m20934(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3629 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m20935(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t623 *, int32_t, int32_t, Predicate_1_t3629 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m4846(__this, method) (( Enumerator_t846  (*) (List_1_t623 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::IndexOf(T)
#define List_1_IndexOf_m20936(__this, ___item, method) (( int32_t (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m20937(__this, ___start, ___delta, method) (( void (*) (List_1_t623 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m20938(__this, ___index, method) (( void (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m20939(__this, ___index, ___item, method) (( void (*) (List_1_t623 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m20940(__this, ___collection, method) (( void (*) (List_1_t623 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Remove(T)
#define List_1_Remove_m4843(__this, ___item, method) (( bool (*) (List_1_t623 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m20941(__this, ___match, method) (( int32_t (*) (List_1_t623 *, Predicate_1_t3629 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m20942(__this, ___index, method) (( void (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Reverse()
#define List_1_Reverse_m20943(__this, method) (( void (*) (List_1_t623 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Sort()
#define List_1_Sort_m20944(__this, method) (( void (*) (List_1_t623 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m20945(__this, ___comparison, method) (( void (*) (List_1_t623 *, Comparison_1_t3632 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::ToArray()
#define List_1_ToArray_m20946(__this, method) (( ITrackableEventHandlerU5BU5D_t3622* (*) (List_1_t623 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::TrimExcess()
#define List_1_TrimExcess_m20947(__this, method) (( void (*) (List_1_t623 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::get_Capacity()
#define List_1_get_Capacity_m20948(__this, method) (( int32_t (*) (List_1_t623 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m20949(__this, ___value, method) (( void (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::get_Count()
#define List_1_get_Count_m20950(__this, method) (( int32_t (*) (List_1_t623 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m20951(__this, ___index, method) (( Object_t * (*) (List_1_t623 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m20952(__this, ___index, ___value, method) (( void (*) (List_1_t623 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
