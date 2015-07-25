﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2344;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2300;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
extern "C" void HeaderHandler__ctor_m14538 (HeaderHandler_t2344 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
extern "C" Object_t * HeaderHandler_Invoke_m14539 (HeaderHandler_t2344 * __this, HeaderU5BU5D_t2300* ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_HeaderHandler_t2344(Il2CppObject* delegate, HeaderU5BU5D_t2300* ___headers);
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
extern "C" Object_t * HeaderHandler_BeginInvoke_m14540 (HeaderHandler_t2344 * __this, HeaderU5BU5D_t2300* ___headers, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
extern "C" Object_t * HeaderHandler_EndInvoke_m14541 (HeaderHandler_t2344 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
