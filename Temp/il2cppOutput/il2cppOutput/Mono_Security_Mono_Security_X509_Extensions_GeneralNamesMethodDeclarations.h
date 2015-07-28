#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1901;
// System.String[]
struct StringU5BU5D_t208;
// Mono.Security.ASN1
struct ASN1_t1671;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m9499 (GeneralNames_t1901 * __this, ASN1_t1671 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t208* GeneralNames_get_DNSNames_m9500 (GeneralNames_t1901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t208* GeneralNames_get_IPAddresses_m9501 (GeneralNames_t1901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m9502 (GeneralNames_t1901 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
