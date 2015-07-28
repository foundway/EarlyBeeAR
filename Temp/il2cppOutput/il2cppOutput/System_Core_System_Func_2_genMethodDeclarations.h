#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Single>
struct Func_2_t32;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m636_gshared (Func_2_t32 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Func_2__ctor_m636(__this, ___object, ___method, method) (( void (*) (Func_2_t32 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m636_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m15800_gshared (Func_2_t32 * __this, int32_t ___arg1, MethodInfo* method);
#define Func_2_Invoke_m15800(__this, ___arg1, method) (( float (*) (Func_2_t32 *, int32_t, MethodInfo*))Func_2_Invoke_m15800_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m15801_gshared (Func_2_t32 * __this, int32_t ___arg1, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m15801(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t32 *, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m15801_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m15802_gshared (Func_2_t32 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m15802(__this, ___result, method) (( float (*) (Func_2_t32 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m15802_gshared)(__this, ___result, method)
