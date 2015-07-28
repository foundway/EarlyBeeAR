#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
struct Transform_1_t3855;
// System.Object
struct Object_t;
// Vuforia.WordResult
struct WordResult_t773;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_68MethodDeclarations.h"
#define Transform_1__ctor_m23533(__this, ___object, ___method, method) (( void (*) (Transform_1_t3855 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m23534_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m23535(__this, ___key, ___value, method) (( KeyValuePair_2_t3847  (*) (Transform_1_t3855 *, int32_t, WordResult_t773 *, MethodInfo*))Transform_1_Invoke_m23536_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m23537(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3855 *, int32_t, WordResult_t773 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m23538_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m23539(__this, ___result, method) (( KeyValuePair_2_t3847  (*) (Transform_1_t3855 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m23540_gshared)(__this, ___result, method)
