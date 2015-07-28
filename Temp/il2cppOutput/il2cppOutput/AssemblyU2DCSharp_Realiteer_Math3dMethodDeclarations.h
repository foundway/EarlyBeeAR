#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Realiteer.Math3d
struct Math3d_t26;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Realiteer.Math3d::.ctor()
extern "C" void Math3d__ctor_m39 (Math3d_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::.cctor()
extern "C" void Math3d__cctor_m40 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::Init()
extern "C" void Math3d_Init_m41 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::AddVectorLength(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5  Math3d_AddVectorLength_m42 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::SetVectorLength(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5  Math3d_SetVectorLength_m43 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Realiteer.Math3d::SubtractRotation(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t10  Math3d_SubtractRotation_m44 (Object_t * __this /* static, unused */, Quaternion_t10  ___B, Quaternion_t10  ___A, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::PlanePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_PlanePlaneIntersection_m45 (Object_t * __this /* static, unused */, Vector3_t5 * ___linePoint, Vector3_t5 * ___lineVec, Vector3_t5  ___plane1Normal, Vector3_t5  ___plane1Position, Vector3_t5  ___plane2Normal, Vector3_t5  ___plane2Position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::LinePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_LinePlaneIntersection_m46 (Object_t * __this /* static, unused */, Vector3_t5 * ___intersection, Vector3_t5  ___linePoint, Vector3_t5  ___lineVec, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::LineLineIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_LineLineIntersection_m47 (Object_t * __this /* static, unused */, Vector3_t5 * ___intersection, Vector3_t5  ___linePoint1, Vector3_t5  ___lineVec1, Vector3_t5  ___linePoint2, Vector3_t5  ___lineVec2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::ClosestPointsOnTwoLines(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_ClosestPointsOnTwoLines_m48 (Object_t * __this /* static, unused */, Vector3_t5 * ___closestPointLine1, Vector3_t5 * ___closestPointLine2, Vector3_t5  ___linePoint1, Vector3_t5  ___lineVec1, Vector3_t5  ___linePoint2, Vector3_t5  ___lineVec2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectPointOnLine_m49 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint, Vector3_t5  ___lineVec, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectPointOnLineSegment_m50 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectPointOnPlane_m51 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::ProjectVectorOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectVectorOnPlane_m52 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___vector, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::SignedDistancePlanePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_SignedDistancePlanePoint_m53 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::SignedDotProduct(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_SignedDotProduct_m54 (Object_t * __this /* static, unused */, Vector3_t5  ___vectorA, Vector3_t5  ___vectorB, Vector3_t5  ___normal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::SignedVectorAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_SignedVectorAngle_m55 (Object_t * __this /* static, unused */, Vector3_t5  ___referenceVector, Vector3_t5  ___otherVector, Vector3_t5  ___normal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::AngleVectorPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_AngleVectorPlane_m56 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, Vector3_t5  ___normal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::DotProductAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_DotProductAngle_m57 (Object_t * __this /* static, unused */, Vector3_t5  ___vec1, Vector3_t5  ___vec2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::PlaneFrom3Points(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Math3d_PlaneFrom3Points_m58 (Object_t * __this /* static, unused */, Vector3_t5 * ___planeNormal, Vector3_t5 * ___planePoint, Vector3_t5  ___pointA, Vector3_t5  ___pointB, Vector3_t5  ___pointC, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::GetForwardVector(UnityEngine.Quaternion)
extern "C" Vector3_t5  Math3d_GetForwardVector_m59 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::GetUpVector(UnityEngine.Quaternion)
extern "C" Vector3_t5  Math3d_GetUpVector_m60 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::GetRightVector(UnityEngine.Quaternion)
extern "C" Vector3_t5  Math3d_GetRightVector_m61 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Realiteer.Math3d::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C" Quaternion_t10  Math3d_QuaternionFromMatrix_m62 (Object_t * __this /* static, unused */, Matrix4x4_t27  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Realiteer.Math3d::PositionFromMatrix(UnityEngine.Matrix4x4)
extern "C" Vector3_t5  Math3d_PositionFromMatrix_m63 (Object_t * __this /* static, unused */, Matrix4x4_t27  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::LookRotationExtended(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Math3d_LookRotationExtended_m64 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___alignWithVector, Vector3_t5  ___alignWithNormal, Vector3_t5  ___customForward, Vector3_t5  ___customUp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::TransformWithParent(UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void Math3d_TransformWithParent_m65 (Object_t * __this /* static, unused */, Quaternion_t10 * ___childRotation, Vector3_t5 * ___childPosition, Quaternion_t10  ___parentRotation, Vector3_t5  ___parentPosition, Quaternion_t10  ___startParentRotation, Vector3_t5  ___startParentPosition, Quaternion_t10  ___startChildRotation, Vector3_t5  ___startChildPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::PreciseAlign(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Math3d_PreciseAlign_m66 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___alignWithVector, Vector3_t5  ___alignWithNormal, Vector3_t5  ___alignWithPosition, Vector3_t5  ___triangleForward, Vector3_t5  ___triangleNormal, Vector3_t5  ___trianglePosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Math3d::VectorsToTransform(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Math3d_VectorsToTransform_m67 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___positionVector, Vector3_t5  ___directionVector, Vector3_t5  ___normalVector, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Realiteer.Math3d::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" int32_t Math3d_PointOnWhichSideOfLineSegment_m68 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::MouseDistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_MouseDistanceToLine_m69 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::MouseDistanceToCircle(UnityEngine.Vector3,System.Single)
extern "C" float Math3d_MouseDistanceToCircle_m70 (Object_t * __this /* static, unused */, Vector3_t5  ___point, float ___radius, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::IsLineInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_IsLineInRectangle_m71 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___rectA, Vector3_t5  ___rectB, Vector3_t5  ___rectC, Vector3_t5  ___rectD, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::IsPointInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_IsPointInRectangle_m72 (Object_t * __this /* static, unused */, Vector3_t5  ___point, Vector3_t5  ___rectA, Vector3_t5  ___rectC, Vector3_t5  ___rectB, Vector3_t5  ___rectD, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::AreLineSegmentsCrossing(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_AreLineSegmentsCrossing_m73 (Object_t * __this /* static, unused */, Vector3_t5  ___pointA1, Vector3_t5  ___pointA2, Vector3_t5  ___pointB1, Vector3_t5  ___pointB2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Realiteer.Math3d::LinearAcceleration(UnityEngine.Vector3&,UnityEngine.Vector3,System.Int32)
extern "C" bool Math3d_LinearAcceleration_m74 (Object_t * __this /* static, unused */, Vector3_t5 * ___vector, Vector3_t5  ___position, int32_t ___samples, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::LinearFunction2DBasic(System.Single,System.Single,System.Single)
extern "C" float Math3d_LinearFunction2DBasic_m75 (Object_t * __this /* static, unused */, float ___x, float ___Qx, float ___Qy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Realiteer.Math3d::LinearFunction2DFull(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" float Math3d_LinearFunction2DFull_m76 (Object_t * __this /* static, unused */, float ___x, float ___Px, float ___Py, float ___Qx, float ___Qy, MethodInfo* method) IL2CPP_METHOD_ATTR;
