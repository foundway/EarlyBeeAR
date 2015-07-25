#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
struct Collection_1_t4785;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2417;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4782;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t5146;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t2413;

// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m32802(__this, method) (( void (*) (Collection_1_t4785 *, MethodInfo*))Collection_1__ctor_m15550_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m32803(__this, method) (( bool (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15551_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m32804(__this, ___array, ___index, method) (( void (*) (Collection_1_t4785 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15552_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m32805(__this, method) (( Object_t * (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15553_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m32806(__this, ___value, method) (( int32_t (*) (Collection_1_t4785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m32807(__this, ___value, method) (( bool (*) (Collection_1_t4785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m32808(__this, ___value, method) (( int32_t (*) (Collection_1_t4785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15556_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m32809(__this, ___index, ___value, method) (( void (*) (Collection_1_t4785 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15557_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m32810(__this, ___value, method) (( void (*) (Collection_1_t4785 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15558_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m32811(__this, method) (( bool (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15559_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m32812(__this, method) (( Object_t * (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15560_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m32813(__this, method) (( bool (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15561_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m32814(__this, method) (( bool (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15562_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m32815(__this, ___index, method) (( Object_t * (*) (Collection_1_t4785 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15563_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m32816(__this, ___index, ___value, method) (( void (*) (Collection_1_t4785 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15564_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
#define Collection_1_Add_m32817(__this, ___item, method) (( void (*) (Collection_1_t4785 *, StrongName_t2417 *, MethodInfo*))Collection_1_Add_m15565_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
#define Collection_1_Clear_m32818(__this, method) (( void (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_Clear_m15566_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
#define Collection_1_ClearItems_m32819(__this, method) (( void (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_ClearItems_m15567_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
#define Collection_1_Contains_m32820(__this, ___item, method) (( bool (*) (Collection_1_t4785 *, StrongName_t2417 *, MethodInfo*))Collection_1_Contains_m15568_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m32821(__this, ___array, ___index, method) (( void (*) (Collection_1_t4785 *, StrongNameU5BU5D_t4782*, int32_t, MethodInfo*))Collection_1_CopyTo_m15569_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
#define Collection_1_GetEnumerator_m32822(__this, method) (( Object_t* (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_GetEnumerator_m15570_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
#define Collection_1_IndexOf_m32823(__this, ___item, method) (( int32_t (*) (Collection_1_t4785 *, StrongName_t2417 *, MethodInfo*))Collection_1_IndexOf_m15571_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define Collection_1_Insert_m32824(__this, ___index, ___item, method) (( void (*) (Collection_1_t4785 *, int32_t, StrongName_t2417 *, MethodInfo*))Collection_1_Insert_m15572_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m32825(__this, ___index, ___item, method) (( void (*) (Collection_1_t4785 *, int32_t, StrongName_t2417 *, MethodInfo*))Collection_1_InsertItem_m15573_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
#define Collection_1_Remove_m32826(__this, ___item, method) (( bool (*) (Collection_1_t4785 *, StrongName_t2417 *, MethodInfo*))Collection_1_Remove_m15574_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m32827(__this, ___index, method) (( void (*) (Collection_1_t4785 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15575_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m32828(__this, ___index, method) (( void (*) (Collection_1_t4785 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15576_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
#define Collection_1_get_Count_m32829(__this, method) (( int32_t (*) (Collection_1_t4785 *, MethodInfo*))Collection_1_get_Count_m15577_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define Collection_1_get_Item_m32830(__this, ___index, method) (( StrongName_t2417 * (*) (Collection_1_t4785 *, int32_t, MethodInfo*))Collection_1_get_Item_m15578_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m32831(__this, ___index, ___value, method) (( void (*) (Collection_1_t4785 *, int32_t, StrongName_t2417 *, MethodInfo*))Collection_1_set_Item_m15579_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m32832(__this, ___index, ___item, method) (( void (*) (Collection_1_t4785 *, int32_t, StrongName_t2417 *, MethodInfo*))Collection_1_SetItem_m15580_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m32833(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15581_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m32834(__this /* static, unused */, ___item, method) (( StrongName_t2417 * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15582_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m32835(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15583_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m32836(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15584_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m32837(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15585_gshared)(__this /* static, unused */, ___list, method)
