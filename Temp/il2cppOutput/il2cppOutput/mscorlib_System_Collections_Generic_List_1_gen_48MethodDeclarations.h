#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>
struct List_1_t837;
// System.Object
struct Object_t;
// Vuforia.IUserDefinedTargetEventHandler
struct IUserDefinedTargetEventHandler_t838;
// System.Collections.Generic.IEnumerable`1<Vuforia.IUserDefinedTargetEventHandler>
struct IEnumerable_1_t5032;
// System.Collections.Generic.IEnumerator`1<Vuforia.IUserDefinedTargetEventHandler>
struct IEnumerator_1_t5033;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.IUserDefinedTargetEventHandler>
struct ICollection_1_t5034;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.IUserDefinedTargetEventHandler>
struct ReadOnlyCollection_1_t4196;
// Vuforia.IUserDefinedTargetEventHandler[]
struct IUserDefinedTargetEventHandlerU5BU5D_t4193;
// System.Predicate`1<Vuforia.IUserDefinedTargetEventHandler>
struct Predicate_1_t4200;
// System.Comparison`1<Vuforia.IUserDefinedTargetEventHandler>
struct Comparison_1_t4203;
// System.Collections.Generic.List`1/Enumerator<Vuforia.IUserDefinedTargetEventHandler>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m5683(__this, method) (( void (*) (List_1_t837 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m27355(__this, ___collection, method) (( void (*) (List_1_t837 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.ctor(System.Int32)
#define List_1__ctor_m27356(__this, ___capacity, method) (( void (*) (List_1_t837 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::.cctor()
#define List_1__cctor_m27357(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27358(__this, method) (( Object_t* (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m27359(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t837 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m27360(__this, method) (( Object_t * (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m27361(__this, ___item, method) (( int32_t (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m27362(__this, ___item, method) (( bool (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m27363(__this, ___item, method) (( int32_t (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m27364(__this, ___index, ___item, method) (( void (*) (List_1_t837 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m27365(__this, ___item, method) (( void (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27366(__this, method) (( bool (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m27367(__this, method) (( bool (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m27368(__this, method) (( Object_t * (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m27369(__this, method) (( bool (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m27370(__this, method) (( bool (*) (List_1_t837 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m27371(__this, ___index, method) (( Object_t * (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m27372(__this, ___index, ___value, method) (( void (*) (List_1_t837 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Add(T)
#define List_1_Add_m5672(__this, ___item, method) (( void (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m27373(__this, ___newCount, method) (( void (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m27374(__this, ___collection, method) (( void (*) (List_1_t837 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m27375(__this, ___enumerable, method) (( void (*) (List_1_t837 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m27376(__this, ___collection, method) (( void (*) (List_1_t837 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::AsReadOnly()
#define List_1_AsReadOnly_m27377(__this, method) (( ReadOnlyCollection_1_t4196 * (*) (List_1_t837 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Clear()
#define List_1_Clear_m27378(__this, method) (( void (*) (List_1_t837 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Contains(T)
#define List_1_Contains_m27379(__this, ___item, method) (( bool (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m27380(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t837 *, IUserDefinedTargetEventHandlerU5BU5D_t4193*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Find(System.Predicate`1<T>)
#define List_1_Find_m27381(__this, ___match, method) (( Object_t * (*) (List_1_t837 *, Predicate_1_t4200 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m27382(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4200 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m27383(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t837 *, int32_t, int32_t, Predicate_1_t4200 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::GetEnumerator()
#define List_1_GetEnumerator_m5684(__this, method) (( Enumerator_t944  (*) (List_1_t837 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::IndexOf(T)
#define List_1_IndexOf_m27384(__this, ___item, method) (( int32_t (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m27385(__this, ___start, ___delta, method) (( void (*) (List_1_t837 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m27386(__this, ___index, method) (( void (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Insert(System.Int32,T)
#define List_1_Insert_m27387(__this, ___index, ___item, method) (( void (*) (List_1_t837 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m27388(__this, ___collection, method) (( void (*) (List_1_t837 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Remove(T)
#define List_1_Remove_m5674(__this, ___item, method) (( bool (*) (List_1_t837 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m27389(__this, ___match, method) (( int32_t (*) (List_1_t837 *, Predicate_1_t4200 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m27390(__this, ___index, method) (( void (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Reverse()
#define List_1_Reverse_m27391(__this, method) (( void (*) (List_1_t837 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Sort()
#define List_1_Sort_m27392(__this, method) (( void (*) (List_1_t837 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m27393(__this, ___comparison, method) (( void (*) (List_1_t837 *, Comparison_1_t4203 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::ToArray()
#define List_1_ToArray_m27394(__this, method) (( IUserDefinedTargetEventHandlerU5BU5D_t4193* (*) (List_1_t837 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::TrimExcess()
#define List_1_TrimExcess_m27395(__this, method) (( void (*) (List_1_t837 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Capacity()
#define List_1_get_Capacity_m27396(__this, method) (( int32_t (*) (List_1_t837 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m27397(__this, ___value, method) (( void (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Count()
#define List_1_get_Count_m27398(__this, method) (( int32_t (*) (List_1_t837 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::get_Item(System.Int32)
#define List_1_get_Item_m27399(__this, ___index, method) (( Object_t * (*) (List_1_t837 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.IUserDefinedTargetEventHandler>::set_Item(System.Int32,T)
#define List_1_set_Item_m27400(__this, ___index, ___value, method) (( void (*) (List_1_t837 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
