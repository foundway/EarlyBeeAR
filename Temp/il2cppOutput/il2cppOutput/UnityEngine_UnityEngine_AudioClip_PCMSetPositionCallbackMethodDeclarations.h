﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1090;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m6676 (PCMSetPositionCallback_t1090 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m6677 (PCMSetPositionCallback_t1090 * __this, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t1090(Il2CppObject* delegate, int32_t ___position);
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m6678 (PCMSetPositionCallback_t1090 * __this, int32_t ___position, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m6679 (PCMSetPositionCallback_t1090 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
