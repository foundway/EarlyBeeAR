#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ShimEnumerator_t4129;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t4117;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26684_gshared (ShimEnumerator_t4129 * __this, Dictionary_2_t4117 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m26684(__this, ___host, method) (( void (*) (ShimEnumerator_t4129 *, Dictionary_2_t4117 *, MethodInfo*))ShimEnumerator__ctor_m26684_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26685_gshared (ShimEnumerator_t4129 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m26685(__this, method) (( bool (*) (ShimEnumerator_t4129 *, MethodInfo*))ShimEnumerator_MoveNext_m26685_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m26686_gshared (ShimEnumerator_t4129 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m26686(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4129 *, MethodInfo*))ShimEnumerator_get_Entry_m26686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26687_gshared (ShimEnumerator_t4129 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m26687(__this, method) (( Object_t * (*) (ShimEnumerator_t4129 *, MethodInfo*))ShimEnumerator_get_Key_m26687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26688_gshared (ShimEnumerator_t4129 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m26688(__this, method) (( Object_t * (*) (ShimEnumerator_t4129 *, MethodInfo*))ShimEnumerator_get_Value_m26688_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26689_gshared (ShimEnumerator_t4129 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m26689(__this, method) (( Object_t * (*) (ShimEnumerator_t4129 *, MethodInfo*))ShimEnumerator_get_Current_m26689_gshared)(__this, method)
