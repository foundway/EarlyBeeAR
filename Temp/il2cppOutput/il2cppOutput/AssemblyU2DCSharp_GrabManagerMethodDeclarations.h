#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GrabManager
struct GrabManager_t17;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Camera
struct Camera_t15;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GrabManager::.ctor()
extern "C" void GrabManager__ctor_m19 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabManager::Start()
extern "C" void GrabManager_Start_m20 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GrabManager::get_hasGrab()
extern "C" bool GrabManager_get_hasGrab_m21 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabManager::StartGrab(UnityEngine.GameObject,UnityEngine.Camera,System.Single)
extern "C" void GrabManager_StartGrab_m22 (GrabManager_t17 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___dist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabManager::EndGrab()
extern "C" void GrabManager_EndGrab_m23 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrabManager::Update()
extern "C" void GrabManager_Update_m24 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GrabManager::GetShakePoint()
extern "C" Vector3_t5  GrabManager_GetShakePoint_m25 (GrabManager_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
