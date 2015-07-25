#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t828;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_11MethodDeclarations.h"
#define Action_1__ctor_m4933(__this, ___object, ___method, method) (( void (*) (Action_1_t828 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m21211_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m5607(__this, ___obj, method) (( void (*) (Action_1_t828 *, bool, MethodInfo*))Action_1_Invoke_m21212_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m21213(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t828 *, bool, AsyncCallback_t42 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m21214_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m21215(__this, ___result, method) (( void (*) (Action_1_t828 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m21216_gshared)(__this, ___result, method)
