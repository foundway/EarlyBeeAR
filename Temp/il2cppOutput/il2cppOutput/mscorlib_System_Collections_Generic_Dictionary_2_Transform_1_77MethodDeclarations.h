﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>
struct Transform_1_t3907;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>
struct List_1_t768;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_78MethodDeclarations.h"
#define Transform_1__ctor_m24206(__this, ___object, ___method, method) (( void (*) (Transform_1_t3907 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24207_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m24208(__this, ___key, ___value, method) (( KeyValuePair_2_t3900  (*) (Transform_1_t3907 *, String_t*, List_1_t768 *, MethodInfo*))Transform_1_Invoke_m24209_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m24210(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3907 *, String_t*, List_1_t768 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m24211_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m24212(__this, ___result, method) (( KeyValuePair_2_t3900  (*) (Transform_1_t3907 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m24213_gshared)(__this, ___result, method)
