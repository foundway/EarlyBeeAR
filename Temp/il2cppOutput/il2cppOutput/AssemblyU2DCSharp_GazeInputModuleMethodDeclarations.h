#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GazeInputModule
struct GazeInputModule_t89;

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m271 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m272 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m273 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m274 (GazeInputModule_t89 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m275 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m276 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m277 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m278 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m279 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m280 (GazeInputModule_t89 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
