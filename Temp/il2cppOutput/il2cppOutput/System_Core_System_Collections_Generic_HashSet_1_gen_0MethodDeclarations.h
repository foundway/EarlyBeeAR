#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t4210;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m27498_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1__ctor_m27498(__this, method) (( void (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1__ctor_m27498_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m27500_gshared (HashSet_1_t4210 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define HashSet_1__ctor_m27500(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4210 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))HashSet_1__ctor_m27500_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27502_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27502(__this, method) (( Object_t* (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m27502_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27504_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27504(__this, method) (( bool (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m27504_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27506_gshared (HashSet_1_t4210 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27506(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4210 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m27506_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27508_gshared (HashSet_1_t4210 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27508(__this, ___item, method) (( void (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m27508_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27510_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27510(__this, method) (( Object_t * (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m27510_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m27512_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_get_Count_m27512(__this, method) (( int32_t (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_get_Count_m27512_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m27514_gshared (HashSet_1_t4210 * __this, int32_t ___capacity, Object_t* ___comparer, MethodInfo* method);
#define HashSet_1_Init_m27514(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t4210 *, int32_t, Object_t*, MethodInfo*))HashSet_1_Init_m27514_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m27516_gshared (HashSet_1_t4210 * __this, int32_t ___size, MethodInfo* method);
#define HashSet_1_InitArrays_m27516(__this, ___size, method) (( void (*) (HashSet_1_t4210 *, int32_t, MethodInfo*))HashSet_1_InitArrays_m27516_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m27518_gshared (HashSet_1_t4210 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m27518(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t4210 *, int32_t, int32_t, Object_t *, MethodInfo*))HashSet_1_SlotsContainsAt_m27518_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m27520_gshared (HashSet_1_t4210 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method);
#define HashSet_1_CopyTo_m27520(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4210 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))HashSet_1_CopyTo_m27520_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m27522_gshared (HashSet_1_t4210 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, int32_t ___count, MethodInfo* method);
#define HashSet_1_CopyTo_m27522(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t4210 *, ObjectU5BU5D_t178*, int32_t, int32_t, MethodInfo*))HashSet_1_CopyTo_m27522_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m27524_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_Resize_m27524(__this, method) (( void (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_Resize_m27524_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m27526_gshared (HashSet_1_t4210 * __this, int32_t ___index, MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m27526(__this, ___index, method) (( int32_t (*) (HashSet_1_t4210 *, int32_t, MethodInfo*))HashSet_1_GetLinkHashCode_m27526_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m27528_gshared (HashSet_1_t4210 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_GetItemHashCode_m27528(__this, ___item, method) (( int32_t (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_GetItemHashCode_m27528_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m27529_gshared (HashSet_1_t4210 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Add_m27529(__this, ___item, method) (( bool (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_Add_m27529_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m27530_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_Clear_m27530(__this, method) (( void (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_Clear_m27530_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m27531_gshared (HashSet_1_t4210 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Contains_m27531(__this, ___item, method) (( bool (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_Contains_m27531_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m27533_gshared (HashSet_1_t4210 * __this, Object_t * ___item, MethodInfo* method);
#define HashSet_1_Remove_m27533(__this, ___item, method) (( bool (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_Remove_m27533_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m27535_gshared (HashSet_1_t4210 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define HashSet_1_GetObjectData_m27535(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4210 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))HashSet_1_GetObjectData_m27535_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m27537_gshared (HashSet_1_t4210 * __this, Object_t * ___sender, MethodInfo* method);
#define HashSet_1_OnDeserialization_m27537(__this, ___sender, method) (( void (*) (HashSet_1_t4210 *, Object_t *, MethodInfo*))HashSet_1_OnDeserialization_m27537_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4212  HashSet_1_GetEnumerator_m27538_gshared (HashSet_1_t4210 * __this, MethodInfo* method);
#define HashSet_1_GetEnumerator_m27538(__this, method) (( Enumerator_t4212  (*) (HashSet_1_t4210 *, MethodInfo*))HashSet_1_GetEnumerator_m27538_gshared)(__this, method)
