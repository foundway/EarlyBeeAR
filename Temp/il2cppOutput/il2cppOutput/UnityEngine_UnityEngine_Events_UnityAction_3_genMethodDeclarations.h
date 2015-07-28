#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t4626;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_3__ctor_m31561_gshared (UnityAction_3_t4626 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define UnityAction_3__ctor_m31561(__this, ___object, ___method, method) (( void (*) (UnityAction_3_t4626 *, Object_t *, IntPtr_t, MethodInfo*))UnityAction_3__ctor_m31561_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
extern "C" void UnityAction_3_Invoke_m31562_gshared (UnityAction_3_t4626 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method);
#define UnityAction_3_Invoke_m31562(__this, ___arg0, ___arg1, ___arg2, method) (( void (*) (UnityAction_3_t4626 *, Object_t *, Object_t *, Object_t *, MethodInfo*))UnityAction_3_Invoke_m31562_gshared)(__this, ___arg0, ___arg1, ___arg2, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_3_BeginInvoke_m31563_gshared (UnityAction_3_t4626 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_3_BeginInvoke_m31563(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (UnityAction_3_t4626 *, Object_t *, Object_t *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))UnityAction_3_BeginInvoke_m31563_gshared)(__this, ___arg0, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_3_EndInvoke_m31564_gshared (UnityAction_3_t4626 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_3_EndInvoke_m31564(__this, ___result, method) (( void (*) (UnityAction_3_t4626 *, Object_t *, MethodInfo*))UnityAction_3_EndInvoke_m31564_gshared)(__this, ___result, method)
