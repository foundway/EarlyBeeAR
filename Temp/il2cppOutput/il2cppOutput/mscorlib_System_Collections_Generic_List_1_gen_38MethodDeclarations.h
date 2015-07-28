#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t799;
// System.Object
struct Object_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t116;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t796;
// System.Collections.Generic.IEnumerator`1<Vuforia.TrackableBehaviour>
struct IEnumerator_1_t938;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>
struct ICollection_1_t4970;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TrackableBehaviour>
struct ReadOnlyCollection_1_t3926;
// Vuforia.TrackableBehaviour[]
struct TrackableBehaviourU5BU5D_t871;
// System.Predicate`1<Vuforia.TrackableBehaviour>
struct Predicate_1_t3930;
// System.Comparison`1<Vuforia.TrackableBehaviour>
struct Comparison_1_t3933;
// System.Collections.Generic.List`1/Enumerator<Vuforia.TrackableBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_51.h"

// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m5319(__this, method) (( void (*) (List_1_t799 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m24371(__this, ___collection, method) (( void (*) (List_1_t799 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m24372(__this, ___capacity, method) (( void (*) (List_1_t799 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::.cctor()
#define List_1__cctor_m24373(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24374(__this, method) (( Object_t* (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m24375(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t799 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24376(__this, method) (( Object_t * (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m24377(__this, ___item, method) (( int32_t (*) (List_1_t799 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m24378(__this, ___item, method) (( bool (*) (List_1_t799 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m24379(__this, ___item, method) (( int32_t (*) (List_1_t799 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m24380(__this, ___index, ___item, method) (( void (*) (List_1_t799 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m24381(__this, ___item, method) (( void (*) (List_1_t799 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24382(__this, method) (( bool (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m24383(__this, method) (( bool (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m24384(__this, method) (( Object_t * (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m24385(__this, method) (( bool (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m24386(__this, method) (( bool (*) (List_1_t799 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m24387(__this, ___index, method) (( Object_t * (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m24388(__this, ___index, ___value, method) (( void (*) (List_1_t799 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Add(T)
#define List_1_Add_m5318(__this, ___item, method) (( void (*) (List_1_t799 *, TrackableBehaviour_t116 *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m24389(__this, ___newCount, method) (( void (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m24390(__this, ___collection, method) (( void (*) (List_1_t799 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m24391(__this, ___enumerable, method) (( void (*) (List_1_t799 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m24392(__this, ___collection, method) (( void (*) (List_1_t799 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m24393(__this, method) (( ReadOnlyCollection_1_t3926 * (*) (List_1_t799 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Clear()
#define List_1_Clear_m5452(__this, method) (( void (*) (List_1_t799 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Contains(T)
#define List_1_Contains_m5437(__this, ___item, method) (( bool (*) (List_1_t799 *, TrackableBehaviour_t116 *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m24394(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t799 *, TrackableBehaviourU5BU5D_t871*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m24395(__this, ___match, method) (( TrackableBehaviour_t116 * (*) (List_1_t799 *, Predicate_1_t3930 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m24396(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3930 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m24397(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t799 *, int32_t, int32_t, Predicate_1_t3930 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m24398(__this, method) (( Enumerator_t3924  (*) (List_1_t799 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::IndexOf(T)
#define List_1_IndexOf_m24399(__this, ___item, method) (( int32_t (*) (List_1_t799 *, TrackableBehaviour_t116 *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m24400(__this, ___start, ___delta, method) (( void (*) (List_1_t799 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m24401(__this, ___index, method) (( void (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m24402(__this, ___index, ___item, method) (( void (*) (List_1_t799 *, int32_t, TrackableBehaviour_t116 *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m24403(__this, ___collection, method) (( void (*) (List_1_t799 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Remove(T)
#define List_1_Remove_m5438(__this, ___item, method) (( bool (*) (List_1_t799 *, TrackableBehaviour_t116 *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m24404(__this, ___match, method) (( int32_t (*) (List_1_t799 *, Predicate_1_t3930 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m24405(__this, ___index, method) (( void (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Reverse()
#define List_1_Reverse_m24406(__this, method) (( void (*) (List_1_t799 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Sort()
#define List_1_Sort_m24407(__this, method) (( void (*) (List_1_t799 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m24408(__this, ___comparison, method) (( void (*) (List_1_t799 *, Comparison_1_t3933 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::ToArray()
#define List_1_ToArray_m24409(__this, method) (( TrackableBehaviourU5BU5D_t871* (*) (List_1_t799 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::TrimExcess()
#define List_1_TrimExcess_m24410(__this, method) (( void (*) (List_1_t799 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Capacity()
#define List_1_get_Capacity_m24411(__this, method) (( int32_t (*) (List_1_t799 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24412(__this, ___value, method) (( void (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Count()
#define List_1_get_Count_m24413(__this, method) (( int32_t (*) (List_1_t799 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m24414(__this, ___index, method) (( TrackableBehaviour_t116 * (*) (List_1_t799 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m24415(__this, ___index, ___value, method) (( void (*) (List_1_t799 *, int32_t, TrackableBehaviour_t116 *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
