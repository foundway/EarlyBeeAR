#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2468;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1788;
// System.ResolveEventArgs
struct ResolveEventArgs_t2525;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m14554 (ResolveEventHandler_t2468 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1788 * ResolveEventHandler_Invoke_m14555 (ResolveEventHandler_t2468 * __this, Object_t * ___sender, ResolveEventArgs_t2525 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1788 * pinvoke_delegate_wrapper_ResolveEventHandler_t2468(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2525 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m14556 (ResolveEventHandler_t2468 * __this, Object_t * ___sender, ResolveEventArgs_t2525 * ___args, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1788 * ResolveEventHandler_EndInvoke_m14557 (ResolveEventHandler_t2468 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
