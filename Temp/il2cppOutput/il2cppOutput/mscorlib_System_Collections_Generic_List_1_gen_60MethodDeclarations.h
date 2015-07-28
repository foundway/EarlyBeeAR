#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t2577;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2417;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t5145;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t5146;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t5147;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t4784;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4782;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4788;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t4791;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m32717(__this, method) (( void (*) (List_1_t2577 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m32718(__this, ___collection, method) (( void (*) (List_1_t2577 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m14683(__this, ___capacity, method) (( void (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m32719(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m32720(__this, method) (( Object_t* (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m32721(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2577 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m32722(__this, method) (( Object_t * (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m32723(__this, ___item, method) (( int32_t (*) (List_1_t2577 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m32724(__this, ___item, method) (( bool (*) (List_1_t2577 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m32725(__this, ___item, method) (( int32_t (*) (List_1_t2577 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m32726(__this, ___index, ___item, method) (( void (*) (List_1_t2577 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m32727(__this, ___item, method) (( void (*) (List_1_t2577 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32728(__this, method) (( bool (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m32729(__this, method) (( bool (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m32730(__this, method) (( Object_t * (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m32731(__this, method) (( bool (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m32732(__this, method) (( bool (*) (List_1_t2577 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m32733(__this, ___index, method) (( Object_t * (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m32734(__this, ___index, ___value, method) (( void (*) (List_1_t2577 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m32735(__this, ___item, method) (( void (*) (List_1_t2577 *, StrongName_t2417 *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m32736(__this, ___newCount, method) (( void (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m32737(__this, ___collection, method) (( void (*) (List_1_t2577 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m32738(__this, ___enumerable, method) (( void (*) (List_1_t2577 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m32739(__this, ___collection, method) (( void (*) (List_1_t2577 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m32740(__this, method) (( ReadOnlyCollection_1_t4784 * (*) (List_1_t2577 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m32741(__this, method) (( void (*) (List_1_t2577 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m32742(__this, ___item, method) (( bool (*) (List_1_t2577 *, StrongName_t2417 *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m32743(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t2577 *, StrongNameU5BU5D_t4782*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m32744(__this, ___match, method) (( StrongName_t2417 * (*) (List_1_t2577 *, Predicate_1_t4788 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m32745(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4788 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m32746(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t2577 *, int32_t, int32_t, Predicate_1_t4788 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
#define List_1_GetEnumerator_m32747(__this, method) (( Enumerator_t4783  (*) (List_1_t2577 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m32748(__this, ___item, method) (( int32_t (*) (List_1_t2577 *, StrongName_t2417 *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m32749(__this, ___start, ___delta, method) (( void (*) (List_1_t2577 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m32750(__this, ___index, method) (( void (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m32751(__this, ___index, ___item, method) (( void (*) (List_1_t2577 *, int32_t, StrongName_t2417 *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m32752(__this, ___collection, method) (( void (*) (List_1_t2577 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m32753(__this, ___item, method) (( bool (*) (List_1_t2577 *, StrongName_t2417 *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m32754(__this, ___match, method) (( int32_t (*) (List_1_t2577 *, Predicate_1_t4788 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m32755(__this, ___index, method) (( void (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m32756(__this, method) (( void (*) (List_1_t2577 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m32757(__this, method) (( void (*) (List_1_t2577 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m32758(__this, ___comparison, method) (( void (*) (List_1_t2577 *, Comparison_1_t4791 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m32759(__this, method) (( StrongNameU5BU5D_t4782* (*) (List_1_t2577 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m32760(__this, method) (( void (*) (List_1_t2577 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m32761(__this, method) (( int32_t (*) (List_1_t2577 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m32762(__this, ___value, method) (( void (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m32763(__this, method) (( int32_t (*) (List_1_t2577 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m32764(__this, ___index, method) (( StrongName_t2417 * (*) (List_1_t2577 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m32765(__this, ___index, ___value, method) (( void (*) (List_1_t2577 *, int32_t, StrongName_t2417 *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
