#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Teleporter
struct Teleporter_t49;
// UnityEngine.Collider
struct Collider_t39;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Teleporter::.ctor()
extern "C" void Teleporter__ctor_m120 (Teleporter_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::Start()
extern "C" void Teleporter_Start_m121 (Teleporter_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::Update()
extern "C" void Teleporter_Update_m122 (Teleporter_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::OnTriggerEnter(UnityEngine.Collider)
extern "C" void Teleporter_OnTriggerEnter_m123 (Teleporter_t49 * __this, Collider_t39 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::ResetTime()
extern "C" void Teleporter_ResetTime_m124 (Teleporter_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::DoTeleport()
extern "C" void Teleporter_DoTeleport_m125 (Teleporter_t49 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Teleporter::FadeColor(UnityEngine.Color)
extern "C" void Teleporter_FadeColor_m126 (Teleporter_t49 * __this, Color_t51  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
