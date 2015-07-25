#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t4669;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m31942_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1__ctor_m31942(__this, method) (( void (*) (Queue_1_t4669 *, MethodInfo*))Queue_1__ctor_m31942_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m31943_gshared (Queue_1_t4669 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m31943(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4669 *, Array_t *, int32_t, MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m31943_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m31944_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m31944(__this, method) (( bool (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m31944_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m31945_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m31945(__this, method) (( Object_t * (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m31945_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31946_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31946(__this, method) (( Object_t* (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31946_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m31947_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m31947(__this, method) (( Object_t * (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m31947_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern "C" void Queue_1_Clear_m31948_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_Clear_m31948(__this, method) (( void (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_Clear_m31948_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m31949_gshared (Queue_1_t4669 * __this, ObjectU5BU5D_t178* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m31949(__this, ___array, ___idx, method) (( void (*) (Queue_1_t4669 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))Queue_1_CopyTo_m31949_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m31950_gshared (Queue_1_t4669 * __this, Object_t * ___item, MethodInfo* method);
#define Queue_1_Enqueue_m31950(__this, ___item, method) (( void (*) (Queue_1_t4669 *, Object_t *, MethodInfo*))Queue_1_Enqueue_m31950_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m31951_gshared (Queue_1_t4669 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m31951(__this, ___new_size, method) (( void (*) (Queue_1_t4669 *, int32_t, MethodInfo*))Queue_1_SetCapacity_m31951_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m31952_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_get_Count_m31952(__this, method) (( int32_t (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_get_Count_m31952_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4670  Queue_1_GetEnumerator_m31953_gshared (Queue_1_t4669 * __this, MethodInfo* method);
#define Queue_1_GetEnumerator_m31953(__this, method) (( Enumerator_t4670  (*) (Queue_1_t4669 *, MethodInfo*))Queue_1_GetEnumerator_m31953_gshared)(__this, method)
