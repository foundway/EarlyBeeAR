#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t3462;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m19360_gshared (DefaultComparer_t3462 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m19360(__this, method) (( void (*) (DefaultComparer_t3462 *, MethodInfo*))DefaultComparer__ctor_m19360_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m19361_gshared (DefaultComparer_t3462 * __this, UIVertex_t395  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m19361(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3462 *, UIVertex_t395 , MethodInfo*))DefaultComparer_GetHashCode_m19361_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m19362_gshared (DefaultComparer_t3462 * __this, UIVertex_t395  ___x, UIVertex_t395  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m19362(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3462 *, UIVertex_t395 , UIVertex_t395 , MethodInfo*))DefaultComparer_Equals_m19362_gshared)(__this, ___x, ___y, method)
