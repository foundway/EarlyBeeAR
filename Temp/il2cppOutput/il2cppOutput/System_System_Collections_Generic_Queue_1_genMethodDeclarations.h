#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t98;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4814;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Collections.Generic.Queue`1/Enumerator<System.Int32>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m922_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1__ctor_m922(__this, method) (( void (*) (Queue_1_t98 *, MethodInfo*))Queue_1__ctor_m922_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m17173_gshared (Queue_1_t98 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m17173(__this, ___array, ___idx, method) (( void (*) (Queue_1_t98 *, Array_t *, int32_t, MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m17173_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m17174_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m17174(__this, method) (( bool (*) (Queue_1_t98 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m17174_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m17175_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m17175(__this, method) (( Object_t * (*) (Queue_1_t98 *, MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m17175_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17176_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17176(__this, method) (( Object_t* (*) (Queue_1_t98 *, MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17176_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m17177_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m17177(__this, method) (( Object_t * (*) (Queue_1_t98 *, MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m17177_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m936_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_Clear_m936(__this, method) (( void (*) (Queue_1_t98 *, MethodInfo*))Queue_1_Clear_m936_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m935_gshared (Queue_1_t98 * __this, Int32U5BU5D_t34* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m935(__this, ___array, ___idx, method) (( void (*) (Queue_1_t98 *, Int32U5BU5D_t34*, int32_t, MethodInfo*))Queue_1_CopyTo_m935_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m937_gshared (Queue_1_t98 * __this, int32_t ___item, MethodInfo* method);
#define Queue_1_Enqueue_m937(__this, ___item, method) (( void (*) (Queue_1_t98 *, int32_t, MethodInfo*))Queue_1_Enqueue_m937_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m17178_gshared (Queue_1_t98 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m17178(__this, ___new_size, method) (( void (*) (Queue_1_t98 *, int32_t, MethodInfo*))Queue_1_SetCapacity_m17178_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m932_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_get_Count_m932(__this, method) (( int32_t (*) (Queue_1_t98 *, MethodInfo*))Queue_1_get_Count_m932_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t3251  Queue_1_GetEnumerator_m17179_gshared (Queue_1_t98 * __this, MethodInfo* method);
#define Queue_1_GetEnumerator_m17179(__this, method) (( Enumerator_t3251  (*) (Queue_1_t98 *, MethodInfo*))Queue_1_GetEnumerator_m17179_gshared)(__this, method)
