#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// StareInputModule
struct StareInputModule_t16;
// StareInputModule/StareEvent
struct StareEvent_t44;
// UnityEngine.GameObject
struct GameObject_t7;

// System.Void StareInputModule::.ctor()
extern "C" void StareInputModule__ctor_m107 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::add_OnStare(StareInputModule/StareEvent)
extern "C" void StareInputModule_add_OnStare_m108 (Object_t * __this /* static, unused */, StareEvent_t44 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::remove_OnStare(StareInputModule/StareEvent)
extern "C" void StareInputModule_remove_OnStare_m109 (Object_t * __this /* static, unused */, StareEvent_t44 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StareInputModule::ShouldActivateModule()
extern "C" bool StareInputModule_ShouldActivateModule_m110 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::DeactivateModule()
extern "C" void StareInputModule_DeactivateModule_m111 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StareInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool StareInputModule_IsPointerOverGameObject_m112 (StareInputModule_t16 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject StareInputModule::CurrentHoverObject()
extern "C" GameObject_t7 * StareInputModule_CurrentHoverObject_m113 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::Process()
extern "C" void StareInputModule_Process_m114 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::CastRayFromGaze()
extern "C" void StareInputModule_CastRayFromGaze_m115 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::UpdateCurrentObject()
extern "C" void StareInputModule_UpdateCurrentObject_m116 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::PlaceCursor()
extern "C" void StareInputModule_PlaceCursor_m117 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::HandlePendingClick()
extern "C" void StareInputModule_HandlePendingClick_m118 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StareInputModule::HandleTrigger()
extern "C" void StareInputModule_HandleTrigger_m119 (StareInputModule_t16 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
