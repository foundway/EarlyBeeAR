#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<CardboardEye,System.Boolean>
struct Func_2_t210;
// System.Object
struct Object_t;
// CardboardEye
struct CardboardEye_t76;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<CardboardEye,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_7MethodDeclarations.h"
#define Func_2__ctor_m900(__this, ___object, ___method, method) (( void (*) (Func_2_t210 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m16975_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<CardboardEye,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m16976(__this, ___arg1, method) (( bool (*) (Func_2_t210 *, CardboardEye_t76 *, MethodInfo*))Func_2_Invoke_m16977_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<CardboardEye,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16978(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t210 *, CardboardEye_t76 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m16979_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<CardboardEye,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16980(__this, ___result, method) (( bool (*) (Func_2_t210 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m16981_gshared)(__this, ___result, method)
