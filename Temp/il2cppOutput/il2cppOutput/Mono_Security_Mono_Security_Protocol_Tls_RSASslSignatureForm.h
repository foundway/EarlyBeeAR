﻿#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t1662;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1884;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1042;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t1945  : public AsymmetricSignatureFormatter_t1946
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t1662 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1884 * ___hash_1;
};
struct RSASslSignatureFormatter_t1945_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t1042 * ___U3CU3Ef__switch$map16_2;
};