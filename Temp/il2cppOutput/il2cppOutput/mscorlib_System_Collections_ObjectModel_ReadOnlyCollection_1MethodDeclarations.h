﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t3079;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1354;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m15520_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t* ___list, MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m15520(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t3079 *, Object_t*, MethodInfo*))ReadOnlyCollection_1__ctor_m15520_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15521_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15521(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15521_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15522_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15522(__this, method) (( void (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15522_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15523_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15523(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15523_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15524_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___item, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15524(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15524_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15525_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15525(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15525_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15526_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15526(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3079 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15526_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15527_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15527(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15527_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15528_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15528(__this, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15528_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15529_gshared (ReadOnlyCollection_1_t3079 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15529(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3079 *, Array_t *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15529_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15530_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15530(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15530_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15531_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m15531(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m15531_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15532_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m15532(__this, method) (( void (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m15532_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15533_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m15533(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m15533_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15534_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15534(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15534_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15535_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m15535(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m15535_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15536_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m15536(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m15536_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15537_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15537(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15537_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15538_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15538(__this, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15538_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15539_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15539(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15539_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15540_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15540(__this, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15540_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15541_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15541(__this, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15541_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15542_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m15542(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3079 *, int32_t, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m15542_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15543_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m15543(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t3079 *, int32_t, Object_t *, MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m15543_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m15544_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m15544(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_Contains_m15544_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m15545_gshared (ReadOnlyCollection_1_t3079 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m15545(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t3079 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))ReadOnlyCollection_1_CopyTo_m15545_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15546_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m15546(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m15546_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15547_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m15547(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t3079 *, Object_t *, MethodInfo*))ReadOnlyCollection_1_IndexOf_m15547_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15548_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m15548(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t3079 *, MethodInfo*))ReadOnlyCollection_1_get_Count_m15548_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m15549_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m15549(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t3079 *, int32_t, MethodInfo*))ReadOnlyCollection_1_get_Item_m15549_gshared)(__this, ___index, method)
