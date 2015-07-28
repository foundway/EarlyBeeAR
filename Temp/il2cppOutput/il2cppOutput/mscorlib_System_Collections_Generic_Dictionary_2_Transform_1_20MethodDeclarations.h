#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>
struct Transform_1_t3442;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t364;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t506;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
#define Transform_1__ctor_m19160(__this, ___object, ___method, method) (( void (*) (Transform_1_t3442 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18907_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19161(__this, ___key, ___value, method) (( Font_t364 * (*) (Transform_1_t3442 *, Font_t364 *, List_1_t506 *, MethodInfo*))Transform_1_Invoke_m18908_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19162(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3442 *, Font_t364 *, List_1_t506 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18909_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,UnityEngine.Font>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19163(__this, ___result, method) (( Font_t364 * (*) (Transform_1_t3442 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18910_gshared)(__this, ___result, method)
