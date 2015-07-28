#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<MazeCoord>
struct Predicate_1_t3124;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"

// System.Void System.Predicate`1<MazeCoord>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15933_gshared (Predicate_1_t3124 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m15933(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3124 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15933_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<MazeCoord>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15934_gshared (Predicate_1_t3124 * __this, MazeCoord_t28  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15934(__this, ___obj, method) (( bool (*) (Predicate_1_t3124 *, MazeCoord_t28 , MethodInfo*))Predicate_1_Invoke_m15934_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<MazeCoord>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15935_gshared (Predicate_1_t3124 * __this, MazeCoord_t28  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15935(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3124 *, MazeCoord_t28 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15935_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<MazeCoord>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15936_gshared (Predicate_1_t3124 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15936(__this, ___result, method) (( bool (*) (Predicate_1_t3124 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15936_gshared)(__this, ___result, method)
