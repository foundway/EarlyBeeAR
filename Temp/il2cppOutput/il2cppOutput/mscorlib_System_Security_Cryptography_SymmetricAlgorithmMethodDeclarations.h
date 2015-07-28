#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1891;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1890;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1880;
// System.String
struct String_t;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C" void SymmetricAlgorithm__ctor_m10047 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
extern "C" void SymmetricAlgorithm_System_IDisposable_Dispose_m10179 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
extern "C" void SymmetricAlgorithm_Finalize_m10033 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
extern "C" void SymmetricAlgorithm_Clear_m10067 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C" void SymmetricAlgorithm_Dispose_m10189 (SymmetricAlgorithm_t1891 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
extern "C" int32_t SymmetricAlgorithm_get_BlockSize_m10180 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_BlockSize(System.Int32)
extern "C" void SymmetricAlgorithm_set_BlockSize_m10105 (SymmetricAlgorithm_t1891 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
extern "C" int32_t SymmetricAlgorithm_get_FeedbackSize_m10181 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C" ByteU5BU5D_t679* SymmetricAlgorithm_get_IV_m13364 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C" void SymmetricAlgorithm_set_IV_m10063 (SymmetricAlgorithm_t1891 * __this, ByteU5BU5D_t679* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C" ByteU5BU5D_t679* SymmetricAlgorithm_get_Key_m10190 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C" void SymmetricAlgorithm_set_Key_m10062 (SymmetricAlgorithm_t1891 * __this, ByteU5BU5D_t679* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C" int32_t SymmetricAlgorithm_get_KeySize_m10182 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" void SymmetricAlgorithm_set_KeySize_m10104 (SymmetricAlgorithm_t1891 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
extern "C" KeySizesU5BU5D_t1890* SymmetricAlgorithm_get_LegalKeySizes_m10183 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
extern "C" int32_t SymmetricAlgorithm_get_Mode_m10184 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
extern "C" void SymmetricAlgorithm_set_Mode_m10064 (SymmetricAlgorithm_t1891 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
extern "C" int32_t SymmetricAlgorithm_get_Padding_m10185 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
extern "C" void SymmetricAlgorithm_set_Padding_m10103 (SymmetricAlgorithm_t1891 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateDecryptor_m10065 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
extern "C" Object_t * SymmetricAlgorithm_CreateEncryptor_m10036 (SymmetricAlgorithm_t1891 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C" SymmetricAlgorithm_t1891 * SymmetricAlgorithm_Create_m10061 (Object_t * __this /* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
