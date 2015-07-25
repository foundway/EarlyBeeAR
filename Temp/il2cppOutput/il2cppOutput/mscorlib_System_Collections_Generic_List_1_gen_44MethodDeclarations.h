#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Vuforia.ImageTarget>
struct List_1_t4104;
// System.Object
struct Object_t;
// Vuforia.ImageTarget
struct ImageTarget_t644;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t805;
// System.Collections.Generic.IEnumerator`1<Vuforia.ImageTarget>
struct IEnumerator_1_t5011;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>
struct ICollection_1_t5007;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>
struct ReadOnlyCollection_1_t4107;
// Vuforia.ImageTarget[]
struct ImageTargetU5BU5D_t928;
// System.Predicate`1<Vuforia.ImageTarget>
struct Predicate_1_t4109;
// System.Comparison`1<Vuforia.ImageTarget>
struct Comparison_1_t4112;
// System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"

// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
#define List_1__ctor_m26363(__this, method) (( void (*) (List_1_t4104 *, MethodInfo*))List_1__ctor_m7334_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26364(__this, ___collection, method) (( void (*) (List_1_t4104 *, Object_t*, MethodInfo*))List_1__ctor_m15449_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Int32)
#define List_1__ctor_m26365(__this, ___capacity, method) (( void (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1__ctor_m15451_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.cctor()
#define List_1__cctor_m26366(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))List_1__cctor_m15453_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26367(__this, method) (( Object_t* (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26368(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4104 *, Array_t *, int32_t, MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m7545_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26369(__this, method) (( Object_t * (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26370(__this, ___item, method) (( int32_t (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Add_m7550_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26371(__this, ___item, method) (( bool (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Contains_m7552_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26372(__this, ___item, method) (( int32_t (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_IndexOf_m7553_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26373(__this, ___index, ___item, method) (( void (*) (List_1_t4104 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_Insert_m7554_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26374(__this, ___item, method) (( void (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_System_Collections_IList_Remove_m7555_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26375(__this, method) (( bool (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26376(__this, method) (( bool (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26377(__this, method) (( Object_t * (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26378(__this, method) (( bool (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26379(__this, method) (( bool (*) (List_1_t4104 *, MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26380(__this, ___index, method) (( Object_t * (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_System_Collections_IList_get_Item_m7548_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26381(__this, ___index, ___value, method) (( void (*) (List_1_t4104 *, int32_t, Object_t *, MethodInfo*))List_1_System_Collections_IList_set_Item_m7549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Add(T)
#define List_1_Add_m26382(__this, ___item, method) (( void (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_Add_m7353_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26383(__this, ___newCount, method) (( void (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_GrowIfNeeded_m15470_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26384(__this, ___collection, method) (( void (*) (List_1_t4104 *, Object_t*, MethodInfo*))List_1_AddCollection_m15472_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26385(__this, ___enumerable, method) (( void (*) (List_1_t4104 *, Object_t*, MethodInfo*))List_1_AddEnumerable_m15474_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26386(__this, ___collection, method) (( void (*) (List_1_t4104 *, Object_t*, MethodInfo*))List_1_AddRange_m15476_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::AsReadOnly()
#define List_1_AsReadOnly_m26387(__this, method) (( ReadOnlyCollection_1_t4107 * (*) (List_1_t4104 *, MethodInfo*))List_1_AsReadOnly_m15478_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Clear()
#define List_1_Clear_m26388(__this, method) (( void (*) (List_1_t4104 *, MethodInfo*))List_1_Clear_m7551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Contains(T)
#define List_1_Contains_m26389(__this, ___item, method) (( bool (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_Contains_m7558_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26390(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4104 *, ImageTargetU5BU5D_t928*, int32_t, MethodInfo*))List_1_CopyTo_m7559_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::Find(System.Predicate`1<T>)
#define List_1_Find_m26391(__this, ___match, method) (( Object_t * (*) (List_1_t4104 *, Predicate_1_t4109 *, MethodInfo*))List_1_Find_m15482_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26392(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t4109 *, MethodInfo*))List_1_CheckMatch_m15484_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26393(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t4104 *, int32_t, int32_t, Predicate_1_t4109 *, MethodInfo*))List_1_GetIndex_m15486_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetEnumerator()
#define List_1_GetEnumerator_m26394(__this, method) (( Enumerator_t4105  (*) (List_1_t4104 *, MethodInfo*))List_1_GetEnumerator_m15487_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::IndexOf(T)
#define List_1_IndexOf_m26395(__this, ___item, method) (( int32_t (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_IndexOf_m7562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26396(__this, ___start, ___delta, method) (( void (*) (List_1_t4104 *, int32_t, int32_t, MethodInfo*))List_1_Shift_m15490_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26397(__this, ___index, method) (( void (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_CheckIndex_m15492_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Insert(System.Int32,T)
#define List_1_Insert_m26398(__this, ___index, ___item, method) (( void (*) (List_1_t4104 *, int32_t, Object_t *, MethodInfo*))List_1_Insert_m7563_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26399(__this, ___collection, method) (( void (*) (List_1_t4104 *, Object_t*, MethodInfo*))List_1_CheckCollection_m15495_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Remove(T)
#define List_1_Remove_m26400(__this, ___item, method) (( bool (*) (List_1_t4104 *, Object_t *, MethodInfo*))List_1_Remove_m7560_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26401(__this, ___match, method) (( int32_t (*) (List_1_t4104 *, Predicate_1_t4109 *, MethodInfo*))List_1_RemoveAll_m15497_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26402(__this, ___index, method) (( void (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_RemoveAt_m7556_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Reverse()
#define List_1_Reverse_m26403(__this, method) (( void (*) (List_1_t4104 *, MethodInfo*))List_1_Reverse_m15500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort()
#define List_1_Sort_m26404(__this, method) (( void (*) (List_1_t4104 *, MethodInfo*))List_1_Sort_m15502_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26405(__this, ___comparison, method) (( void (*) (List_1_t4104 *, Comparison_1_t4112 *, MethodInfo*))List_1_Sort_m15504_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<Vuforia.ImageTarget>::ToArray()
#define List_1_ToArray_m26406(__this, method) (( ImageTargetU5BU5D_t928* (*) (List_1_t4104 *, MethodInfo*))List_1_ToArray_m15506_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::TrimExcess()
#define List_1_TrimExcess_m26407(__this, method) (( void (*) (List_1_t4104 *, MethodInfo*))List_1_TrimExcess_m15508_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Capacity()
#define List_1_get_Capacity_m26408(__this, method) (( int32_t (*) (List_1_t4104 *, MethodInfo*))List_1_get_Capacity_m15510_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26409(__this, ___value, method) (( void (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_set_Capacity_m15512_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Count()
#define List_1_get_Count_m26410(__this, method) (( int32_t (*) (List_1_t4104 *, MethodInfo*))List_1_get_Count_m7542_gshared)(__this, method)
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Item(System.Int32)
#define List_1_get_Item_m26411(__this, ___index, method) (( Object_t * (*) (List_1_t4104 *, int32_t, MethodInfo*))List_1_get_Item_m7564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Item(System.Int32,T)
#define List_1_set_Item_m26412(__this, ___index, ___value, method) (( void (*) (List_1_t4104 *, int32_t, Object_t *, MethodInfo*))List_1_set_Item_m7565_gshared)(__this, ___index, ___value, method)
