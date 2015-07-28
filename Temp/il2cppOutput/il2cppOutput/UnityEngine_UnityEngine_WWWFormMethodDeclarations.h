#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t1059;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1057;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1058;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m6480 (WWWForm_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m6481 (WWWForm_t1059 * __this, String_t* ___fieldName, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m6482 (WWWForm_t1059 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t1058 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m6483 (WWWForm_t1059 * __this, String_t* ___fieldName, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t1057 * WWWForm_get_headers_m6484 (WWWForm_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t679* WWWForm_get_data_m6485 (WWWForm_t1059 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
