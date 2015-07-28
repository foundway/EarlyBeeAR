﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t2082;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1892;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void KeyGeneratedEventHandler__ctor_m11269 (KeyGeneratedEventHandler_t2082 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C" void KeyGeneratedEventHandler_Invoke_m11270 (KeyGeneratedEventHandler_t2082 * __this, Object_t * ___sender, EventArgs_t1892 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t2082(Il2CppObject* delegate, Object_t * ___sender, EventArgs_t1892 * ___e);
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * KeyGeneratedEventHandler_BeginInvoke_m11271 (KeyGeneratedEventHandler_t2082 * __this, Object_t * ___sender, EventArgs_t1892 * ___e, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void KeyGeneratedEventHandler_EndInvoke_m11272 (KeyGeneratedEventHandler_t2082 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
