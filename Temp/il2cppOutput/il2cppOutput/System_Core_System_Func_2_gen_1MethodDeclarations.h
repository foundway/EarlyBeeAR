#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<CardboardEye,CardboardHead>
struct Func_2_t94;
// System.Object
struct Object_t;
// CardboardHead
struct CardboardHead_t53;
// CardboardEye
struct CardboardEye_t76;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<CardboardEye,CardboardHead>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
#define Func_2__ctor_m901(__this, ___object, ___method, method) (( void (*) (Func_2_t94 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m17144_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<CardboardEye,CardboardHead>::Invoke(T)
#define Func_2_Invoke_m17145(__this, ___arg1, method) (( CardboardHead_t53 * (*) (Func_2_t94 *, CardboardEye_t76 *, MethodInfo*))Func_2_Invoke_m17146_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<CardboardEye,CardboardHead>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m17147(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t94 *, CardboardEye_t76 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m17148_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<CardboardEye,CardboardHead>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m17149(__this, ___result, method) (( CardboardHead_t53 * (*) (Func_2_t94 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m17150_gshared)(__this, ___result, method)
