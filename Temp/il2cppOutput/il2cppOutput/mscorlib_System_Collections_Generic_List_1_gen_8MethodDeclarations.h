#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t228;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t4832;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t4833;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
struct ICollection_1_t4834;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MethodInfo>
struct ReadOnlyCollection_1_t3263;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t222;
// System.Predicate`1<System.Reflection.MethodInfo>
struct Predicate_1_t3267;
// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t3270;
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m17209(__this, method) (( void (*) (List_1_t228 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17210(__this, ___collection, method) (( void (*) (List_1_t228 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.ctor(System.Int32)
#define List_1__ctor_m17211(__this, ___capacity, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::.cctor()
#define List_1__cctor_m17212(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17213(__this, method) (( Object_t* (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17214(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t228 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17215(__this, method) (( Object_t * (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17216(__this, ___item, method) (( int32_t (*) (List_1_t228 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17217(__this, ___item, method) (( bool (*) (List_1_t228 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17218(__this, ___item, method) (( int32_t (*) (List_1_t228 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17219(__this, ___index, ___item, method) (( void (*) (List_1_t228 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17220(__this, ___item, method) (( void (*) (List_1_t228 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17221(__this, method) (( bool (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17222(__this, method) (( bool (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17223(__this, method) (( Object_t * (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17224(__this, method) (( bool (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17225(__this, method) (( bool (*) (List_1_t228 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17226(__this, ___index, method) (( Object_t * (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17227(__this, ___index, ___value, method) (( void (*) (List_1_t228 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Add(T)
#define List_1_Add_m17228(__this, ___item, method) (( void (*) (List_1_t228 *, MethodInfo_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17229(__this, ___newCount, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17230(__this, ___collection, method) (( void (*) (List_1_t228 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17231(__this, ___enumerable, method) (( void (*) (List_1_t228 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m982(__this, ___collection, method) (( void (*) (List_1_t228 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::AsReadOnly()
#define List_1_AsReadOnly_m17232(__this, method) (( ReadOnlyCollection_1_t3263 * (*) (List_1_t228 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Clear()
#define List_1_Clear_m17233(__this, method) (( void (*) (List_1_t228 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Contains(T)
#define List_1_Contains_m17234(__this, ___item, method) (( bool (*) (List_1_t228 *, MethodInfo_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17235(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t228 *, MethodInfoU5BU5D_t222*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Find(System.Predicate`1<T>)
#define List_1_Find_m17236(__this, ___match, method) (( MethodInfo_t * (*) (List_1_t228 *, Predicate_1_t3267 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17237(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3267 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17238(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t228 *, int32_t, int32_t, Predicate_1_t3267 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Reflection.MethodInfo>::GetEnumerator()
#define List_1_GetEnumerator_m983(__this, method) (( Enumerator_t224  (*) (List_1_t228 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::IndexOf(T)
#define List_1_IndexOf_m17239(__this, ___item, method) (( int32_t (*) (List_1_t228 *, MethodInfo_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17240(__this, ___start, ___delta, method) (( void (*) (List_1_t228 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17241(__this, ___index, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
#define List_1_Insert_m17242(__this, ___index, ___item, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17243(__this, ___collection, method) (( void (*) (List_1_t228 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Remove(T)
#define List_1_Remove_m17244(__this, ___item, method) (( bool (*) (List_1_t228 *, MethodInfo_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m17245(__this, ___match, method) (( int32_t (*) (List_1_t228 *, Predicate_1_t3267 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17246(__this, ___index, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Reverse()
#define List_1_Reverse_m17247(__this, method) (( void (*) (List_1_t228 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort()
#define List_1_Sort_m17248(__this, method) (( void (*) (List_1_t228 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17249(__this, ___comparison, method) (( void (*) (List_1_t228 *, Comparison_1_t3270 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Reflection.MethodInfo>::ToArray()
#define List_1_ToArray_m17250(__this, method) (( MethodInfoU5BU5D_t222* (*) (List_1_t228 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::TrimExcess()
#define List_1_TrimExcess_m17251(__this, method) (( void (*) (List_1_t228 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Capacity()
#define List_1_get_Capacity_m17252(__this, method) (( int32_t (*) (List_1_t228 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17253(__this, ___value, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Count()
#define List_1_get_Count_m17254(__this, method) (( int32_t (*) (List_1_t228 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
#define List_1_get_Item_m17255(__this, ___index, method) (( MethodInfo_t * (*) (List_1_t228 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
#define List_1_set_Item_m17256(__this, ___index, ___value, method) (( void (*) (List_1_t228 *, int32_t, MethodInfo_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
