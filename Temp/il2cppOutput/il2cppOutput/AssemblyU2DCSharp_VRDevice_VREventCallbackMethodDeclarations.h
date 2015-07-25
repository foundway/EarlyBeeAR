#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VRDevice/VREventCallback
struct VREventCallback_t97;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void VRDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
extern "C" void VREventCallback__ctor_m344 (VREventCallback_t97 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice/VREventCallback::Invoke(System.Int32)
extern "C" void VREventCallback_Invoke_m345 (VREventCallback_t97 * __this, int32_t ___eventID, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t97(Il2CppObject* delegate, int32_t ___eventID);
// System.IAsyncResult VRDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * VREventCallback_BeginInvoke_m346 (VREventCallback_t97 * __this, int32_t ___eventID, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VRDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern "C" void VREventCallback_EndInvoke_m347 (VREventCallback_t97 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
