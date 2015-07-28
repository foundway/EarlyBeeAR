#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t3218;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t208;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4829;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t3216;

// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m16906(__this, method) (( void (*) (Collection_1_t3218 *, MethodInfo*))Collection_1__ctor_m15550_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16907(__this, method) (( bool (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15551_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m16908(__this, ___array, ___index, method) (( void (*) (Collection_1_t3218 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15552_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m16909(__this, method) (( Object_t * (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15553_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m16910(__this, ___value, method) (( int32_t (*) (Collection_1_t3218 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15554_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m16911(__this, ___value, method) (( bool (*) (Collection_1_t3218 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15555_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m16912(__this, ___value, method) (( int32_t (*) (Collection_1_t3218 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15556_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m16913(__this, ___index, ___value, method) (( void (*) (Collection_1_t3218 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15557_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m16914(__this, ___value, method) (( void (*) (Collection_1_t3218 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15558_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m16915(__this, method) (( bool (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15559_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m16916(__this, method) (( Object_t * (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15560_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m16917(__this, method) (( bool (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15561_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m16918(__this, method) (( bool (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15562_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m16919(__this, ___index, method) (( Object_t * (*) (Collection_1_t3218 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15563_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m16920(__this, ___index, ___value, method) (( void (*) (Collection_1_t3218 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15564_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Add(T)
#define Collection_1_Add_m16921(__this, ___item, method) (( void (*) (Collection_1_t3218 *, String_t*, MethodInfo*))Collection_1_Add_m15565_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Clear()
#define Collection_1_Clear_m16922(__this, method) (( void (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_Clear_m15566_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::ClearItems()
#define Collection_1_ClearItems_m16923(__this, method) (( void (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_ClearItems_m15567_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Contains(T)
#define Collection_1_Contains_m16924(__this, ___item, method) (( bool (*) (Collection_1_t3218 *, String_t*, MethodInfo*))Collection_1_Contains_m15568_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m16925(__this, ___array, ___index, method) (( void (*) (Collection_1_t3218 *, StringU5BU5D_t208*, int32_t, MethodInfo*))Collection_1_CopyTo_m15569_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.String>::GetEnumerator()
#define Collection_1_GetEnumerator_m16926(__this, method) (( Object_t* (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_GetEnumerator_m15570_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::IndexOf(T)
#define Collection_1_IndexOf_m16927(__this, ___item, method) (( int32_t (*) (Collection_1_t3218 *, String_t*, MethodInfo*))Collection_1_IndexOf_m15571_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::Insert(System.Int32,T)
#define Collection_1_Insert_m16928(__this, ___index, ___item, method) (( void (*) (Collection_1_t3218 *, int32_t, String_t*, MethodInfo*))Collection_1_Insert_m15572_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m16929(__this, ___index, ___item, method) (( void (*) (Collection_1_t3218 *, int32_t, String_t*, MethodInfo*))Collection_1_InsertItem_m15573_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::Remove(T)
#define Collection_1_Remove_m16930(__this, ___item, method) (( bool (*) (Collection_1_t3218 *, String_t*, MethodInfo*))Collection_1_Remove_m15574_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m16931(__this, ___index, method) (( void (*) (Collection_1_t3218 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15575_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m16932(__this, ___index, method) (( void (*) (Collection_1_t3218 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15576_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.String>::get_Count()
#define Collection_1_get_Count_m16933(__this, method) (( int32_t (*) (Collection_1_t3218 *, MethodInfo*))Collection_1_get_Count_m15577_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::get_Item(System.Int32)
#define Collection_1_get_Item_m16934(__this, ___index, method) (( String_t* (*) (Collection_1_t3218 *, int32_t, MethodInfo*))Collection_1_get_Item_m15578_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m16935(__this, ___index, ___value, method) (( void (*) (Collection_1_t3218 *, int32_t, String_t*, MethodInfo*))Collection_1_set_Item_m15579_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m16936(__this, ___index, ___item, method) (( void (*) (Collection_1_t3218 *, int32_t, String_t*, MethodInfo*))Collection_1_SetItem_m15580_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m16937(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15581_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.String>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m16938(__this /* static, unused */, ___item, method) (( String_t* (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15582_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m16939(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15583_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m16940(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15584_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.String>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m16941(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15585_gshared)(__this /* static, unused */, ___list, method)
