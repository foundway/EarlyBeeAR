#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t227;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1353;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3079;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Predicate`1<System.Object>
struct Predicate_1_t3089;
// System.Comparison`1<System.Object>
struct Comparison_1_t3104;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m7334_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1__ctor_m7334(__this, method) (( void (*) (List_1_t227 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15449_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m15449(__this, ___collection, method) (( void (*) (List_1_t227 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m15451_gshared (List_1_t227 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m15451(__this, ___capacity, method) (( void (*) (List_1_t227 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m15453_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define List_1__cctor_m15453(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561(__this, method) (( Object_t* (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m7545_gshared (List_1_t227 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m7545(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t227 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m7541(__this, method) (( Object_t * (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m7550_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m7550(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m7552_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m7552(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m7553_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m7553(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m7554_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m7554(__this, ___index, ___item, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m7555_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m7555(__this, ___item, method) (( void (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557(__this, method) (( bool (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m7543(__this, method) (( bool (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m7544(__this, method) (( Object_t * (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m7546(__this, method) (( bool (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m7547(__this, method) (( bool (*) (List_1_t227 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m7548_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m7548(__this, ___index, method) (( Object_t * (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m7549_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m7549(__this, ___index, ___value, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m7353_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m7353(__this, ___item, method) (( void (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15470_gshared (List_1_t227 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m15470(__this, ___newCount, method) (( void (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15472_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m15472(__this, ___collection, method) (( void (*) (List_1_t227 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15474_gshared (List_1_t227 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m15474(__this, ___enumerable, method) (( void (*) (List_1_t227 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15476_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m15476(__this, ___collection, method) (( void (*) (List_1_t227 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t3079 * List_1_AsReadOnly_m15478_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m15478(__this, method) (( ReadOnlyCollection_1_t3079 * (*) (List_1_t227 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m7551_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_Clear_m7551(__this, method) (( void (*) (List_1_t227 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m7558_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m7558(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m7559_gshared (List_1_t227 * __this, ObjectU5BU5D_t178* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m7559(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t227 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m15482_gshared (List_1_t227 * __this, Predicate_1_t3089 * ___match, MethodInfo* method);
#define List_1_Find_m15482(__this, ___match, method) (( Object_t * (*) (List_1_t227 *, Predicate_1_t3089 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15484_gshared (Object_t * __this /* static, unused */, Predicate_1_t3089 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m15484(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t3089 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15486_gshared (List_1_t227 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3089 * ___match, MethodInfo* method);
#define List_1_GetIndex_m15486(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t227 *, int32_t, int32_t, Predicate_1_t3089 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3078  List_1_GetEnumerator_m15487_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m15487(__this, method) (( Enumerator_t3078  (*) (List_1_t227 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m7562_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m7562(__this, ___item, method) (( int32_t (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15490_gshared (List_1_t227 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m15490(__this, ___start, ___delta, method) (( void (*) (List_1_t227 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15492_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m15492(__this, ___index, method) (( void (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m7563_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m7563(__this, ___index, ___item, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15495_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m15495(__this, ___collection, method) (( void (*) (List_1_t227 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m7560_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m7560(__this, ___item, method) (( bool (*) (List_1_t227 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15497_gshared (List_1_t227 * __this, Predicate_1_t3089 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m15497(__this, ___match, method) (( int32_t (*) (List_1_t227 *, Predicate_1_t3089 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m7556_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m7556(__this, ___index, method) (( void (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m15500_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_Reverse_m15500(__this, method) (( void (*) (List_1_t227 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m15502_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_Sort_m15502(__this, method) (( void (*) (List_1_t227 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15504_gshared (List_1_t227 * __this, Comparison_1_t3104 * ___comparison, MethodInfo* method);
#define List_1_Sort_m15504(__this, ___comparison, method) (( void (*) (List_1_t227 *, Comparison_1_t3104 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t178* List_1_ToArray_m15506_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_ToArray_m15506(__this, method) (( ObjectU5BU5D_t178* (*) (List_1_t227 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m15508_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_TrimExcess_m15508(__this, method) (( void (*) (List_1_t227 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15510_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_get_Capacity_m15510(__this, method) (( int32_t (*) (List_1_t227 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15512_gshared (List_1_t227 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m15512(__this, ___value, method) (( void (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m7542_gshared (List_1_t227 * __this, MethodInfo* method);
#define List_1_get_Count_m7542(__this, method) (( int32_t (*) (List_1_t227 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m7564_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m7564(__this, ___index, method) (( Object_t * (*) (List_1_t227 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m7565_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m7565(__this, ___index, ___value, method) (( void (*) (List_1_t227 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
