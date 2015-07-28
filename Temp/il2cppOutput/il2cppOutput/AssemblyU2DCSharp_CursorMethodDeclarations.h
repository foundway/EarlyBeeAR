#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Cursor
struct Cursor_t13;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Cursor::.ctor()
extern "C" void Cursor__ctor_m15 (Cursor_t13 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cursor::SetOffset(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Cursor_SetOffset_m16 (Cursor_t13 * __this, Vector3_t5  ___camPosition, Vector3_t5  ___forward, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cursor::SetProgress(System.Single)
extern "C" void Cursor_SetProgress_m17 (Cursor_t13 * __this, float ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
