#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t4763;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m32624_gshared (Getter_2_t4763 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Getter_2__ctor_m32624(__this, ___object, ___method, method) (( void (*) (Getter_2_t4763 *, Object_t *, IntPtr_t, MethodInfo*))Getter_2__ctor_m32624_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m32625_gshared (Getter_2_t4763 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m32625(__this, ____this, method) (( Object_t * (*) (Getter_2_t4763 *, Object_t *, MethodInfo*))Getter_2_Invoke_m32625_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m32626_gshared (Getter_2_t4763 * __this, Object_t * ____this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m32626(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t4763 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Getter_2_BeginInvoke_m32626_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m32627_gshared (Getter_2_t4763 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m32627(__this, ___result, method) (( Object_t * (*) (Getter_2_t4763 *, Object_t *, MethodInfo*))Getter_2_EndInvoke_m32627_gshared)(__this, ___result, method)
