#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t741;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t647;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t144;
// Vuforia.Reconstruction
struct Reconstruction_t648;
// Vuforia.QCARManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t742;
// Vuforia.QCARManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t743;
// Vuforia.QCARManagerImpl/PropData[]
struct PropDataU5BU5D_t744;

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m3602 (SmartTerrainBuilderImpl_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m3603 (SmartTerrainBuilderImpl_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m3604 (SmartTerrainBuilderImpl_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m3605 (SmartTerrainBuilderImpl_t741 * __this, ReconstructionAbstractBehaviour_t144 * ___reconstructionBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m3606 (SmartTerrainBuilderImpl_t741 * __this, ReconstructionAbstractBehaviour_t144 * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m3607 (SmartTerrainBuilderImpl_t741 * __this, Object_t * ___reconstruction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m3608 (SmartTerrainBuilderImpl_t741 * __this, SmartTerrainRevisionDataU5BU5D_t742* ___smartTerrainRevisions, SurfaceDataU5BU5D_t743* ___updatedSurfaces, PropDataU5BU5D_t744* ___updatedProps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m3609 (SmartTerrainBuilderImpl_t741 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
