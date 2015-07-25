#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t1699;
// System.String
struct String_t;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1657;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1659;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
#include "System_System_Security_Cryptography_X509Certificates_X509Sub_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8289 (X509SubjectKeyIdentifierExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8290 (X509SubjectKeyIdentifierExtension_t1699 * __this, AsnEncodedData_t1657 * ___encodedSubjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8291 (X509SubjectKeyIdentifierExtension_t1699 * __this, ByteU5BU5D_t679* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8292 (X509SubjectKeyIdentifierExtension_t1699 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8293 (X509SubjectKeyIdentifierExtension_t1699 * __this, PublicKey_t1659 * ___key, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C" void X509SubjectKeyIdentifierExtension__ctor_m8294 (X509SubjectKeyIdentifierExtension_t1699 * __this, PublicKey_t1659 * ___key, int32_t ___algorithm, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C" String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m8295 (X509SubjectKeyIdentifierExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509SubjectKeyIdentifierExtension_CopyFrom_m8296 (X509SubjectKeyIdentifierExtension_t1699 * __this, AsnEncodedData_t1657 * ___encodedData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m8297 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C" uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m8298 (Object_t * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C" ByteU5BU5D_t679* X509SubjectKeyIdentifierExtension_FromHex_m8299 (Object_t * __this /* static, unused */, String_t* ___hex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C" int32_t X509SubjectKeyIdentifierExtension_Decode_m8300 (X509SubjectKeyIdentifierExtension_t1699 * __this, ByteU5BU5D_t679* ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C" ByteU5BU5D_t679* X509SubjectKeyIdentifierExtension_Encode_m8301 (X509SubjectKeyIdentifierExtension_t1699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C" String_t* X509SubjectKeyIdentifierExtension_ToString_m8302 (X509SubjectKeyIdentifierExtension_t1699 * __this, bool ___multiLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
