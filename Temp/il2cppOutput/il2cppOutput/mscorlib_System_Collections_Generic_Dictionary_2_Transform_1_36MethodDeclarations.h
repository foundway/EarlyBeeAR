#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image>
struct Transform_1_t3683;
// System.Object
struct Object_t;
// Vuforia.Image
struct Image_t632;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m21615(__this, ___object, ___method, method) (( void (*) (Transform_1_t3683 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m18038_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m21616(__this, ___key, ___value, method) (( Image_t632 * (*) (Transform_1_t3683 *, int32_t, Image_t632 *, MethodInfo*))Transform_1_Invoke_m18039_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m21617(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3683 *, int32_t, Image_t632 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m18040_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image,Vuforia.Image>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m21618(__this, ___result, method) (( Image_t632 * (*) (Transform_1_t3683 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m18041_gshared)(__this, ___result, method)
