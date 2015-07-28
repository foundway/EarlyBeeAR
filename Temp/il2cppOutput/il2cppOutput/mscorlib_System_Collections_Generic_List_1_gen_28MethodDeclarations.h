#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.Trackable>
struct List_1_t854;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t622;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t656;
// System.Collections.Generic.IEnumerator`1<Vuforia.Trackable>
struct IEnumerator_1_t863;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.Trackable>
struct ICollection_1_t4926;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.Trackable>
struct ReadOnlyCollection_1_t3716;
// Vuforia.Trackable[]
struct TrackableU5BU5D_t3699;
// System.Predicate`1<Vuforia.Trackable>
struct Predicate_1_t3718;
// System.Comparison`1<Vuforia.Trackable>
struct Comparison_1_t3721;
// System.Collections.Generic.List`1/Enumerator<Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m21929(__this, method) (( void (*) (List_1_t854 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m4997(__this, ___collection, method) (( void (*) (List_1_t854 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.ctor(System.Int32)
#define List_1__ctor_m21930(__this, ___capacity, method) (( void (*) (List_1_t854 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::.cctor()
#define List_1__cctor_m21931(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21932(__this, method) (( Object_t* (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m21933(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t854 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m21934(__this, method) (( Object_t * (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m21935(__this, ___item, method) (( int32_t (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m21936(__this, ___item, method) (( bool (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m21937(__this, ___item, method) (( int32_t (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m21938(__this, ___index, ___item, method) (( void (*) (List_1_t854 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m21939(__this, ___item, method) (( void (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21940(__this, method) (( bool (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m21941(__this, method) (( bool (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m21942(__this, method) (( Object_t * (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m21943(__this, method) (( bool (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m21944(__this, method) (( bool (*) (List_1_t854 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m21945(__this, ___index, method) (( Object_t * (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m21946(__this, ___index, ___value, method) (( void (*) (List_1_t854 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Add(T)
#define List_1_Add_m21947(__this, ___item, method) (( void (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m21948(__this, ___newCount, method) (( void (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m21949(__this, ___collection, method) (( void (*) (List_1_t854 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m21950(__this, ___enumerable, method) (( void (*) (List_1_t854 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m21951(__this, ___collection, method) (( void (*) (List_1_t854 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.Trackable>::AsReadOnly()
#define List_1_AsReadOnly_m21952(__this, method) (( ReadOnlyCollection_1_t3716 * (*) (List_1_t854 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Clear()
#define List_1_Clear_m21953(__this, method) (( void (*) (List_1_t854 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Contains(T)
#define List_1_Contains_m21954(__this, ___item, method) (( bool (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m21955(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t854 *, TrackableU5BU5D_t3699*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::Find(System.Predicate`1<T>)
#define List_1_Find_m21956(__this, ___match, method) (( Object_t * (*) (List_1_t854 *, Predicate_1_t3718 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m21957(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3718 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m21958(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t854 *, int32_t, int32_t, Predicate_1_t3718 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.Trackable>::GetEnumerator()
#define List_1_GetEnumerator_m5006(__this, method) (( Enumerator_t855  (*) (List_1_t854 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::IndexOf(T)
#define List_1_IndexOf_m21959(__this, ___item, method) (( int32_t (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m21960(__this, ___start, ___delta, method) (( void (*) (List_1_t854 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m21961(__this, ___index, method) (( void (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Insert(System.Int32,T)
#define List_1_Insert_m21962(__this, ___index, ___item, method) (( void (*) (List_1_t854 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m21963(__this, ___collection, method) (( void (*) (List_1_t854 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.Trackable>::Remove(T)
#define List_1_Remove_m21964(__this, ___item, method) (( bool (*) (List_1_t854 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m21965(__this, ___match, method) (( int32_t (*) (List_1_t854 *, Predicate_1_t3718 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m21966(__this, ___index, method) (( void (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Reverse()
#define List_1_Reverse_m21967(__this, method) (( void (*) (List_1_t854 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort()
#define List_1_Sort_m21968(__this, method) (( void (*) (List_1_t854 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m21969(__this, ___comparison, method) (( void (*) (List_1_t854 *, Comparison_1_t3721 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.Trackable>::ToArray()
#define List_1_ToArray_m21970(__this, method) (( TrackableU5BU5D_t3699* (*) (List_1_t854 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::TrimExcess()
#define List_1_TrimExcess_m21971(__this, method) (( void (*) (List_1_t854 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Capacity()
#define List_1_get_Capacity_m21972(__this, method) (( int32_t (*) (List_1_t854 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m21973(__this, ___value, method) (( void (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.Trackable>::get_Count()
#define List_1_get_Count_m21974(__this, method) (( int32_t (*) (List_1_t854 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.Trackable>::get_Item(System.Int32)
#define List_1_get_Item_m21975(__this, ___index, method) (( Object_t * (*) (List_1_t854 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.Trackable>::set_Item(System.Int32,T)
#define List_1_set_Item_m21976(__this, ___index, ___value, method) (( void (*) (List_1_t854 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
