﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1669;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1659;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1665;
// System.Security.Cryptography.Oid
struct Oid_t1658;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1660;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t1670  : public X509Certificate_t1628
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::_archived
	bool ____archived_5;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::_extensions
	X509ExtensionCollection_t1669 * ____extensions_6;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_name
	String_t* ____name_7;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_serial
	String_t* ____serial_8;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::_publicKey
	PublicKey_t1659 * ____publicKey_9;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::issuer_name
	X500DistinguishedName_t1665 * ___issuer_name_10;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::subject_name
	X500DistinguishedName_t1665 * ___subject_name_11;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::signature_algorithm
	Oid_t1658 * ___signature_algorithm_12;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::_cert
	X509Certificate_t1660 * ____cert_13;
};
struct X509Certificate2_t1670_StaticFields{
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::empty_error
	String_t* ___empty_error_14;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::commonName
	ByteU5BU5D_t679* ___commonName_15;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::email
	ByteU5BU5D_t679* ___email_16;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t679* ___signedData_17;
};
