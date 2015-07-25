#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<MazeCoord>
struct DefaultComparer_t3123;
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<MazeCoord>::.ctor()
extern "C" void DefaultComparer__ctor_m15930_gshared (DefaultComparer_t3123 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m15930(__this, method) (( void (*) (DefaultComparer_t3123 *, MethodInfo*))DefaultComparer__ctor_m15930_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<MazeCoord>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15931_gshared (DefaultComparer_t3123 * __this, MazeCoord_t28  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m15931(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3123 *, MazeCoord_t28 , MethodInfo*))DefaultComparer_GetHashCode_m15931_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<MazeCoord>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15932_gshared (DefaultComparer_t3123 * __this, MazeCoord_t28  ___x, MazeCoord_t28  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m15932(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3123 *, MazeCoord_t28 , MazeCoord_t28 , MethodInfo*))DefaultComparer_Equals_m15932_gshared)(__this, ___x, ___y, method)
