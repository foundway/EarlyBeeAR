#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<MazeCoord>
struct Collection_1_t3121;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// MazeCoord[]
struct MazeCoordU5BU5D_t3116;
// System.Collections.Generic.IEnumerator`1<MazeCoord>
struct IEnumerator_1_t4812;
// System.Collections.Generic.IList`1<MazeCoord>
struct IList_1_t3119;
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"

// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::.ctor()
extern "C" void Collection_1__ctor_m15889_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1__ctor_m15889(__this, method) (( void (*) (Collection_1_t3121 *, MethodInfo*))Collection_1__ctor_m15889_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15890_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15890(__this, method) (( bool (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15890_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15891_gshared (Collection_1_t3121 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m15891(__this, ___array, ___index, method) (( void (*) (Collection_1_t3121 *, Array_t *, int32_t, MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m15891_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15892_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m15892(__this, method) (( Object_t * (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m15892_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15893_gshared (Collection_1_t3121 * __this, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m15893(__this, ___value, method) (( int32_t (*) (Collection_1_t3121 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Add_m15893_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m15894_gshared (Collection_1_t3121 * __this, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m15894(__this, ___value, method) (( bool (*) (Collection_1_t3121 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Contains_m15894_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15895_gshared (Collection_1_t3121 * __this, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m15895(__this, ___value, method) (( int32_t (*) (Collection_1_t3121 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m15895_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m15896_gshared (Collection_1_t3121 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m15896(__this, ___index, ___value, method) (( void (*) (Collection_1_t3121 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Insert_m15896_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m15897_gshared (Collection_1_t3121 * __this, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m15897(__this, ___value, method) (( void (*) (Collection_1_t3121 *, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_Remove_m15897_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15898_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m15898(__this, method) (( bool (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m15898_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15899_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m15899(__this, method) (( Object_t * (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m15899_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15900_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m15900(__this, method) (( bool (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m15900_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15901_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m15901(__this, method) (( bool (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m15901_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15902_gshared (Collection_1_t3121 * __this, int32_t ___index, MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m15902(__this, ___index, method) (( Object_t * (*) (Collection_1_t3121 *, int32_t, MethodInfo*))Collection_1_System_Collections_IList_get_Item_m15902_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m15903_gshared (Collection_1_t3121 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m15903(__this, ___index, ___value, method) (( void (*) (Collection_1_t3121 *, int32_t, Object_t *, MethodInfo*))Collection_1_System_Collections_IList_set_Item_m15903_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::Add(T)
extern "C" void Collection_1_Add_m15904_gshared (Collection_1_t3121 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_Add_m15904(__this, ___item, method) (( void (*) (Collection_1_t3121 *, MazeCoord_t28 , MethodInfo*))Collection_1_Add_m15904_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::Clear()
extern "C" void Collection_1_Clear_m15905_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_Clear_m15905(__this, method) (( void (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_Clear_m15905_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::ClearItems()
extern "C" void Collection_1_ClearItems_m15906_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_ClearItems_m15906(__this, method) (( void (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_ClearItems_m15906_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::Contains(T)
extern "C" bool Collection_1_Contains_m15907_gshared (Collection_1_t3121 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_Contains_m15907(__this, ___item, method) (( bool (*) (Collection_1_t3121 *, MazeCoord_t28 , MethodInfo*))Collection_1_Contains_m15907_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m15908_gshared (Collection_1_t3121 * __this, MazeCoordU5BU5D_t3116* ___array, int32_t ___index, MethodInfo* method);
#define Collection_1_CopyTo_m15908(__this, ___array, ___index, method) (( void (*) (Collection_1_t3121 *, MazeCoordU5BU5D_t3116*, int32_t, MethodInfo*))Collection_1_CopyTo_m15908_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<MazeCoord>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m15909_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_GetEnumerator_m15909(__this, method) (( Object_t* (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_GetEnumerator_m15909_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<MazeCoord>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15910_gshared (Collection_1_t3121 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_IndexOf_m15910(__this, ___item, method) (( int32_t (*) (Collection_1_t3121 *, MazeCoord_t28 , MethodInfo*))Collection_1_IndexOf_m15910_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m15911_gshared (Collection_1_t3121 * __this, int32_t ___index, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_Insert_m15911(__this, ___index, ___item, method) (( void (*) (Collection_1_t3121 *, int32_t, MazeCoord_t28 , MethodInfo*))Collection_1_Insert_m15911_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15912_gshared (Collection_1_t3121 * __this, int32_t ___index, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_InsertItem_m15912(__this, ___index, ___item, method) (( void (*) (Collection_1_t3121 *, int32_t, MazeCoord_t28 , MethodInfo*))Collection_1_InsertItem_m15912_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::Remove(T)
extern "C" bool Collection_1_Remove_m15913_gshared (Collection_1_t3121 * __this, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_Remove_m15913(__this, ___item, method) (( bool (*) (Collection_1_t3121 *, MazeCoord_t28 , MethodInfo*))Collection_1_Remove_m15913_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m15914_gshared (Collection_1_t3121 * __this, int32_t ___index, MethodInfo* method);
#define Collection_1_RemoveAt_m15914(__this, ___index, method) (( void (*) (Collection_1_t3121 *, int32_t, MethodInfo*))Collection_1_RemoveAt_m15914_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15915_gshared (Collection_1_t3121 * __this, int32_t ___index, MethodInfo* method);
#define Collection_1_RemoveItem_m15915(__this, ___index, method) (( void (*) (Collection_1_t3121 *, int32_t, MethodInfo*))Collection_1_RemoveItem_m15915_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<MazeCoord>::get_Count()
extern "C" int32_t Collection_1_get_Count_m15916_gshared (Collection_1_t3121 * __this, MethodInfo* method);
#define Collection_1_get_Count_m15916(__this, method) (( int32_t (*) (Collection_1_t3121 *, MethodInfo*))Collection_1_get_Count_m15916_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<MazeCoord>::get_Item(System.Int32)
extern "C" MazeCoord_t28  Collection_1_get_Item_m15917_gshared (Collection_1_t3121 * __this, int32_t ___index, MethodInfo* method);
#define Collection_1_get_Item_m15917(__this, ___index, method) (( MazeCoord_t28  (*) (Collection_1_t3121 *, int32_t, MethodInfo*))Collection_1_get_Item_m15917_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m15918_gshared (Collection_1_t3121 * __this, int32_t ___index, MazeCoord_t28  ___value, MethodInfo* method);
#define Collection_1_set_Item_m15918(__this, ___index, ___value, method) (( void (*) (Collection_1_t3121 *, int32_t, MazeCoord_t28 , MethodInfo*))Collection_1_set_Item_m15918_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15919_gshared (Collection_1_t3121 * __this, int32_t ___index, MazeCoord_t28  ___item, MethodInfo* method);
#define Collection_1_SetItem_m15919(__this, ___index, ___item, method) (( void (*) (Collection_1_t3121 *, int32_t, MazeCoord_t28 , MethodInfo*))Collection_1_SetItem_m15919_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15920_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method);
#define Collection_1_IsValidItem_m15920(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_IsValidItem_m15920_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<MazeCoord>::ConvertItem(System.Object)
extern "C" MazeCoord_t28  Collection_1_ConvertItem_m15921_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method);
#define Collection_1_ConvertItem_m15921(__this /* static, unused */, ___item, method) (( MazeCoord_t28  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))Collection_1_ConvertItem_m15921_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<MazeCoord>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15922_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method);
#define Collection_1_CheckWritable_m15922(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_CheckWritable_m15922_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15923_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method);
#define Collection_1_IsSynchronized_m15923(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsSynchronized_m15923_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<MazeCoord>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15924_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method);
#define Collection_1_IsFixedSize_m15924(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Collection_1_IsFixedSize_m15924_gshared)(__this /* static, unused */, ___list, method)
