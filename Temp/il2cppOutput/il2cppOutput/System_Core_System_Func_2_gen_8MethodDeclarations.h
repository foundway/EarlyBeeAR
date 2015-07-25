#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Single>
struct Func_2_t3612;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m20840_gshared (Func_2_t3612 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m20840(__this, ___object, ___method, method) (( void (*) (Func_2_t3612 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m20840_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m20841_gshared (Func_2_t3612 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m20841(__this, ___arg1, method) (( float (*) (Func_2_t3612 *, Object_t *, MethodInfo*))Func_2_Invoke_m20841_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m20843_gshared (Func_2_t3612 * __this, Object_t * ___arg1, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m20843(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3612 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m20843_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m20845_gshared (Func_2_t3612 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m20845(__this, ___result, method) (( float (*) (Func_2_t3612 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m20845_gshared)(__this, ___result, method)
