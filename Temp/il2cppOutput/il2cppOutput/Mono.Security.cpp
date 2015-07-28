#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t1859_il2cpp_TypeInfo;
extern TypeInfo Locale_t1860_il2cpp_TypeInfo;
extern TypeInfo Sign_t1861_il2cpp_TypeInfo;
extern TypeInfo ModulusRing_t1863_il2cpp_TypeInfo;
extern TypeInfo Kernel_t1864_il2cpp_TypeInfo;
extern TypeInfo BigInteger_t1862_il2cpp_TypeInfo;
extern TypeInfo ConfidenceFactor_t1868_il2cpp_TypeInfo;
extern TypeInfo PrimalityTests_t1869_il2cpp_TypeInfo;
extern TypeInfo PrimeGeneratorBase_t1870_il2cpp_TypeInfo;
extern TypeInfo SequentialSearchPrimeGeneratorBase_t1872_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1671_il2cpp_TypeInfo;
extern TypeInfo ASN1Convert_t1873_il2cpp_TypeInfo;
extern TypeInfo BitConverterLE_t1874_il2cpp_TypeInfo;
extern TypeInfo ContentInfo_t1875_il2cpp_TypeInfo;
extern TypeInfo EncryptedData_t1876_il2cpp_TypeInfo;
extern TypeInfo PKCS7_t1877_il2cpp_TypeInfo;
extern TypeInfo ARC4Managed_t1878_il2cpp_TypeInfo;
extern TypeInfo CryptoConvert_t1881_il2cpp_TypeInfo;
extern TypeInfo KeyBuilder_t1882_il2cpp_TypeInfo;
extern TypeInfo MD2_t1883_il2cpp_TypeInfo;
extern TypeInfo MD2Managed_t1885_il2cpp_TypeInfo;
extern TypeInfo PKCS1_t1886_il2cpp_TypeInfo;
extern TypeInfo PrivateKeyInfo_t1887_il2cpp_TypeInfo;
extern TypeInfo EncryptedPrivateKeyInfo_t1888_il2cpp_TypeInfo;
extern TypeInfo PKCS8_t1889_il2cpp_TypeInfo;
extern TypeInfo RC4_t1879_il2cpp_TypeInfo;
extern TypeInfo KeyGeneratedEventHandler_t1893_il2cpp_TypeInfo;
extern TypeInfo RSAManaged_t1791_il2cpp_TypeInfo;
extern TypeInfo SafeBag_t1894_il2cpp_TypeInfo;
extern TypeInfo DeriveBytes_t1895_il2cpp_TypeInfo;
extern TypeInfo PKCS12_t1798_il2cpp_TypeInfo;
extern TypeInfo X501_t1796_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1660_il2cpp_TypeInfo;
extern TypeInfo X509CertificateEnumerator_t1804_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1800_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1896_il2cpp_TypeInfo;
extern TypeInfo X509ChainStatusFlags_t1897_il2cpp_TypeInfo;
extern TypeInfo X509CrlEntry_t1685_il2cpp_TypeInfo;
extern TypeInfo X509Crl_t1683_il2cpp_TypeInfo;
extern TypeInfo X509Extension_t1684_il2cpp_TypeInfo;
extern TypeInfo X509ExtensionCollection_t1803_il2cpp_TypeInfo;
extern TypeInfo X509Store_t1697_il2cpp_TypeInfo;
extern TypeInfo X509StoreManager_t1898_il2cpp_TypeInfo;
extern TypeInfo X509Stores_t1698_il2cpp_TypeInfo;
extern TypeInfo AuthorityKeyIdentifierExtension_t1802_il2cpp_TypeInfo;
extern TypeInfo BasicConstraintsExtension_t1899_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1900_il2cpp_TypeInfo;
extern TypeInfo GeneralNames_t1901_il2cpp_TypeInfo;
extern TypeInfo KeyUsages_t1902_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1903_il2cpp_TypeInfo;
extern TypeInfo CertTypes_t1904_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1905_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1906_il2cpp_TypeInfo;
extern TypeInfo HMAC_t1907_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1909_il2cpp_TypeInfo;
extern TypeInfo AlertLevel_t1910_il2cpp_TypeInfo;
extern TypeInfo AlertDescription_t1911_il2cpp_TypeInfo;
extern TypeInfo Alert_t1912_il2cpp_TypeInfo;
extern TypeInfo CipherAlgorithmType_t1913_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1915_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1916_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteFactory_t1919_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1921_il2cpp_TypeInfo;
extern TypeInfo ClientRecordProtocol_t1922_il2cpp_TypeInfo;
extern TypeInfo ClientSessionInfo_t1927_il2cpp_TypeInfo;
extern TypeInfo ClientSessionCache_t1928_il2cpp_TypeInfo;
extern TypeInfo ContentType_t1929_il2cpp_TypeInfo;
extern TypeInfo Context_t1914_il2cpp_TypeInfo;
extern TypeInfo ExchangeAlgorithmType_t1933_il2cpp_TypeInfo;
extern TypeInfo HandshakeState_t1934_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithmType_t1935_il2cpp_TypeInfo;
extern TypeInfo HttpsClientStream_t1938_il2cpp_TypeInfo;
extern TypeInfo ReceiveRecordAsyncResult_t1940_il2cpp_TypeInfo;
extern TypeInfo SendRecordAsyncResult_t1942_il2cpp_TypeInfo;
extern TypeInfo RecordProtocol_t1923_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureDeformatter_t1943_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureFormatter_t1945_il2cpp_TypeInfo;
extern TypeInfo SecurityCompressionType_t1947_il2cpp_TypeInfo;
extern TypeInfo SecurityParameters_t1932_il2cpp_TypeInfo;
extern TypeInfo SecurityProtocolType_t1948_il2cpp_TypeInfo;
extern TypeInfo ServerContext_t1949_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1950_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1920_il2cpp_TypeInfo;
extern TypeInfo SslCipherSuite_t1918_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1954_il2cpp_TypeInfo;
extern TypeInfo InternalAsyncResult_t1955_il2cpp_TypeInfo;
extern TypeInfo SslStreamBase_t1953_il2cpp_TypeInfo;
extern TypeInfo TlsCipherSuite_t1917_il2cpp_TypeInfo;
extern TypeInfo TlsClientSettings_t1931_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1956_il2cpp_TypeInfo;
extern TypeInfo TlsServerSettings_t1930_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1926_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1958_il2cpp_TypeInfo;
extern TypeInfo HandshakeMessage_t1925_il2cpp_TypeInfo;
extern TypeInfo HandshakeType_t1959_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificate_t1960_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificateVerify_t1961_il2cpp_TypeInfo;
extern TypeInfo TlsClientFinished_t1962_il2cpp_TypeInfo;
extern TypeInfo TlsClientHello_t1963_il2cpp_TypeInfo;
extern TypeInfo TlsClientKeyExchange_t1964_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificate_t1965_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificateRequest_t1966_il2cpp_TypeInfo;
extern TypeInfo TlsServerFinished_t1967_il2cpp_TypeInfo;
extern TypeInfo TlsServerHello_t1968_il2cpp_TypeInfo;
extern TypeInfo TlsServerHelloDone_t1969_il2cpp_TypeInfo;
extern TypeInfo TlsServerKeyExchange_t1970_il2cpp_TypeInfo;
extern TypeInfo PrimalityTest_t1871_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback_t1951_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback2_t1952_il2cpp_TypeInfo;
extern TypeInfo CertificateSelectionCallback_t1936_il2cpp_TypeInfo;
extern TypeInfo PrivateKeySelectionCallback_t1937_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$3132_t1971_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t1972_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t1973_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t1974_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t1975_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t1976_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t1977_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t1978_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t1979_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1980_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_Mono_Security_Assembly_Types[122] = 
{
	&U3CModuleU3E_t1859_il2cpp_TypeInfo,
	&Locale_t1860_il2cpp_TypeInfo,
	&Sign_t1861_il2cpp_TypeInfo,
	&ModulusRing_t1863_il2cpp_TypeInfo,
	&Kernel_t1864_il2cpp_TypeInfo,
	&BigInteger_t1862_il2cpp_TypeInfo,
	&ConfidenceFactor_t1868_il2cpp_TypeInfo,
	&PrimalityTests_t1869_il2cpp_TypeInfo,
	&PrimeGeneratorBase_t1870_il2cpp_TypeInfo,
	&SequentialSearchPrimeGeneratorBase_t1872_il2cpp_TypeInfo,
	&ASN1_t1671_il2cpp_TypeInfo,
	&ASN1Convert_t1873_il2cpp_TypeInfo,
	&BitConverterLE_t1874_il2cpp_TypeInfo,
	&ContentInfo_t1875_il2cpp_TypeInfo,
	&EncryptedData_t1876_il2cpp_TypeInfo,
	&PKCS7_t1877_il2cpp_TypeInfo,
	&ARC4Managed_t1878_il2cpp_TypeInfo,
	&CryptoConvert_t1881_il2cpp_TypeInfo,
	&KeyBuilder_t1882_il2cpp_TypeInfo,
	&MD2_t1883_il2cpp_TypeInfo,
	&MD2Managed_t1885_il2cpp_TypeInfo,
	&PKCS1_t1886_il2cpp_TypeInfo,
	&PrivateKeyInfo_t1887_il2cpp_TypeInfo,
	&EncryptedPrivateKeyInfo_t1888_il2cpp_TypeInfo,
	&PKCS8_t1889_il2cpp_TypeInfo,
	&RC4_t1879_il2cpp_TypeInfo,
	&KeyGeneratedEventHandler_t1893_il2cpp_TypeInfo,
	&RSAManaged_t1791_il2cpp_TypeInfo,
	&SafeBag_t1894_il2cpp_TypeInfo,
	&DeriveBytes_t1895_il2cpp_TypeInfo,
	&PKCS12_t1798_il2cpp_TypeInfo,
	&X501_t1796_il2cpp_TypeInfo,
	&X509Certificate_t1660_il2cpp_TypeInfo,
	&X509CertificateEnumerator_t1804_il2cpp_TypeInfo,
	&X509CertificateCollection_t1800_il2cpp_TypeInfo,
	&X509Chain_t1896_il2cpp_TypeInfo,
	&X509ChainStatusFlags_t1897_il2cpp_TypeInfo,
	&X509CrlEntry_t1685_il2cpp_TypeInfo,
	&X509Crl_t1683_il2cpp_TypeInfo,
	&X509Extension_t1684_il2cpp_TypeInfo,
	&X509ExtensionCollection_t1803_il2cpp_TypeInfo,
	&X509Store_t1697_il2cpp_TypeInfo,
	&X509StoreManager_t1898_il2cpp_TypeInfo,
	&X509Stores_t1698_il2cpp_TypeInfo,
	&AuthorityKeyIdentifierExtension_t1802_il2cpp_TypeInfo,
	&BasicConstraintsExtension_t1899_il2cpp_TypeInfo,
	&ExtendedKeyUsageExtension_t1900_il2cpp_TypeInfo,
	&GeneralNames_t1901_il2cpp_TypeInfo,
	&KeyUsages_t1902_il2cpp_TypeInfo,
	&KeyUsageExtension_t1903_il2cpp_TypeInfo,
	&CertTypes_t1904_il2cpp_TypeInfo,
	&NetscapeCertTypeExtension_t1905_il2cpp_TypeInfo,
	&SubjectAltNameExtension_t1906_il2cpp_TypeInfo,
	&HMAC_t1907_il2cpp_TypeInfo,
	&MD5SHA1_t1909_il2cpp_TypeInfo,
	&AlertLevel_t1910_il2cpp_TypeInfo,
	&AlertDescription_t1911_il2cpp_TypeInfo,
	&Alert_t1912_il2cpp_TypeInfo,
	&CipherAlgorithmType_t1913_il2cpp_TypeInfo,
	&CipherSuite_t1915_il2cpp_TypeInfo,
	&CipherSuiteCollection_t1916_il2cpp_TypeInfo,
	&CipherSuiteFactory_t1919_il2cpp_TypeInfo,
	&ClientContext_t1921_il2cpp_TypeInfo,
	&ClientRecordProtocol_t1922_il2cpp_TypeInfo,
	&ClientSessionInfo_t1927_il2cpp_TypeInfo,
	&ClientSessionCache_t1928_il2cpp_TypeInfo,
	&ContentType_t1929_il2cpp_TypeInfo,
	&Context_t1914_il2cpp_TypeInfo,
	&ExchangeAlgorithmType_t1933_il2cpp_TypeInfo,
	&HandshakeState_t1934_il2cpp_TypeInfo,
	&HashAlgorithmType_t1935_il2cpp_TypeInfo,
	&HttpsClientStream_t1938_il2cpp_TypeInfo,
	&ReceiveRecordAsyncResult_t1940_il2cpp_TypeInfo,
	&SendRecordAsyncResult_t1942_il2cpp_TypeInfo,
	&RecordProtocol_t1923_il2cpp_TypeInfo,
	&RSASslSignatureDeformatter_t1943_il2cpp_TypeInfo,
	&RSASslSignatureFormatter_t1945_il2cpp_TypeInfo,
	&SecurityCompressionType_t1947_il2cpp_TypeInfo,
	&SecurityParameters_t1932_il2cpp_TypeInfo,
	&SecurityProtocolType_t1948_il2cpp_TypeInfo,
	&ServerContext_t1949_il2cpp_TypeInfo,
	&ValidationResult_t1950_il2cpp_TypeInfo,
	&SslClientStream_t1920_il2cpp_TypeInfo,
	&SslCipherSuite_t1918_il2cpp_TypeInfo,
	&SslHandshakeHash_t1954_il2cpp_TypeInfo,
	&InternalAsyncResult_t1955_il2cpp_TypeInfo,
	&SslStreamBase_t1953_il2cpp_TypeInfo,
	&TlsCipherSuite_t1917_il2cpp_TypeInfo,
	&TlsClientSettings_t1931_il2cpp_TypeInfo,
	&TlsException_t1956_il2cpp_TypeInfo,
	&TlsServerSettings_t1930_il2cpp_TypeInfo,
	&TlsStream_t1926_il2cpp_TypeInfo,
	&ClientCertificateType_t1958_il2cpp_TypeInfo,
	&HandshakeMessage_t1925_il2cpp_TypeInfo,
	&HandshakeType_t1959_il2cpp_TypeInfo,
	&TlsClientCertificate_t1960_il2cpp_TypeInfo,
	&TlsClientCertificateVerify_t1961_il2cpp_TypeInfo,
	&TlsClientFinished_t1962_il2cpp_TypeInfo,
	&TlsClientHello_t1963_il2cpp_TypeInfo,
	&TlsClientKeyExchange_t1964_il2cpp_TypeInfo,
	&TlsServerCertificate_t1965_il2cpp_TypeInfo,
	&TlsServerCertificateRequest_t1966_il2cpp_TypeInfo,
	&TlsServerFinished_t1967_il2cpp_TypeInfo,
	&TlsServerHello_t1968_il2cpp_TypeInfo,
	&TlsServerHelloDone_t1969_il2cpp_TypeInfo,
	&TlsServerKeyExchange_t1970_il2cpp_TypeInfo,
	&PrimalityTest_t1871_il2cpp_TypeInfo,
	&CertificateValidationCallback_t1951_il2cpp_TypeInfo,
	&CertificateValidationCallback2_t1952_il2cpp_TypeInfo,
	&CertificateSelectionCallback_t1936_il2cpp_TypeInfo,
	&PrivateKeySelectionCallback_t1937_il2cpp_TypeInfo,
	&$ArrayType$3132_t1971_il2cpp_TypeInfo,
	&$ArrayType$256_t1972_il2cpp_TypeInfo,
	&$ArrayType$20_t1973_il2cpp_TypeInfo,
	&$ArrayType$32_t1974_il2cpp_TypeInfo,
	&$ArrayType$48_t1975_il2cpp_TypeInfo,
	&$ArrayType$64_t1976_il2cpp_TypeInfo,
	&$ArrayType$12_t1977_il2cpp_TypeInfo,
	&$ArrayType$16_t1978_il2cpp_TypeInfo,
	&$ArrayType$4_t1979_il2cpp_TypeInfo,
	&U3CPrivateImplementationDetailsU3E_t1980_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache;
Il2CppAssembly g_Mono_Security_Assembly = 
{
	{ "Mono.Security", 0, 0, "\x0\x24\x0\x0\x4\x80\x0\x0\x94\x0\x0\x0\x6\x2\x0\x0\x0\x24\x0\x0\x52\x53\x41\x31\x0\x4\x0\x0\x1\x0\x1\x0\x79\x15\x99\x77\xD2\xD0\x3A\x8E\x6B\xEA\x7A\x2E\x74\xE8\xD1\xAF\xCC\x93\xE8\x85\x19\x74\x95\x2B\xB4\x80\xA1\x2C\x91\x34\x47\x4D\x4\x6\x24\x47\xC3\x7E\xE\x68\xC0\x80\x53\x6F\xCF\x3C\x3F\xBE\x2F\xF9\xC9\x79\xCE\x99\x84\x75\xE5\x6\xE8\xCE\x82\xDD\x5B\xF\x35\xD\xC1\xE\x93\xBF\x2E\xEE\xCF\x87\x4B\x24\x77\xC\x50\x81\xDB\xEA\x74\x47\xFD\xDA\xFA\x27\x7B\x22\xDE\x47\xD6\xFF\xEA\x44\x96\x74\xA4\xF9\xFC\xCF\x84\xD1\x50\x69\x8\x93\x80\x28\x4D\xBD\xD3\x5F\x46\xCD\xFF\x12\xA1\xBD\x78\xE4\xEF\x0\x65\xD0\x16\xDF", { 0x07, 0x38, 0xEB, 0x9F, 0x13, 0x2E, 0xD7, 0x56 }, 32772, 0, 1, 2, 0, 5, 0 },
	&g_Mono_Security_dll_Image,
	&g_Mono_Security_Assembly__CustomAttributeCache,
};
Il2CppImage g_Mono_Security_dll_Image = 
{
	 "Mono.Security.dll" ,
	&g_Mono_Security_Assembly,
	g_Mono_Security_Assembly_Types,
	121,
	NULL,
};
static void s_Mono_SecurityRegistration()
{
	RegisterAssembly (&g_Mono_Security_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_Mono_SecurityRegistrationVariable(&s_Mono_SecurityRegistration, NULL);
