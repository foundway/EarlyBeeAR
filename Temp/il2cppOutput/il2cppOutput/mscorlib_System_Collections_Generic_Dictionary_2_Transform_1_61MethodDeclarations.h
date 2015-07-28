#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>
struct Transform_1_t3815;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57MethodDeclarations.h"
#define Transform_1__ctor_m23389(__this, ___object, ___method, method) (( void (*) (Transform_1_t3815 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23295_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23390(__this, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Transform_1_t3815 *, Type_t *, uint16_t, MethodInfo*))Transform_1_Invoke_m23296_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23391(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3815 *, Type_t *, uint16_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23297_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23392(__this, ___result, method) (( DictionaryEntry_t1610  (*) (Transform_1_t3815 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23298_gshared)(__this, ___result, method)
