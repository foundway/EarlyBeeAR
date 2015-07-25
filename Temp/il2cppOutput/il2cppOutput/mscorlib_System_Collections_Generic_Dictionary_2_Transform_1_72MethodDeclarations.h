﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>
struct Transform_1_t3886;
// System.Object
struct Object_t;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t132;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_73MethodDeclarations.h"
#define Transform_1__ctor_m23943(__this, ___object, ___method, method) (( void (*) (Transform_1_t3886 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23944_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23945(__this, ___key, ___value, method) (( KeyValuePair_2_t889  (*) (Transform_1_t3886 *, int32_t, WordAbstractBehaviour_t132 *, MethodInfo*))Transform_1_Invoke_m23946_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23947(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3886 *, int32_t, WordAbstractBehaviour_t132 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23948_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordAbstractBehaviour,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordAbstractBehaviour>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23949(__this, ___result, method) (( KeyValuePair_2_t889  (*) (Transform_1_t3886 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23950_gshared)(__this, ___result, method)
