﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X501
struct X501_t2091;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2085;
// System.Text.StringBuilder
struct StringBuilder_t493;

// System.Void Mono.Security.X509.X501::.cctor()
extern "C" void X501__cctor_m11338 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C" String_t* X501_ToString_m11339 (Object_t * __this /* static, unused */, ASN1_t2085 * ___seq, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C" String_t* X501_ToString_m11340 (Object_t * __this /* static, unused */, ASN1_t2085 * ___seq, bool ___reversed, String_t* ___separator, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C" void X501_AppendEntry_m11341 (Object_t * __this /* static, unused */, StringBuilder_t493 * ___sb, ASN1_t2085 * ___entry, bool ___quotes, MethodInfo* method) IL2CPP_METHOD_ATTR;