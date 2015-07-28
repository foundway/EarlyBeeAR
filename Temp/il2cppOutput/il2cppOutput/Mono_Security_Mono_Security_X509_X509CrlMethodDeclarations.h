#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t1683;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1803;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1685;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1660;
// System.Security.Cryptography.DSA
struct DSA_t1661;
// System.Security.Cryptography.RSA
struct RSA_t1662;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1656;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m9457 (X509Crl_t1683 * __this, ByteU5BU5D_t679* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m9458 (X509Crl_t1683 * __this, ByteU5BU5D_t679* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t1803 * X509Crl_get_Extensions_m8959 (X509Crl_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t679* X509Crl_get_Hash_m9459 (X509Crl_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m8967 (X509Crl_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t700  X509Crl_get_NextUpdate_m8965 (X509Crl_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m9460 (X509Crl_t1683 * __this, ByteU5BU5D_t679* ___array1, ByteU5BU5D_t679* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t1685 * X509Crl_GetCrlEntry_m8963 (X509Crl_t1683 * __this, X509Certificate_t1660 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t1685 * X509Crl_GetCrlEntry_m9461 (X509Crl_t1683 * __this, ByteU5BU5D_t679* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m9462 (X509Crl_t1683 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m9463 (X509Crl_t1683 * __this, DSA_t1661 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m9464 (X509Crl_t1683 * __this, RSA_t1662 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m8962 (X509Crl_t1683 * __this, AsymmetricAlgorithm_t1656 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
