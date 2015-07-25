#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t1056;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1057;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1058;
// System.Byte[]
struct ByteU5BU5D_t679;
// UnityEngine.WWWForm
struct WWWForm_t1059;
// System.String[]
struct StringU5BU5D_t208;

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m6465 (WWW_t1056 * __this, String_t* ___url, WWWForm_t1059 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m6466 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m6467 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m6468 (WWW_t1056 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m6469 (WWW_t1056 * __this, String_t* ___url, ByteU5BU5D_t679* ___postData, StringU5BU5D_t208* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t1057 * WWW_get_responseHeaders_m6470 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m6471 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m6472 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t1058 * WWW_get_DefaultEncoding_m6473 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t1058 * WWW_GetTextEncoder_m6474 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t679* WWW_get_bytes_m6475 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m6476 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m6477 (WWW_t1056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t208* WWW_FlattenedHeadersFrom_m6478 (Object_t * __this /* static, unused */, Dictionary_2_t1057 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t1057 * WWW_ParseHTTPHeaderString_m6479 (Object_t * __this /* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
