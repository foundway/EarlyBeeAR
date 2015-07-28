﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t1965_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t1925_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1800_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1660_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1921_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1903_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1900_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1616_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1905_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1920_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1950_il2cpp_TypeInfo;
extern TypeInfo Int64_t1257_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1956_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t679_il2cpp_TypeInfo;
extern TypeInfo Byte_t535_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1628_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1896_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo Exception_t180_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1906_il2cpp_TypeInfo;
extern TypeInfo Regex_t213_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t1715_il2cpp_TypeInfo;
extern TypeInfo Match_t1704_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t1713_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t1255_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t96_0_0_0;
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m9938_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m9943_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m9939_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m9641_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m9900_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m9909_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m9976_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m9435_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m9922_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m9923_MethodInfo;
extern MethodInfo X509Certificate__ctor_m8935_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m9438_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m9978_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m8921_MethodInfo;
extern MethodInfo Context_get_Negotiating_m9685_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m9755_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m9548_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m8957_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m8958_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m9503_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m9494_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m9506_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m9497_MethodInfo;
extern MethodInfo ArrayList_Contains_m10108_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m9508_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m9510_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m9601_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m9792_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m9796_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m9762_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m9763_MethodInfo;
extern MethodInfo String_Format_m2620_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo TlsException__ctor_m9894_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m8930_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m8988_MethodInfo;
extern MethodInfo X509Certificate__ctor_m10146_MethodInfo;
extern MethodInfo ArrayList__ctor_m8824_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m9977_MethodInfo;
extern MethodInfo ArrayList_Add_m8835_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m9979_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m9436_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m9443_MethodInfo;
extern MethodInfo X509Chain__ctor_m9446_MethodInfo;
extern MethodInfo X509Chain_Build_m9449_MethodInfo;
extern MethodInfo X509Chain_get_Status_m9447_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo ArrayList_ToArray_m8954_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m9795_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m9642_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m9882_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m9512_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m9514_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m9981_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m9515_MethodInfo;
extern MethodInfo String_op_Equality_m653_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m9424_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m9980_MethodInfo;
extern MethodInfo Regex__ctor_m915_MethodInfo;
extern MethodInfo Regex_Matches_m8414_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m8387_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m8389_MethodInfo;
extern MethodInfo Group_get_Success_m8366_MethodInfo;
extern MethodInfo Match_get_Groups_m8380_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m8370_MethodInfo;
extern MethodInfo Capture_get_Value_m8351_MethodInfo;
extern MethodInfo String_ToString_m7273_MethodInfo;
extern MethodInfo String_IndexOf_m2821_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m7355_MethodInfo;
extern MethodInfo String_Compare_m8866_MethodInfo;
extern MethodInfo String_get_Length_m2751_MethodInfo;
extern MethodInfo String_get_Chars_m2767_MethodInfo;
extern MethodInfo String_IndexOf_m7267_MethodInfo;
extern MethodInfo String_Substring_m2792_MethodInfo;
extern MethodInfo String_Compare_m10177_MethodInfo;
extern MethodInfo String_Substring_m2768_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m9973_MethodInfo;
extern "C" void TlsServerCertificate__ctor_m9973 (TlsServerCertificate_t1965 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m9974_MethodInfo;
extern "C" void TlsServerCertificate_Update_m9974 (TlsServerCertificate_t1965 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m9943(__this, /*hidden argument*/&HandshakeMessage_Update_m9943_MethodInfo);
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1930 * L_1 = Context_get_ServerSettings_m9641(L_0, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		X509CertificateCollection_t1800 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m9900(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m9900_MethodInfo);
		Context_t1914 * L_3 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1930 * L_4 = Context_get_ServerSettings_m9641(L_3, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m9909(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m9909_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m9975_MethodInfo;
extern "C" void TlsServerCertificate_ProcessAsSsl3_m9975 (TlsServerCertificate_t1965 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m9976_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C" void TlsServerCertificate_ProcessAsTls1_m9976 (TlsServerCertificate_t1965 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t679* V_3 = {0};
	X509Certificate_t1660 * V_4 = {0};
	{
		X509CertificateCollection_t1800 * L_0 = (X509CertificateCollection_t1800 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1800_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m9435(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m9435_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m9922(__this, /*hidden argument*/&TlsStream_ReadInt24_m9922_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m9922(__this, /*hidden argument*/&TlsStream_ReadInt24_m9922_MethodInfo);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t679* L_6 = TlsStream_ReadBytes_m9923(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		V_3 = L_6;
		ByteU5BU5D_t679* L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t1660_il2cpp_TypeInfo));
		X509Certificate_t1660 * L_8 = (X509Certificate_t1660 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1660_il2cpp_TypeInfo));
		X509Certificate__ctor_m8935(L_8, L_7, /*hidden argument*/&X509Certificate__ctor_m8935_MethodInfo);
		V_4 = L_8;
		X509CertificateCollection_t1800 * L_9 = (__this->___certificates_9);
		X509Certificate_t1660 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m9438(L_9, L_10, /*hidden argument*/&X509CertificateCollection_Add_m9438_MethodInfo);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t1800 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m9978(__this, L_15, /*hidden argument*/&TlsServerCertificate_validateCertificates_m9978_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkCertificateUsage_m9977 (TlsServerCertificate_t1965 * __this, X509Certificate_t1660 * ___cert, MethodInfo* method)
{
	ClientContext_t1921 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t1903 * V_2 = {0};
	ExtendedKeyUsageExtension_t1900 * V_3 = {0};
	X509Extension_t1684 * V_4 = {0};
	NetscapeCertTypeExtension_t1905 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		V_0 = ((ClientContext_t1921 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1921_il2cpp_TypeInfo)));
		X509Certificate_t1660 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m8921(L_1, /*hidden argument*/&X509Certificate_get_Version_m8921_MethodInfo);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t1921 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t1932 * L_4 = Context_get_Negotiating_m9685(L_3, /*hidden argument*/&Context_get_Negotiating_m9685_MethodInfo);
		NullCheck(L_4);
		CipherSuite_t1915 * L_5 = SecurityParameters_get_Cipher_m9755(L_4, /*hidden argument*/&SecurityParameters_get_Cipher_m9755_MethodInfo);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m9548(L_5, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m9548_MethodInfo);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t1903 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t1900 *)NULL;
		X509Certificate_t1660 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t1803 * L_9 = X509Certificate_get_Extensions_m8957(L_8, /*hidden argument*/&X509Certificate_get_Extensions_m8957_MethodInfo);
		NullCheck(L_9);
		X509Extension_t1684 * L_10 = X509ExtensionCollection_get_Item_m8958(L_9, (String_t*) &_stringLiteral812, /*hidden argument*/&X509ExtensionCollection_get_Item_m8958_MethodInfo);
		V_4 = L_10;
		X509Extension_t1684 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t1684 * L_12 = V_4;
		KeyUsageExtension_t1903 * L_13 = (KeyUsageExtension_t1903 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t1903_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m9503(L_13, L_12, /*hidden argument*/&KeyUsageExtension__ctor_m9503_MethodInfo);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t1660 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t1803 * L_15 = X509Certificate_get_Extensions_m8957(L_14, /*hidden argument*/&X509Certificate_get_Extensions_m8957_MethodInfo);
		NullCheck(L_15);
		X509Extension_t1684 * L_16 = X509ExtensionCollection_get_Item_m8958(L_15, (String_t*) &_stringLiteral819, /*hidden argument*/&X509ExtensionCollection_get_Item_m8958_MethodInfo);
		V_4 = L_16;
		X509Extension_t1684 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t1684 * L_18 = V_4;
		ExtendedKeyUsageExtension_t1900 * L_19 = (ExtendedKeyUsageExtension_t1900 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t1900_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m9494(L_19, L_18, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m9494_MethodInfo);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t1903 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t1900 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t1903 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m9506(L_22, L_23, /*hidden argument*/&KeyUsageExtension_Support_m9506_MethodInfo);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t1900 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1616 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m9497(L_25, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m9497_MethodInfo);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m10108_MethodInfo, L_26, (String_t*) &_stringLiteral823);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t1900 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t1616 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m9497(L_28, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m9497_MethodInfo);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m10108_MethodInfo, L_29, (String_t*) &_stringLiteral1263);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t1903 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t1903 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m9506(L_32, L_33, /*hidden argument*/&KeyUsageExtension_Support_m9506_MethodInfo);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t1900 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t1900 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t1616 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m9497(L_36, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m9497_MethodInfo);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m10108_MethodInfo, L_37, (String_t*) &_stringLiteral823);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t1900 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t1616 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m9497(L_39, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m9497_MethodInfo);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m10108_MethodInfo, L_40, (String_t*) &_stringLiteral1263);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t1660 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t1803 * L_43 = X509Certificate_get_Extensions_m8957(L_42, /*hidden argument*/&X509Certificate_get_Extensions_m8957_MethodInfo);
		NullCheck(L_43);
		X509Extension_t1684 * L_44 = X509ExtensionCollection_get_Item_m8958(L_43, (String_t*) &_stringLiteral850, /*hidden argument*/&X509ExtensionCollection_get_Item_m8958_MethodInfo);
		V_4 = L_44;
		X509Extension_t1684 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t1684 * L_46 = V_4;
		NetscapeCertTypeExtension_t1905 * L_47 = (NetscapeCertTypeExtension_t1905 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t1905_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m9508(L_47, L_46, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m9508_MethodInfo);
		V_5 = L_47;
		NetscapeCertTypeExtension_t1905 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m9510(L_48, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m9510_MethodInfo);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_validateCertificates_m9978 (TlsServerCertificate_t1965 * __this, X509CertificateCollection_t1800 * ___certificates, MethodInfo* method)
{
	static bool TlsServerCertificate_validateCertificates_m9978_init;
	if (!TlsServerCertificate_validateCertificates_m9978_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		TlsServerCertificate_validateCertificates_m9978_init = true;
	}
	ClientContext_t1921 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t1950 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t1660 * V_5 = {0};
	X509Certificate_t1628 * V_6 = {0};
	ArrayList_t1616 * V_7 = {0};
	X509CertificateCollection_t1800 * V_8 = {0};
	X509Chain_t1896 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t34* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		V_0 = ((ClientContext_t1921 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1921_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		ClientContext_t1921 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t1920 * L_2 = ClientContext_get_SslStream_m9601(L_1, /*hidden argument*/&ClientContext_get_SslStream_m9601_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m9792_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t1921 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t1920 * L_5 = ClientContext_get_SslStream_m9601(L_4, /*hidden argument*/&ClientContext_get_SslStream_m9601_MethodInfo);
		X509CertificateCollection_t1800 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t1950 * L_7 = (ValidationResult_t1950 *)VirtFuncInvoker1< ValidationResult_t1950 *, X509CertificateCollection_t1800 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m9796_MethodInfo, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t1950 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m9762(L_8, /*hidden argument*/&ValidationResult_get_Trusted_m9762_MethodInfo);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t1950 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m9763(L_10, /*hidden argument*/&ValidationResult_get_ErrorCode_m9763_MethodInfo);
		V_3 = (((int64_t)L_11));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(InitializedTypeInfo(&Int64_t1257_il2cpp_TypeInfo), &L_17);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m2620(NULL /*static, unused*/, (String_t*) &_stringLiteral1264, L_18, /*hidden argument*/&String_Format_m2620_MethodInfo);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral1265, L_21, /*hidden argument*/&String_Concat_m731_MethodInfo);
		TlsException_t1956 * L_23 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_23, L_20, L_22, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t1800 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t1660 * L_25 = X509CertificateCollection_get_Item_m8930(L_24, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m8930_MethodInfo);
		V_5 = L_25;
		X509Certificate_t1660 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t679* L_27 = (ByteU5BU5D_t679*)VirtFuncInvoker0< ByteU5BU5D_t679* >::Invoke(&X509Certificate_get_RawData_m8988_MethodInfo, L_26);
		X509Certificate_t1628 * L_28 = (X509Certificate_t1628 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1628_il2cpp_TypeInfo));
		X509Certificate__ctor_m10146(L_28, L_27, /*hidden argument*/&X509Certificate__ctor_m10146_MethodInfo);
		V_6 = L_28;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1616_il2cpp_TypeInfo));
		ArrayList_t1616 * L_29 = (ArrayList_t1616 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1616_il2cpp_TypeInfo));
		ArrayList__ctor_m8824(L_29, /*hidden argument*/&ArrayList__ctor_m8824_MethodInfo);
		V_7 = L_29;
		X509Certificate_t1660 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m9977(__this, L_30, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m9977_MethodInfo);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t1616 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t1660 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m9979(__this, L_35, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m9979_MethodInfo);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1616 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t1800 * L_40 = ___certificates;
		X509CertificateCollection_t1800 * L_41 = (X509CertificateCollection_t1800 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1800_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m9436(L_41, L_40, /*hidden argument*/&X509CertificateCollection__ctor_m9436_MethodInfo);
		V_8 = L_41;
		X509CertificateCollection_t1800 * L_42 = V_8;
		X509Certificate_t1660 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m9443(L_42, L_43, /*hidden argument*/&X509CertificateCollection_Remove_m9443_MethodInfo);
		X509CertificateCollection_t1800 * L_44 = V_8;
		X509Chain_t1896 * L_45 = (X509Chain_t1896 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t1896_il2cpp_TypeInfo));
		X509Chain__ctor_m9446(L_45, L_44, /*hidden argument*/&X509Chain__ctor_m9446_MethodInfo);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t1896 * L_46 = V_9;
		X509Certificate_t1660 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m9449(L_46, L_47, /*hidden argument*/&X509Chain_Build_m9449_MethodInfo);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t180_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t1896 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m9447(L_50, /*hidden argument*/&X509Chain_get_Status_m9447_MethodInfo);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t1616 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t1616 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t1616 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1616 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1616 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1616 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1616 * L_76 = V_7;
		X509Chain_t1896 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m9447(L_77, /*hidden argument*/&X509Chain_get_Status_m9447_MethodInfo);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8835_MethodInfo, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t1616 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_82 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(&Int32_t96_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m8954_MethodInfo, L_81, L_82);
		V_11 = ((Int32U5BU5D_t34*)Castclass(L_83, Int32U5BU5D_t34_il2cpp_TypeInfo_var));
		ClientContext_t1921 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t1920 * L_85 = ClientContext_get_SslStream_m9601(L_84, /*hidden argument*/&ClientContext_get_SslStream_m9601_MethodInfo);
		X509Certificate_t1628 * L_86 = V_6;
		Int32U5BU5D_t34* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1628 *, Int32U5BU5D_t34* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m9795_MethodInfo, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t1956 * L_90 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_90, L_89, (String_t*) &_stringLiteral1266, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C" bool TlsServerCertificate_checkServerIdentity_m9979 (TlsServerCertificate_t1965 * __this, X509Certificate_t1660 * ___cert, MethodInfo* method)
{
	ClientContext_t1921 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t1684 * V_2 = {0};
	SubjectAltNameExtension_t1906 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t208* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t208* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		V_0 = ((ClientContext_t1921 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1921_il2cpp_TypeInfo)));
		ClientContext_t1921 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t1931 * L_2 = Context_get_ClientSettings_m9642(L_1, /*hidden argument*/&Context_get_ClientSettings_m9642_MethodInfo);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m9882(L_2, /*hidden argument*/&TlsClientSettings_get_TargetHost_m9882_MethodInfo);
		V_1 = L_3;
		X509Certificate_t1660 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t1803 * L_5 = X509Certificate_get_Extensions_m8957(L_4, /*hidden argument*/&X509Certificate_get_Extensions_m8957_MethodInfo);
		NullCheck(L_5);
		X509Extension_t1684 * L_6 = X509ExtensionCollection_get_Item_m8958(L_5, (String_t*) &_stringLiteral849, /*hidden argument*/&X509ExtensionCollection_get_Item_m8958_MethodInfo);
		V_2 = L_6;
		X509Extension_t1684 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t1684 * L_8 = V_2;
		SubjectAltNameExtension_t1906 * L_9 = (SubjectAltNameExtension_t1906 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t1906_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m9512(L_9, L_8, /*hidden argument*/&SubjectAltNameExtension__ctor_m9512_MethodInfo);
		V_3 = L_9;
		SubjectAltNameExtension_t1906 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t208* L_11 = SubjectAltNameExtension_get_DNSNames_m9514(L_10, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m9514_MethodInfo);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t208* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m9981(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/&TlsServerCertificate_Match_m9981_MethodInfo);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t208* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t1906 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t208* L_22 = SubjectAltNameExtension_get_IPAddresses_m9515(L_21, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m9515_MethodInfo);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t208* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_28 = String_op_Equality_m653(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t208* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t1660 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m9424_MethodInfo, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m9980(__this, L_33, /*hidden argument*/&TlsServerCertificate_checkDomainName_m9980_MethodInfo);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C" bool TlsServerCertificate_checkDomainName_m9980 (TlsServerCertificate_t1965 * __this, String_t* ___subjectName, MethodInfo* method)
{
	ClientContext_t1921 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t213 * V_2 = {0};
	MatchCollection_t1715 * V_3 = {0};
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		V_0 = ((ClientContext_t1921 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1921_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t213_il2cpp_TypeInfo));
		Regex_t213 * L_2 = (Regex_t213 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t213_il2cpp_TypeInfo));
		Regex__ctor_m915(L_2, (String_t*) &_stringLiteral1267, /*hidden argument*/&Regex__ctor_m915_MethodInfo);
		V_2 = L_2;
		Regex_t213 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t1715 * L_5 = Regex_Matches_m8414(L_3, L_4, /*hidden argument*/&Regex_Matches_m8414_MethodInfo);
		V_3 = L_5;
		MatchCollection_t1715 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m8387_MethodInfo, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1715 * L_8 = V_3;
		NullCheck(L_8);
		Match_t1704 * L_9 = (Match_t1704 *)VirtFuncInvoker1< Match_t1704 *, int32_t >::Invoke(&MatchCollection_get_Item_m8389_MethodInfo, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m8366(L_9, /*hidden argument*/&Group_get_Success_m8366_MethodInfo);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t1715 * L_11 = V_3;
		NullCheck(L_11);
		Match_t1704 * L_12 = (Match_t1704 *)VirtFuncInvoker1< Match_t1704 *, int32_t >::Invoke(&MatchCollection_get_Item_m8389_MethodInfo, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t1713 * L_13 = (GroupCollection_t1713 *)VirtFuncInvoker0< GroupCollection_t1713 * >::Invoke(&Match_get_Groups_m8380_MethodInfo, L_12);
		NullCheck(L_13);
		Group_t1711 * L_14 = GroupCollection_get_Item_m8370(L_13, 1, /*hidden argument*/&GroupCollection_get_Item_m8370_MethodInfo);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m8351(L_14, /*hidden argument*/&Capture_get_Value_m8351_MethodInfo);
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m7273_MethodInfo, L_15);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t1921 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t1931 * L_18 = Context_get_ClientSettings_m9642(L_17, /*hidden argument*/&Context_get_ClientSettings_m9642_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m9882(L_18, /*hidden argument*/&TlsClientSettings_get_TargetHost_m9882_MethodInfo);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m9981(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&TlsServerCertificate_Match_m9981_MethodInfo);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C" bool TlsServerCertificate_Match_m9981 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2821(L_0, ((int32_t)42), /*hidden argument*/&String_IndexOf_m2821_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_5 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_6 = String_Compare_m8866(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/&String_Compare_m8866_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m2751(L_8, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m2767(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2767_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m7267(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/&String_IndexOf_m7267_MethodInfo);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m2792(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/&String_Substring_m2792_MethodInfo);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m2751(L_20, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m2751(L_22, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m2751(L_28, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_30 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_31 = String_Compare_m10177(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/&String_Compare_m10177_MethodInfo);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m2821(L_33, ((int32_t)46), /*hidden argument*/&String_IndexOf_m2821_MethodInfo);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m2751(L_37, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m2751(L_39, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m2768(L_41, 0, L_42, /*hidden argument*/&String_Substring_m2768_MethodInfo);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m2751(L_46, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_48 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_49 = String_Compare_m10177(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/&String_Compare_m10177_MethodInfo);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t1966_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t1957_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1958_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1671_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t208_il2cpp_TypeInfo;
extern TypeInfo Encoding_t1058_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern Il2CppType ClientCertificateTypeU5BU5D_t1957_0_0_0;
extern Il2CppType StringU5BU5D_t208_0_0_0;
extern MethodInfo TlsServerSettings_set_CertificateTypes_m9907_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m9908_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m9906_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m9985_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m9920_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m9921_MethodInfo;
extern MethodInfo ASN1__ctor_m8890_MethodInfo;
extern MethodInfo ASN1_get_Count_m8894_MethodInfo;
extern MethodInfo ASN1_get_Item_m8895_MethodInfo;
extern MethodInfo ASN1_get_Value_m8893_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m7271_MethodInfo;
extern MethodInfo Encoding_GetString_m8925_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m9982_MethodInfo;
extern "C" void TlsServerCertificateRequest__ctor_m9982 (TlsServerCertificateRequest_t1966 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m9983_MethodInfo;
extern "C" void TlsServerCertificateRequest_Update_m9983 (TlsServerCertificateRequest_t1966 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m9943(__this, /*hidden argument*/&HandshakeMessage_Update_m9943_MethodInfo);
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1930 * L_1 = Context_get_ServerSettings_m9641(L_0, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		ClientCertificateTypeU5BU5D_t1957* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m9907(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m9907_MethodInfo);
		Context_t1914 * L_3 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1930 * L_4 = Context_get_ServerSettings_m9641(L_3, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		StringU5BU5D_t208* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m9908(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m9908_MethodInfo);
		Context_t1914 * L_6 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t1930 * L_7 = Context_get_ServerSettings_m9641(L_6, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m9906(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m9906_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m9984_MethodInfo;
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m9984 (TlsServerCertificateRequest_t1966 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m9985_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t1957_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t208_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m9985 (TlsServerCertificateRequest_t1966 * __this, MethodInfo* method)
{
	static bool TlsServerCertificateRequest_ProcessAsTls1_m9985_init;
	if (!TlsServerCertificateRequest_ProcessAsTls1_m9985_init)
	{
		ClientCertificateTypeU5BU5D_t1957_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ClientCertificateTypeU5BU5D_t1957_0_0_0);
		StringU5BU5D_t208_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t208_0_0_0);
		TlsServerCertificateRequest_ProcessAsTls1_m9985_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t1671 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t1671 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m9920(__this, /*hidden argument*/&TlsStream_ReadByte_m9920_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t1957*)SZArrayNew(ClientCertificateTypeU5BU5D_t1957_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t1957* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m9920(__this, /*hidden argument*/&TlsStream_ReadByte_m9920_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3)) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		ByteU5BU5D_t679* L_10 = TlsStream_ReadBytes_m9923(__this, L_9, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		ASN1_t1671 * L_11 = (ASN1_t1671 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1671_il2cpp_TypeInfo));
		ASN1__ctor_m8890(L_11, L_10, /*hidden argument*/&ASN1__ctor_m8890_MethodInfo);
		V_2 = L_11;
		ASN1_t1671 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m8894(L_12, /*hidden argument*/&ASN1_get_Count_m8894_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t208*)SZArrayNew(StringU5BU5D_t208_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t1671 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t1671 * L_16 = ASN1_get_Item_m8895(L_14, L_15, /*hidden argument*/&ASN1_get_Item_m8895_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t679* L_17 = ASN1_get_Value_m8893(L_16, /*hidden argument*/&ASN1_get_Value_m8893_MethodInfo);
		ASN1_t1671 * L_18 = (ASN1_t1671 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1671_il2cpp_TypeInfo));
		ASN1__ctor_m8890(L_18, L_17, /*hidden argument*/&ASN1__ctor_m8890_MethodInfo);
		V_4 = L_18;
		StringU5BU5D_t208* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1058_il2cpp_TypeInfo));
		Encoding_t1058 * L_21 = Encoding_get_UTF8_m7271(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m7271_MethodInfo);
		ASN1_t1671 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t1671 * L_23 = ASN1_get_Item_m8895(L_22, 1, /*hidden argument*/&ASN1_get_Item_m8895_MethodInfo);
		NullCheck(L_23);
		ByteU5BU5D_t679* L_24 = ASN1_get_Value_m8893(L_23, /*hidden argument*/&ASN1_get_Value_m8893_MethodInfo);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t679* >::Invoke(&Encoding_GetString_m8925_MethodInfo, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20)) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t1671 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m8894(L_28, /*hidden argument*/&ASN1_get_Count_m8894_MethodInfo);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t1967_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1980_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1954_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t1884_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1915_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1926_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1909_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t679_0_0_0;
extern MethodInfo RuntimeHelpers_InitializeArray_m881_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m9646_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m9666_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m9806_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m9653_MethodInfo;
extern MethodInfo TlsStream_ToArray_m9930_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m10053_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m10054_MethodInfo;
extern MethodInfo TlsStream_get_Length_m9918_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m10055_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m9945_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m9524_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m10057_MethodInfo;
extern MethodInfo Context_get_Current_m9684_MethodInfo;
extern MethodInfo CipherSuite_PRF_m9566_MethodInfo;
extern MethodInfo TlsException__ctor_m9889_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1980____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m9986_MethodInfo;
extern "C" void TlsServerFinished__ctor_m9986 (TlsServerFinished_t1967 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m9987_MethodInfo;
extern TypeInfo* ByteU5BU5D_t679_il2cpp_TypeInfo_var;
extern "C" void TlsServerFinished__cctor_m9987 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool TlsServerFinished__cctor_m9987_init;
	if (!TlsServerFinished__cctor_m9987_init)
	{
		ByteU5BU5D_t679_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t679_0_0_0);
		TlsServerFinished__cctor_m9987_init = true;
	}
	{
		ByteU5BU5D_t679* L_0 = ((ByteU5BU5D_t679*)SZArrayNew(ByteU5BU5D_t679_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m881(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1980____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m881_MethodInfo);
		((TlsServerFinished_t1967_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1967_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m9988_MethodInfo;
extern "C" void TlsServerFinished_Update_m9988 (TlsServerFinished_t1967 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m9943(__this, /*hidden argument*/&HandshakeMessage_Update_m9943_MethodInfo);
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m9646(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m9646_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m9989_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsSsl3_m9989 (TlsServerFinished_t1967 * __this, MethodInfo* method)
{
	HashAlgorithm_t1884 * V_0 = {0};
	ByteU5BU5D_t679* V_1 = {0};
	ByteU5BU5D_t679* V_2 = {0};
	ByteU5BU5D_t679* V_3 = {0};
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t679* L_1 = Context_get_MasterSecret_m9666(L_0, /*hidden argument*/&Context_get_MasterSecret_m9666_MethodInfo);
		SslHandshakeHash_t1954 * L_2 = (SslHandshakeHash_t1954 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t1954_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m9806(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m9806_MethodInfo);
		V_0 = L_2;
		Context_t1914 * L_3 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1926 * L_4 = Context_get_HandshakeMessages_m9653(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m9653_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t679* L_5 = TlsStream_ToArray_m9930(L_4, /*hidden argument*/&TlsStream_ToArray_m9930_MethodInfo);
		V_1 = L_5;
		HashAlgorithm_t1884 * L_6 = V_0;
		ByteU5BU5D_t679* L_7 = V_1;
		ByteU5BU5D_t679* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t679* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t679*, int32_t, int32_t, ByteU5BU5D_t679*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m10053_MethodInfo, L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), L_9, 0);
		HashAlgorithm_t1884 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t1967_il2cpp_TypeInfo));
		ByteU5BU5D_t679* L_11 = ((TlsServerFinished_t1967_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1967_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t679* L_12 = ((TlsServerFinished_t1967_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1967_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t679* L_13 = ((TlsServerFinished_t1967_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1967_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t679*, int32_t, int32_t, ByteU5BU5D_t679*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m10053_MethodInfo, L_10, L_11, 0, (((int32_t)(((Array_t *)L_12)->max_length))), L_13, 0);
		HashAlgorithm_t1884 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t1915_il2cpp_TypeInfo));
		ByteU5BU5D_t679* L_15 = ((CipherSuite_t1915_StaticFields*)InitializedTypeInfo(&CipherSuite_t1915_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t679*, ByteU5BU5D_t679*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m10054_MethodInfo, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m9918_MethodInfo, __this);
		ByteU5BU5D_t679* L_17 = TlsStream_ReadBytes_m9923(__this, (((int32_t)L_16)), /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		V_2 = L_17;
		HashAlgorithm_t1884 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t679* L_19 = (ByteU5BU5D_t679*)VirtFuncInvoker0< ByteU5BU5D_t679* >::Invoke(&HashAlgorithm_get_Hash_m10055_MethodInfo, L_18);
		V_3 = L_19;
		ByteU5BU5D_t679* L_20 = V_3;
		ByteU5BU5D_t679* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m9945(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&HandshakeMessage_Compare_m9945_MethodInfo);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t1956 * L_23 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_23, ((int32_t)71), (String_t*) &_stringLiteral1268, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m9990_MethodInfo;
extern "C" void TlsServerFinished_ProcessAsTls1_m9990 (TlsServerFinished_t1967 * __this, MethodInfo* method)
{
	ByteU5BU5D_t679* V_0 = {0};
	HashAlgorithm_t1884 * V_1 = {0};
	ByteU5BU5D_t679* V_2 = {0};
	ByteU5BU5D_t679* V_3 = {0};
	ByteU5BU5D_t679* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m9918_MethodInfo, __this);
		ByteU5BU5D_t679* L_1 = TlsStream_ReadBytes_m9923(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t1909 * L_2 = (MD5SHA1_t1909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1909_il2cpp_TypeInfo));
		MD5SHA1__ctor_m9524(L_2, /*hidden argument*/&MD5SHA1__ctor_m9524_MethodInfo);
		V_1 = L_2;
		Context_t1914 * L_3 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1926 * L_4 = Context_get_HandshakeMessages_m9653(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m9653_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t679* L_5 = TlsStream_ToArray_m9930(L_4, /*hidden argument*/&TlsStream_ToArray_m9930_MethodInfo);
		V_2 = L_5;
		HashAlgorithm_t1884 * L_6 = V_1;
		ByteU5BU5D_t679* L_7 = V_2;
		ByteU5BU5D_t679* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t679* L_9 = HashAlgorithm_ComputeHash_m10057(L_6, L_7, 0, (((int32_t)(((Array_t *)L_8)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m10057_MethodInfo);
		V_3 = L_9;
		Context_t1914 * L_10 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_10);
		SecurityParameters_t1932 * L_11 = Context_get_Current_m9684(L_10, /*hidden argument*/&Context_get_Current_m9684_MethodInfo);
		NullCheck(L_11);
		CipherSuite_t1915 * L_12 = SecurityParameters_get_Cipher_m9755(L_11, /*hidden argument*/&SecurityParameters_get_Cipher_m9755_MethodInfo);
		Context_t1914 * L_13 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t679* L_14 = Context_get_MasterSecret_m9666(L_13, /*hidden argument*/&Context_get_MasterSecret_m9666_MethodInfo);
		ByteU5BU5D_t679* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t679* L_16 = CipherSuite_PRF_m9566(L_12, L_14, (String_t*) &_stringLiteral1269, L_15, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m9566_MethodInfo);
		V_4 = L_16;
		ByteU5BU5D_t679* L_17 = V_4;
		ByteU5BU5D_t679* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m9945(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&HandshakeMessage_Compare_m9945_MethodInfo);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t1956 * L_20 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9889(L_20, (String_t*) &_stringLiteral1268, /*hidden argument*/&TlsException__ctor_m9889_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0073:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t1968_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t1928_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1916_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m9638_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m9661_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m9756_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m9640_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m9632_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m9658_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m9660_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m8889_MethodInfo;
extern MethodInfo Context_set_RandomCS_m9663_MethodInfo;
extern MethodInfo Context_set_RandomSC_m9665_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m9994_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m9995_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m9623_MethodInfo;
extern MethodInfo Context_get_SessionId_m9637_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m9630_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m9651_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m9592_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m9585_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m9682_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m9635_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m9634_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m9590_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m9652_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m9597_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m9991_MethodInfo;
extern "C" void TlsServerHello__ctor_m9991 (TlsServerHello_t1968 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, 2, L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m9992_MethodInfo;
extern TypeInfo* ByteU5BU5D_t679_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m9992 (TlsServerHello_t1968 * __this, MethodInfo* method)
{
	static bool TlsServerHello_Update_m9992_init;
	if (!TlsServerHello_Update_m9992_init)
	{
		ByteU5BU5D_t679_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t679_0_0_0);
		TlsServerHello_Update_m9992_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t679* V_3 = {0};
	ByteU5BU5D_t679* V_4 = {0};
	{
		HandshakeMessage_Update_m9943(__this, /*hidden argument*/&HandshakeMessage_Update_m9943_MethodInfo);
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		ByteU5BU5D_t679* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m9638(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m9638_MethodInfo);
		Context_t1914 * L_2 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		ByteU5BU5D_t679* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m9661(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m9661_MethodInfo);
		Context_t1914 * L_4 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t1932 * L_5 = Context_get_Negotiating_m9685(L_4, /*hidden argument*/&Context_get_Negotiating_m9685_MethodInfo);
		CipherSuite_t1915 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m9756(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m9756_MethodInfo);
		Context_t1914 * L_7 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m9640(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m9640_MethodInfo);
		Context_t1914 * L_9 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m9632(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m9632_MethodInfo);
		Context_t1914 * L_10 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t679* L_11 = Context_get_ClientRandom_m9658(L_10, /*hidden argument*/&Context_get_ClientRandom_m9658_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t1914 * L_12 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t679* L_13 = Context_get_ServerRandom_m9660(L_12, /*hidden argument*/&Context_get_ServerRandom_m9660_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t679*)SZArrayNew(ByteU5BU5D_t679_il2cpp_TypeInfo_var, L_16));
		Context_t1914 * L_17 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_17);
		ByteU5BU5D_t679* L_18 = Context_get_ClientRandom_m9658(L_17, /*hidden argument*/&Context_get_ClientRandom_m9658_MethodInfo);
		ByteU5BU5D_t679* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m8889(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/&Buffer_BlockCopy_m8889_MethodInfo);
		Context_t1914 * L_21 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t679* L_22 = Context_get_ServerRandom_m9660(L_21, /*hidden argument*/&Context_get_ServerRandom_m9660_MethodInfo);
		ByteU5BU5D_t679* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m8889(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/&Buffer_BlockCopy_m8889_MethodInfo);
		Context_t1914 * L_26 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		ByteU5BU5D_t679* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m9663(L_26, L_27, /*hidden argument*/&Context_set_RandomCS_m9663_MethodInfo);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t679*)SZArrayNew(ByteU5BU5D_t679_il2cpp_TypeInfo_var, L_28));
		Context_t1914 * L_29 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_29);
		ByteU5BU5D_t679* L_30 = Context_get_ServerRandom_m9660(L_29, /*hidden argument*/&Context_get_ServerRandom_m9660_MethodInfo);
		ByteU5BU5D_t679* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m8889(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/&Buffer_BlockCopy_m8889_MethodInfo);
		Context_t1914 * L_33 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_33);
		ByteU5BU5D_t679* L_34 = Context_get_ClientRandom_m9658(L_33, /*hidden argument*/&Context_get_ClientRandom_m9658_MethodInfo);
		ByteU5BU5D_t679* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m8889(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/&Buffer_BlockCopy_m8889_MethodInfo);
		Context_t1914 * L_38 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		ByteU5BU5D_t679* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m9665(L_38, L_39, /*hidden argument*/&Context_set_RandomSC_m9665_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m9993_MethodInfo;
extern "C" void TlsServerHello_ProcessAsSsl3_m9993 (TlsServerHello_t1968 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m9994_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m9994 (TlsServerHello_t1968 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		TlsServerHello_processProtocol_m9995(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m9995_MethodInfo);
		ByteU5BU5D_t679* L_1 = TlsStream_ReadBytes_m9923(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m9920(__this, /*hidden argument*/&TlsStream_ReadByte_m9920_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t679* L_5 = TlsStream_ReadBytes_m9923(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		__this->___sessionId_11 = L_5;
		Context_t1914 * L_6 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_6);
		TlsClientSettings_t1931 * L_7 = Context_get_ClientSettings_m9642(L_6, /*hidden argument*/&Context_get_ClientSettings_m9642_MethodInfo);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m9882(L_7, /*hidden argument*/&TlsClientSettings_get_TargetHost_m9882_MethodInfo);
		ByteU5BU5D_t679* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t1928_il2cpp_TypeInfo));
		ClientSessionCache_Add_m9623(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&ClientSessionCache_Add_m9623_MethodInfo);
		Context_t1914 * L_10 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		ByteU5BU5D_t679* L_11 = (__this->___sessionId_11);
		Context_t1914 * L_12 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t679* L_13 = Context_get_SessionId_m9637(L_12, /*hidden argument*/&Context_get_SessionId_m9637_MethodInfo);
		bool L_14 = HandshakeMessage_Compare_m9945(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&HandshakeMessage_Compare_m9945_MethodInfo);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m9630(L_10, L_14, /*hidden argument*/&Context_set_AbbreviatedHandshake_m9630_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t1914 * L_15 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m9630(L_15, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m9630_MethodInfo);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		V_1 = L_16;
		Context_t1914 * L_17 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_17);
		CipherSuiteCollection_t1916 * L_18 = Context_get_SupportedCiphers_m9651(L_17, /*hidden argument*/&Context_get_SupportedCiphers_m9651_MethodInfo);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m9592(L_18, L_19, /*hidden argument*/&CipherSuiteCollection_IndexOf_m9592_MethodInfo);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t1956 * L_21 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_21, ((int32_t)71), (String_t*) &_stringLiteral1270, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00ad:
	{
		Context_t1914 * L_22 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_22);
		CipherSuiteCollection_t1916 * L_23 = Context_get_SupportedCiphers_m9651(L_22, /*hidden argument*/&Context_get_SupportedCiphers_m9651_MethodInfo);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t1915 * L_25 = CipherSuiteCollection_get_Item_m9585(L_23, L_24, /*hidden argument*/&CipherSuiteCollection_get_Item_m9585_MethodInfo);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m9920(__this, /*hidden argument*/&TlsStream_ReadByte_m9920_MethodInfo);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern "C" void TlsServerHello_processProtocol_m9995 (TlsServerHello_t1968 * __this, int16_t ___protocol, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m9682(L_0, L_1, /*hidden argument*/&Context_DecodeProtocolCode_m9682_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t1914 * L_4 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m9635(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m9635_MethodInfo);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t1914 * L_7 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m9635(L_7, /*hidden argument*/&Context_get_SecurityProtocolFlags_m9635_MethodInfo);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t1914 * L_9 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m9634(L_9, L_10, /*hidden argument*/&Context_set_SecurityProtocol_m9634_MethodInfo);
		Context_t1914 * L_11 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_11);
		CipherSuiteCollection_t1916 * L_12 = Context_get_SupportedCiphers_m9651(L_11, /*hidden argument*/&Context_get_SupportedCiphers_m9651_MethodInfo);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m9590_MethodInfo, L_12);
		Context_t1914 * L_13 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m9652(L_13, (CipherSuiteCollection_t1916 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m9652_MethodInfo);
		Context_t1914 * L_14 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t1916 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m9597(NULL /*static, unused*/, L_15, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m9597_MethodInfo);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m9652(L_14, L_16, /*hidden argument*/&Context_set_SupportedCiphers_m9652_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t1956 * L_17 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_17, ((int32_t)70), (String_t*) &_stringLiteral1215, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0086:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t1969_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m9996_MethodInfo;
extern "C" void TlsServerHelloDone__ctor_m9996 (TlsServerHelloDone_t1969 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m9997_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m9997 (TlsServerHelloDone_t1969 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m9998_MethodInfo;
extern "C" void TlsServerHelloDone_ProcessAsTls1_m9998 (TlsServerHelloDone_t1969 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t1970_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t1792_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m10003_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m9898_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m9903_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m9904_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m10002_MethodInfo;
extern MethodInfo TlsStream__ctor_m9910_MethodInfo;
extern MethodInfo Context_get_RandomCS_m9662_MethodInfo;
extern MethodInfo TlsStream_Write_m9928_MethodInfo;
extern MethodInfo TlsStream_Write_m9935_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m8992_MethodInfo;
extern MethodInfo TlsStream_Reset_m9929_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m9901_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m9529_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m9999_MethodInfo;
extern "C" void TlsServerKeyExchange__ctor_m9999 (TlsServerKeyExchange_t1970 * __this, Context_t1914 * ___context, ByteU5BU5D_t679* ___buffer, MethodInfo* method)
{
	{
		Context_t1914 * L_0 = ___context;
		ByteU5BU5D_t679* L_1 = ___buffer;
		HandshakeMessage__ctor_m9938(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/&HandshakeMessage__ctor_m9938_MethodInfo);
		TlsServerKeyExchange_verifySignature_m10003(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m10003_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m10000_MethodInfo;
extern "C" void TlsServerKeyExchange_Update_m10000 (TlsServerKeyExchange_t1970 * __this, MethodInfo* method)
{
	{
		HandshakeMessage_Update_m9943(__this, /*hidden argument*/&HandshakeMessage_Update_m9943_MethodInfo);
		Context_t1914 * L_0 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1930 * L_1 = Context_get_ServerSettings_m9641(L_0, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m9898(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m9898_MethodInfo);
		Context_t1914 * L_2 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t1930 * L_3 = Context_get_ServerSettings_m9641(L_2, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		RSAParameters_t1792  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m9903(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m9903_MethodInfo);
		Context_t1914 * L_5 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t1930 * L_6 = Context_get_ServerSettings_m9641(L_5, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		ByteU5BU5D_t679* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m9904(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m9904_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m10001_MethodInfo;
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m10001 (TlsServerKeyExchange_t1970 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m10002_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m10002 (TlsServerKeyExchange_t1970 * __this, MethodInfo* method)
{
	RSAParameters_t1792  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&RSAParameters_t1792_il2cpp_TypeInfo), (&V_0));
		RSAParameters_t1792  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t1792 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		ByteU5BU5D_t679* L_3 = TlsStream_ReadBytes_m9923(__this, L_2, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t1792 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		ByteU5BU5D_t679* L_6 = TlsStream_ReadBytes_m9923(__this, L_5, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m9921(__this, /*hidden argument*/&TlsStream_ReadInt16_m9921_MethodInfo);
		ByteU5BU5D_t679* L_8 = TlsStream_ReadBytes_m9923(__this, L_7, /*hidden argument*/&TlsStream_ReadBytes_m9923_MethodInfo);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern "C" void TlsServerKeyExchange_verifySignature_m10003 (TlsServerKeyExchange_t1970 * __this, MethodInfo* method)
{
	MD5SHA1_t1909 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t1926 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t1909 * L_0 = (MD5SHA1_t1909 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1909_il2cpp_TypeInfo));
		MD5SHA1__ctor_m9524(L_0, /*hidden argument*/&MD5SHA1__ctor_m9524_MethodInfo);
		V_0 = L_0;
		RSAParameters_t1792 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t679* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1792 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t679* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))+(int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))))+(int32_t)4));
		TlsStream_t1926 * L_5 = (TlsStream_t1926 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t1926_il2cpp_TypeInfo));
		TlsStream__ctor_m9910(L_5, /*hidden argument*/&TlsStream__ctor_m9910_MethodInfo);
		V_2 = L_5;
		TlsStream_t1926 * L_6 = V_2;
		Context_t1914 * L_7 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_7);
		ByteU5BU5D_t679* L_8 = Context_get_RandomCS_m9662(L_7, /*hidden argument*/&Context_get_RandomCS_m9662_MethodInfo);
		NullCheck(L_6);
		TlsStream_Write_m9928(L_6, L_8, /*hidden argument*/&TlsStream_Write_m9928_MethodInfo);
		TlsStream_t1926 * L_9 = V_2;
		ByteU5BU5D_t679* L_10 = TlsStream_ToArray_m9930(__this, /*hidden argument*/&TlsStream_ToArray_m9930_MethodInfo);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t679*, int32_t, int32_t >::Invoke(&TlsStream_Write_m9935_MethodInfo, L_9, L_10, 0, L_11);
		MD5SHA1_t1909 * L_12 = V_0;
		TlsStream_t1926 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t679* L_14 = TlsStream_ToArray_m9930(L_13, /*hidden argument*/&TlsStream_ToArray_m9930_MethodInfo);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m8992(L_12, L_14, /*hidden argument*/&HashAlgorithm_ComputeHash_m8992_MethodInfo);
		TlsStream_t1926 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m9929(L_15, /*hidden argument*/&TlsStream_Reset_m9929_MethodInfo);
		MD5SHA1_t1909 * L_16 = V_0;
		Context_t1914 * L_17 = HandshakeMessage_get_Context_m9939(__this, /*hidden argument*/&HandshakeMessage_get_Context_m9939_MethodInfo);
		NullCheck(L_17);
		TlsServerSettings_t1930 * L_18 = Context_get_ServerSettings_m9641(L_17, /*hidden argument*/&Context_get_ServerSettings_m9641_MethodInfo);
		NullCheck(L_18);
		RSA_t1662 * L_19 = TlsServerSettings_get_CertificateRSA_m9901(L_18, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m9901_MethodInfo);
		ByteU5BU5D_t679* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m9529(L_16, L_19, L_20, /*hidden argument*/&MD5SHA1_VerifySignature_m9529_MethodInfo);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t1956 * L_23 = (TlsException_t1956 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1956_il2cpp_TypeInfo));
		TlsException__ctor_m9894(L_23, ((int32_t)50), (String_t*) &_stringLiteral1271, /*hidden argument*/&TlsException__ctor_m9894_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_008c:
	{
		return;
	}
}
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t1871_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m10004_MethodInfo;
extern "C" void PrimalityTest__ctor_m10004 (PrimalityTest_t1871 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m10005_MethodInfo;
extern "C" bool PrimalityTest_Invoke_m10005 (PrimalityTest_t1871 * __this, BigInteger_t1862 * ___bi, int32_t ___confidence, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m10005((PrimalityTest_t1871 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1862 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1862 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t1871(Il2CppObject* delegate, BigInteger_t1862 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1862 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m10006_MethodInfo;
extern "C" Object_t * PrimalityTest_BeginInvoke_m10006 (PrimalityTest_t1871 * __this, BigInteger_t1862 * ___bi, int32_t ___confidence, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t1868_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m10007_MethodInfo;
extern "C" bool PrimalityTest_EndInvoke_m10007 (PrimalityTest_t1871 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t1951_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m10008_MethodInfo;
extern "C" void CertificateValidationCallback__ctor_m10008 (CertificateValidationCallback_t1951 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m10009_MethodInfo;
extern "C" bool CertificateValidationCallback_Invoke_m10009 (CertificateValidationCallback_t1951 * __this, X509Certificate_t1628 * ___certificate, Int32U5BU5D_t34* ___certificateErrors, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m10009((CertificateValidationCallback_t1951 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1628 * ___certificate, Int32U5BU5D_t34* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1628 * ___certificate, Int32U5BU5D_t34* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t34* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1951(Il2CppObject* delegate, X509Certificate_t1628 * ___certificate, Int32U5BU5D_t34* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1628 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m10010_MethodInfo;
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m10010 (CertificateValidationCallback_t1951 * __this, X509Certificate_t1628 * ___certificate, Int32U5BU5D_t34* ___certificateErrors, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m10011_MethodInfo;
extern "C" bool CertificateValidationCallback_EndInvoke_m10011 (CertificateValidationCallback_t1951 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t1952_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m10012_MethodInfo;
extern "C" void CertificateValidationCallback2__ctor_m10012 (CertificateValidationCallback2_t1952 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m10013_MethodInfo;
extern "C" ValidationResult_t1950 * CertificateValidationCallback2_Invoke_m10013 (CertificateValidationCallback2_t1952 * __this, X509CertificateCollection_t1800 * ___collection, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m10013((CertificateValidationCallback2_t1952 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t1950 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1800 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t1950 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1800 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t1950 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t1950 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1952(Il2CppObject* delegate, X509CertificateCollection_t1800 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t1800 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m10014_MethodInfo;
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m10014 (CertificateValidationCallback2_t1952 * __this, X509CertificateCollection_t1800 * ___collection, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m10015_MethodInfo;
extern "C" ValidationResult_t1950 * CertificateValidationCallback2_EndInvoke_m10015 (CertificateValidationCallback2_t1952 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t1950 *)__result;
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t1936_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m10016_MethodInfo;
extern "C" void CertificateSelectionCallback__ctor_m10016 (CertificateSelectionCallback_t1936 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m10017_MethodInfo;
extern "C" X509Certificate_t1628 * CertificateSelectionCallback_Invoke_m10017 (CertificateSelectionCallback_t1936 * __this, X509CertificateCollection_t1641 * ___clientCertificates, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m10017((CertificateSelectionCallback_t1936 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1628 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1641 * ___clientCertificates, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1628 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1641 * ___clientCertificates, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1628 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t1628 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1936(Il2CppObject* delegate, X509CertificateCollection_t1641 * ___clientCertificates, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t1641 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m10018_MethodInfo;
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m10018 (CertificateSelectionCallback_t1936 * __this, X509CertificateCollection_t1641 * ___clientCertificates, X509Certificate_t1628 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1641 * ___serverRequestedCertificates, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m10019_MethodInfo;
extern "C" X509Certificate_t1628 * CertificateSelectionCallback_EndInvoke_m10019 (CertificateSelectionCallback_t1936 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1628 *)__result;
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t1937_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m10020_MethodInfo;
extern "C" void PrivateKeySelectionCallback__ctor_m10020 (PrivateKeySelectionCallback_t1937 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m10021_MethodInfo;
extern "C" AsymmetricAlgorithm_t1656 * PrivateKeySelectionCallback_Invoke_m10021 (PrivateKeySelectionCallback_t1937 * __this, X509Certificate_t1628 * ___certificate, String_t* ___targetHost, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m10021((PrivateKeySelectionCallback_t1937 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1656 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1628 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1656 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1628 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1656 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t1656 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1937(Il2CppObject* delegate, X509Certificate_t1628 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1628 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m10022_MethodInfo;
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m10022 (PrivateKeySelectionCallback_t1937 * __this, X509Certificate_t1628 * ___certificate, String_t* ___targetHost, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m10023_MethodInfo;
extern "C" AsymmetricAlgorithm_t1656 * PrivateKeySelectionCallback_EndInvoke_m10023 (PrivateKeySelectionCallback_t1937 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1656 *)__result;
}
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t1971_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1971_marshal(const $ArrayType$3132_t1971& unmarshaled, $ArrayType$3132_t1971_marshaled& marshaled)
{
}
void $ArrayType$3132_t1971_marshal_back(const $ArrayType$3132_t1971_marshaled& marshaled, $ArrayType$3132_t1971& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1971_marshal_cleanup($ArrayType$3132_t1971_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t1972_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1972_marshal(const $ArrayType$256_t1972& unmarshaled, $ArrayType$256_t1972_marshaled& marshaled)
{
}
void $ArrayType$256_t1972_marshal_back(const $ArrayType$256_t1972_marshaled& marshaled, $ArrayType$256_t1972& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1972_marshal_cleanup($ArrayType$256_t1972_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t1973_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1973_marshal(const $ArrayType$20_t1973& unmarshaled, $ArrayType$20_t1973_marshaled& marshaled)
{
}
void $ArrayType$20_t1973_marshal_back(const $ArrayType$20_t1973_marshaled& marshaled, $ArrayType$20_t1973& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1973_marshal_cleanup($ArrayType$20_t1973_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t1974_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1974_marshal(const $ArrayType$32_t1974& unmarshaled, $ArrayType$32_t1974_marshaled& marshaled)
{
}
void $ArrayType$32_t1974_marshal_back(const $ArrayType$32_t1974_marshaled& marshaled, $ArrayType$32_t1974& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1974_marshal_cleanup($ArrayType$32_t1974_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t1975_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1975_marshal(const $ArrayType$48_t1975& unmarshaled, $ArrayType$48_t1975_marshaled& marshaled)
{
}
void $ArrayType$48_t1975_marshal_back(const $ArrayType$48_t1975_marshaled& marshaled, $ArrayType$48_t1975& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1975_marshal_cleanup($ArrayType$48_t1975_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t1976_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1976_marshal(const $ArrayType$64_t1976& unmarshaled, $ArrayType$64_t1976_marshaled& marshaled)
{
}
void $ArrayType$64_t1976_marshal_back(const $ArrayType$64_t1976_marshaled& marshaled, $ArrayType$64_t1976& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1976_marshal_cleanup($ArrayType$64_t1976_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1977_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1977_marshal(const $ArrayType$12_t1977& unmarshaled, $ArrayType$12_t1977_marshaled& marshaled)
{
}
void $ArrayType$12_t1977_marshal_back(const $ArrayType$12_t1977_marshaled& marshaled, $ArrayType$12_t1977& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1977_marshal_cleanup($ArrayType$12_t1977_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t1978_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1978_marshal(const $ArrayType$16_t1978& unmarshaled, $ArrayType$16_t1978_marshaled& marshaled)
{
}
void $ArrayType$16_t1978_marshal_back(const $ArrayType$16_t1978_marshaled& marshaled, $ArrayType$16_t1978& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1978_marshal_cleanup($ArrayType$16_t1978_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t1979_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1979_marshal(const $ArrayType$4_t1979& unmarshaled, $ArrayType$4_t1979_marshaled& marshaled)
{
}
void $ArrayType$4_t1979_marshal_back(const $ArrayType$4_t1979_marshaled& marshaled, $ArrayType$4_t1979& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1979_marshal_cleanup($ArrayType$4_t1979_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



#ifdef __clang__
#pragma clang diagnostic pop
#endif