#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StareInputModule/StareEvent
struct StareEvent_t44;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Camera
struct Camera_t15;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void StareInputModule/StareEvent::.ctor(System.Object,System.IntPtr)
extern "C" void StareEvent__ctor_m103 (StareEvent_t44 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule/StareEvent::Invoke(UnityEngine.GameObject,UnityEngine.Camera,System.Single)
extern "C" void StareEvent_Invoke_m104 (StareEvent_t44 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_StareEvent_t44(Il2CppObject* delegate, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance);
// System.IAsyncResult StareInputModule/StareEvent::BeginInvoke(UnityEngine.GameObject,UnityEngine.Camera,System.Single,System.AsyncCallback,System.Object)
extern "C" Object_t * StareEvent_BeginInvoke_m105 (StareEvent_t44 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule/StareEvent::EndInvoke(System.IAsyncResult)
extern "C" void StareEvent_EndInvoke_m106 (StareEvent_t44 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
