#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1940;
// System.IO.Stream
struct Stream_t1924;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t180;
// System.Threading.WaitHandle
struct WaitHandle_t1941;
// System.AsyncCallback
struct AsyncCallback_t42;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m9695 (ReceiveRecordAsyncResult_t1940 * __this, AsyncCallback_t42 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t679* ___initialBuffer, Stream_t1924 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1924 * ReceiveRecordAsyncResult_get_Record_m9696 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t679* ReceiveRecordAsyncResult_get_ResultingBuffer_m9697 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t679* ReceiveRecordAsyncResult_get_InitialBuffer_m9698 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m9699 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t180 * ReceiveRecordAsyncResult_get_AsyncException_m9700 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m9701 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1941 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m9702 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m9703 (ReceiveRecordAsyncResult_t1940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9704 (ReceiveRecordAsyncResult_t1940 * __this, Exception_t180 * ___ex, ByteU5BU5D_t679* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9705 (ReceiveRecordAsyncResult_t1940 * __this, Exception_t180 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m9706 (ReceiveRecordAsyncResult_t1940 * __this, ByteU5BU5D_t679* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
