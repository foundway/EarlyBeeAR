﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t768;
// System.Object
struct Object_t;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t132;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t763;
// System.Collections.Generic.IEnumerator`1<Vuforia.WordAbstractBehaviour>
struct IEnumerator_1_t895;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.WordAbstractBehaviour>
struct ICollection_1_t4958;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.WordAbstractBehaviour>
struct ReadOnlyCollection_1_t3892;
// Vuforia.WordAbstractBehaviour[]
struct WordAbstractBehaviourU5BU5D_t882;
// System.Predicate`1<Vuforia.WordAbstractBehaviour>
struct Predicate_1_t3894;
// System.Comparison`1<Vuforia.WordAbstractBehaviour>
struct Comparison_1_t3897;
// System.Collections.Generic.List`1/Enumerator<Vuforia.WordAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"

// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m5210(__this, method) (( void (*) (List_1_t768 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m23965(__this, ___collection, method) (( void (*) (List_1_t768 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.ctor(System.Int32)
#define List_1__ctor_m23966(__this, ___capacity, method) (( void (*) (List_1_t768 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::.cctor()
#define List_1__cctor_m23967(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23968(__this, method) (( Object_t* (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m23969(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t768 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m23970(__this, method) (( Object_t * (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m23971(__this, ___item, method) (( int32_t (*) (List_1_t768 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m23972(__this, ___item, method) (( bool (*) (List_1_t768 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m23973(__this, ___item, method) (( int32_t (*) (List_1_t768 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m23974(__this, ___index, ___item, method) (( void (*) (List_1_t768 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m23975(__this, ___item, method) (( void (*) (List_1_t768 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m23976(__this, method) (( bool (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m23977(__this, method) (( bool (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m23978(__this, method) (( Object_t * (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m23979(__this, method) (( bool (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m23980(__this, method) (( bool (*) (List_1_t768 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m23981(__this, ___index, method) (( Object_t * (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m23982(__this, ___index, ___value, method) (( void (*) (List_1_t768 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Add(T)
#define List_1_Add_m5216(__this, ___item, method) (( void (*) (List_1_t768 *, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m23983(__this, ___newCount, method) (( void (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m23984(__this, ___collection, method) (( void (*) (List_1_t768 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m23985(__this, ___enumerable, method) (( void (*) (List_1_t768 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m5271(__this, ___collection, method) (( void (*) (List_1_t768 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::AsReadOnly()
#define List_1_AsReadOnly_m23986(__this, method) (( ReadOnlyCollection_1_t3892 * (*) (List_1_t768 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Clear()
#define List_1_Clear_m5223(__this, method) (( void (*) (List_1_t768 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Contains(T)
#define List_1_Contains_m5212(__this, ___item, method) (( bool (*) (List_1_t768 *, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m23987(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t768 *, WordAbstractBehaviourU5BU5D_t882*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Find(System.Predicate`1<T>)
#define List_1_Find_m23988(__this, ___match, method) (( WordAbstractBehaviour_t132 * (*) (List_1_t768 *, Predicate_1_t3894 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m23989(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3894 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m23990(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t768 *, int32_t, int32_t, Predicate_1_t3894 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::GetEnumerator()
#define List_1_GetEnumerator_m5274(__this, method) (( Enumerator_t881  (*) (List_1_t768 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::IndexOf(T)
#define List_1_IndexOf_m23991(__this, ___item, method) (( int32_t (*) (List_1_t768 *, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m23992(__this, ___start, ___delta, method) (( void (*) (List_1_t768 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m23993(__this, ___index, method) (( void (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Insert(System.Int32,T)
#define List_1_Insert_m23994(__this, ___index, ___item, method) (( void (*) (List_1_t768 *, int32_t, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m23995(__this, ___collection, method) (( void (*) (List_1_t768 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Remove(T)
#define List_1_Remove_m5213(__this, ___item, method) (( bool (*) (List_1_t768 *, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m23996(__this, ___match, method) (( int32_t (*) (List_1_t768 *, Predicate_1_t3894 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m5225(__this, ___index, method) (( void (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Reverse()
#define List_1_Reverse_m23997(__this, method) (( void (*) (List_1_t768 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Sort()
#define List_1_Sort_m23998(__this, method) (( void (*) (List_1_t768 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m23999(__this, ___comparison, method) (( void (*) (List_1_t768 *, Comparison_1_t3897 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::ToArray()
#define List_1_ToArray_m24000(__this, method) (( WordAbstractBehaviourU5BU5D_t882* (*) (List_1_t768 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::TrimExcess()
#define List_1_TrimExcess_m24001(__this, method) (( void (*) (List_1_t768 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Capacity()
#define List_1_get_Capacity_m24002(__this, method) (( int32_t (*) (List_1_t768 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m24003(__this, ___value, method) (( void (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Count()
#define List_1_get_Count_m5214(__this, method) (( int32_t (*) (List_1_t768 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::get_Item(System.Int32)
#define List_1_get_Item_m5224(__this, ___index, method) (( WordAbstractBehaviour_t132 * (*) (List_1_t768 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>::set_Item(System.Int32,T)
#define List_1_set_Item_m24004(__this, ___index, ___value, method) (( void (*) (List_1_t768 *, int32_t, WordAbstractBehaviour_t132 *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
