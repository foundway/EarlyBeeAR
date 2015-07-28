﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1635;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1628;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1637;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void RemoteCertificateValidationCallback__ctor_m8791 (RemoteCertificateValidationCallback_t1635 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool RemoteCertificateValidationCallback_Invoke_m8792 (RemoteCertificateValidationCallback_t1635 * __this, Object_t * ___sender, X509Certificate_t1628 * ___certificate, X509Chain_t1637 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1635(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t1628 * ___certificate, X509Chain_t1637 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C" Object_t * RemoteCertificateValidationCallback_BeginInvoke_m8793 (RemoteCertificateValidationCallback_t1635 * __this, Object_t * ___sender, X509Certificate_t1628 * ___certificate, X509Chain_t1637 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool RemoteCertificateValidationCallback_EndInvoke_m8794 (RemoteCertificateValidationCallback_t1635 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;