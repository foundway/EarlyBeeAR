﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics2D
struct Physics2D_t499;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t501;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m6660 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m6661 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t502 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m6662 (Object_t * __this /* static, unused */, Vector2_t48 * ___origin, Vector2_t48 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t502 * ___raycastHit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t502  Physics2D_Raycast_m2689 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t502  Physics2D_Raycast_m6663 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t501* Physics2D_RaycastAll_m2585 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t501* Physics2D_INTERNAL_CALL_RaycastAll_m6664 (Object_t * __this /* static, unused */, Vector2_t48 * ___origin, Vector2_t48 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method) IL2CPP_METHOD_ATTR;
