#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<CardboardHead,System.Boolean>
struct Func_2_t3249;
// System.Object
struct Object_t;
// CardboardHead
struct CardboardHead_t53;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<CardboardHead,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_7MethodDeclarations.h"
#define Func_2__ctor_m17169(__this, ___object, ___method, method) (( void (*) (Func_2_t3249 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m16975_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<CardboardHead,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m17170(__this, ___arg1, method) (( bool (*) (Func_2_t3249 *, CardboardHead_t53 *, MethodInfo*))Func_2_Invoke_m16977_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<CardboardHead,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m17171(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3249 *, CardboardHead_t53 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m16979_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<CardboardHead,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m17172(__this, ___result, method) (( bool (*) (Func_2_t3249 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m16981_gshared)(__this, ___result, method)
