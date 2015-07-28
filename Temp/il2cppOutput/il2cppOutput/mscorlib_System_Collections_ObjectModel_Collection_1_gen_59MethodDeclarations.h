#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
struct Collection_1_t4638;
// System.Object
struct Object_t;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t1220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t4634;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>
struct IEnumerator_1_t5127;
// System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>
struct IList_1_t4636;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m31675(__this, method) (( void (*) (Collection_1_t4638 *, MethodInfo*))Collection_1__ctor_m15550_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31676(__this, method) (( bool (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15551_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m31677(__this, ___array, ___index, method) (( void (*) (Collection_1_t4638 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15552_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m31678(__this, method) (( Object_t * (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15553_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m31679(__this, ___value, method) (( int32_t (*) (Collection_1_t4638 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m31680(__this, ___value, method) (( bool (*) (Collection_1_t4638 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m31681(__this, ___value, method) (( int32_t (*) (Collection_1_t4638 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15556_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m31682(__this, ___index, ___value, method) (( void (*) (Collection_1_t4638 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15557_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m31683(__this, ___value, method) (( void (*) (Collection_1_t4638 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15558_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m31684(__this, method) (( bool (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15559_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m31685(__this, method) (( Object_t * (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15560_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m31686(__this, method) (( bool (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15561_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m31687(__this, method) (( bool (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15562_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m31688(__this, ___index, method) (( Object_t * (*) (Collection_1_t4638 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15563_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m31689(__this, ___index, ___value, method) (( void (*) (Collection_1_t4638 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15564_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
#define Collection_1_Add_m31690(__this, ___item, method) (( void (*) (Collection_1_t4638 *, PersistentCall_t1220 *, MethodInfo*))Collection_1_Add_m15565_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
#define Collection_1_Clear_m31691(__this, method) (( void (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_Clear_m15566_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
#define Collection_1_ClearItems_m31692(__this, method) (( void (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_ClearItems_m15567_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
#define Collection_1_Contains_m31693(__this, ___item, method) (( bool (*) (Collection_1_t4638 *, PersistentCall_t1220 *, MethodInfo*))Collection_1_Contains_m15568_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m31694(__this, ___array, ___index, method) (( void (*) (Collection_1_t4638 *, PersistentCallU5BU5D_t4634*, int32_t, MethodInfo*))Collection_1_CopyTo_m15569_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#define Collection_1_GetEnumerator_m31695(__this, method) (( Object_t* (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_GetEnumerator_m15570_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
#define Collection_1_IndexOf_m31696(__this, ___item, method) (( int32_t (*) (Collection_1_t4638 *, PersistentCall_t1220 *, MethodInfo*))Collection_1_IndexOf_m15571_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
#define Collection_1_Insert_m31697(__this, ___index, ___item, method) (( void (*) (Collection_1_t4638 *, int32_t, PersistentCall_t1220 *, MethodInfo*))Collection_1_Insert_m15572_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m31698(__this, ___index, ___item, method) (( void (*) (Collection_1_t4638 *, int32_t, PersistentCall_t1220 *, MethodInfo*))Collection_1_InsertItem_m15573_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#define Collection_1_Remove_m31699(__this, ___item, method) (( bool (*) (Collection_1_t4638 *, PersistentCall_t1220 *, MethodInfo*))Collection_1_Remove_m15574_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m31700(__this, ___index, method) (( void (*) (Collection_1_t4638 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15575_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m31701(__this, ___index, method) (( void (*) (Collection_1_t4638 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15576_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
#define Collection_1_get_Count_m31702(__this, method) (( int32_t (*) (Collection_1_t4638 *, MethodInfo*))Collection_1_get_Count_m15577_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
#define Collection_1_get_Item_m31703(__this, ___index, method) (( PersistentCall_t1220 * (*) (Collection_1_t4638 *, int32_t, MethodInfo*))Collection_1_get_Item_m15578_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m31704(__this, ___index, ___value, method) (( void (*) (Collection_1_t4638 *, int32_t, PersistentCall_t1220 *, MethodInfo*))Collection_1_set_Item_m15579_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m31705(__this, ___index, ___item, method) (( void (*) (Collection_1_t4638 *, int32_t, PersistentCall_t1220 *, MethodInfo*))Collection_1_SetItem_m15580_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m31706(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15581_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m31707(__this /* static, unused */, ___item, method) (( PersistentCall_t1220 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15582_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m31708(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15583_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m31709(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15584_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m31710(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15585_gshared)(__this /* static, unused */, ___list, method)
