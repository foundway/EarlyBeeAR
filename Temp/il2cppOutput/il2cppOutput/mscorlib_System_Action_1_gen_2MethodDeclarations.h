#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t507;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t364;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_10MethodDeclarations.h"
#define Action_1__ctor_m2632(__this, ___object, ___method, method) (( void (*) (Action_1_t507 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m17191_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.Font>::Invoke(T)
#define Action_1_Invoke_m7303(__this, ___obj, method) (( void (*) (Action_1_t507 *, Font_t364 *, MethodInfo*))Action_1_Invoke_m17192_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.Font>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m19221(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t507 *, Font_t364 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m17194_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m19222(__this, ___result, method) (( void (*) (Action_1_t507 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m17196_gshared)(__this, ___result, method)
