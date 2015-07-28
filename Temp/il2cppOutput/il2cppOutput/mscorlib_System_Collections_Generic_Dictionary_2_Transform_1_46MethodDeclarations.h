#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,Vuforia.VirtualButton>
struct Transform_1_t3734;
// System.Object
struct Object_t;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,Vuforia.VirtualButton>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m22192(__this, ___object, ___method, method) (( void (*) (Transform_1_t3734 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18038_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,Vuforia.VirtualButton>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m22193(__this, ___key, ___value, method) (( VirtualButton_t665 * (*) (Transform_1_t3734 *, int32_t, VirtualButton_t665 *, MethodInfo*))Transform_1_Invoke_m18039_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,Vuforia.VirtualButton>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m22194(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3734 *, int32_t, VirtualButton_t665 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18040_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VirtualButton,Vuforia.VirtualButton>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m22195(__this, ___result, method) (( VirtualButton_t665 * (*) (Transform_1_t3734 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18041_gshared)(__this, ___result, method)
