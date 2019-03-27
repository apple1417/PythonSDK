#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPrimitiveComponent(py::module &m)
{
    py::class_< UPrimitiveComponent,  UActorComponent   >(m, "UPrimitiveComponent")
		.def_static("StaticClass", &UPrimitiveComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tag", &UPrimitiveComponent::Tag)
        .def_readwrite("Bounds", &UPrimitiveComponent::Bounds)
        .def_readwrite("SceneInfo", &UPrimitiveComponent::SceneInfo)
        .def_readwrite("DetachFence", &UPrimitiveComponent::DetachFence)
        .def_readwrite("_LocalToWorldDeterminant", &UPrimitiveComponent::_LocalToWorldDeterminant)
        .def_readwrite("_LocalToWorld", &UPrimitiveComponent::_LocalToWorld)
        .def_readwrite("_WorldToLocal", &UPrimitiveComponent::_WorldToLocal)
        .def_readwrite("_LocalToWorldScale", &UPrimitiveComponent::_LocalToWorldScale)
        .def_readwrite("MotionBlurInfoIndex", &UPrimitiveComponent::MotionBlurInfoIndex)
        .def_readwrite("DecalList", &UPrimitiveComponent::DecalList)
        .def_readwrite("DecalsToReattach", &UPrimitiveComponent::DecalsToReattach)
        .def_readwrite("FogVolumeComponent", &UPrimitiveComponent::FogVolumeComponent)
        .def_readwrite("OverrideLightComponent", &UPrimitiveComponent::OverrideLightComponent)
        .def_readwrite("LightEnvironment", &UPrimitiveComponent::LightEnvironment)
        .def_readwrite("PreviousLightEnvironment", &UPrimitiveComponent::PreviousLightEnvironment)
        .def_readwrite("MinDrawDistance", &UPrimitiveComponent::MinDrawDistance)
        .def_readwrite("MaxDrawDistance", &UPrimitiveComponent::MaxDrawDistance)
        .def_readwrite("CachedMaxDrawDistance", &UPrimitiveComponent::CachedMaxDrawDistance)
        .def_readwrite("MotionBlurInstanceScale", &UPrimitiveComponent::MotionBlurInstanceScale)
        .def_readwrite("DepthPriorityGroup", &UPrimitiveComponent::DepthPriorityGroup)
        .def_readwrite("DetailMode", &UPrimitiveComponent::DetailMode)
        .def_readwrite("RBChannel", &UPrimitiveComponent::RBChannel)
        .def_readwrite("DynamicShadowCastRelevance", &UPrimitiveComponent::DynamicShadowCastRelevance)
        .def_readwrite("RBDominanceGroup", &UPrimitiveComponent::RBDominanceGroup)
        .def_readwrite("PreviewEnvironmentShadowing", &UPrimitiveComponent::PreviewEnvironmentShadowing)
        .def_readwrite("ScriptRigidBodyCollisionThresholdCompiled", &UPrimitiveComponent::ScriptRigidBodyCollisionThresholdCompiled)
        .def_readwrite("TranslucencySortPriority", &UPrimitiveComponent::TranslucencySortPriority)
        .def_readwrite("OctreeNodes", &UPrimitiveComponent::OctreeNodes)
        .def_readwrite("VisibilityId", &UPrimitiveComponent::VisibilityId)
        .def_readwrite("LightingChannels", &UPrimitiveComponent::LightingChannels)
        .def_readwrite("RBCollideWithChannels", &UPrimitiveComponent::RBCollideWithChannels)
        .def_readwrite("PhysMaterialOverride", &UPrimitiveComponent::PhysMaterialOverride)
        .def_readwrite("BodyInstance", &UPrimitiveComponent::BodyInstance)
        .def_readwrite("CachedParentToWorld", &UPrimitiveComponent::CachedParentToWorld)
        .def_readwrite("CachedParentToWorldScale", &UPrimitiveComponent::CachedParentToWorldScale)
        .def_readwrite("Translation", &UPrimitiveComponent::Translation)
        .def_readwrite("Rotation", &UPrimitiveComponent::Rotation)
        .def_readwrite("Scale", &UPrimitiveComponent::Scale)
        .def_readwrite("Scale3D", &UPrimitiveComponent::Scale3D)
        .def_readwrite("BoundsScale", &UPrimitiveComponent::BoundsScale)
        .def_readwrite("LastSubmitTime", &UPrimitiveComponent::LastSubmitTime)
        .def_readwrite("LastRenderTime", &UPrimitiveComponent::LastRenderTime)
        .def("Behavior_ChangeCollisionSize", &UPrimitiveComponent::Behavior_ChangeCollisionSize)
        .def("Behavior_ChangeCollision", &UPrimitiveComponent::Behavior_ChangeCollision)
        .def("TickInstanceDataAttachment", &UPrimitiveComponent::TickInstanceDataAttachment)
        .def("Behavior_ChangeScale", &UPrimitiveComponent::Behavior_ChangeScale)
        .def("Behavior_ChangeVisibility", &UPrimitiveComponent::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &UPrimitiveComponent::Behavior_ToggleVisibility)
        .def("ClosestPointOnComponentToComponent", [](UPrimitiveComponent &self , struct FVector* PointOnComponentA, struct FVector* PointOnComponentB) { class UPrimitiveComponent** pyOtherComponent = 0 ;  unsigned char ret =  self.ClosestPointOnComponentToComponent(pyOtherComponent, PointOnComponentA, PointOnComponentB); return py::make_tuple(ret, *pyOtherComponent); })
        .def("ClosestPointOnComponentToPoint", &UPrimitiveComponent::ClosestPointOnComponentToPoint)
        .def("GetRotation", &UPrimitiveComponent::GetRotation)
        .def("GetPosition", &UPrimitiveComponent::GetPosition)
        .def("SetAbsolute", &UPrimitiveComponent::SetAbsolute)
        .def("SetScale3D", &UPrimitiveComponent::SetScale3D)
        .def("SetScale", &UPrimitiveComponent::SetScale)
        .def("SetRotation", &UPrimitiveComponent::SetRotation)
        .def("SetTranslation", &UPrimitiveComponent::SetTranslation)
        .def("SetActorCollision", &UPrimitiveComponent::SetActorCollision)
        .def("SetTraceBlocking", &UPrimitiveComponent::SetTraceBlocking)
        .def("SetInWorldForeground", &UPrimitiveComponent::SetInWorldForeground)
        .def("SetDepthPriorityGroup", &UPrimitiveComponent::SetDepthPriorityGroup)
        .def("SetLightingChannels", &UPrimitiveComponent::SetLightingChannels)
        .def("SetCullDistance", &UPrimitiveComponent::SetCullDistance)
        .def("SetLightEnvironment", &UPrimitiveComponent::SetLightEnvironment)
        .def("SetShadowParent", &UPrimitiveComponent::SetShadowParent)
        .def("SetIgnoreOwnerHidden", &UPrimitiveComponent::SetIgnoreOwnerHidden)
        .def("SetPlayerOwnerNoSee", &UPrimitiveComponent::SetPlayerOwnerNoSee)
        .def("SetOnlyPlayerOwnerSee", &UPrimitiveComponent::SetOnlyPlayerOwnerSee)
        .def("SetOnlyOwnerSee", &UPrimitiveComponent::SetOnlyOwnerSee)
        .def("SetOwnerNoSee", &UPrimitiveComponent::SetOwnerNoSee)
        .def("SetHidden", &UPrimitiveComponent::SetHidden)
        .def("ShouldComponentAddToScene", &UPrimitiveComponent::ShouldComponentAddToScene)
        .def("SetRBDominanceGroup", &UPrimitiveComponent::SetRBDominanceGroup)
        .def("GetRootBodyInstance", &UPrimitiveComponent::GetRootBodyInstance, py::return_value_policy::reference)
        .def("GetPhysicalMaterial", &UPrimitiveComponent::GetPhysicalMaterial, py::return_value_policy::reference)
        .def("SetPhysMaterialOverride", &UPrimitiveComponent::SetPhysMaterialOverride)
        .def("InitRBPhys", &UPrimitiveComponent::InitRBPhys)
        .def("SetNotifyRigidBodyCollision", &UPrimitiveComponent::SetNotifyRigidBodyCollision)
        .def("SetRBChannel", &UPrimitiveComponent::SetRBChannel)
        .def("SetRBCollisionChannels", &UPrimitiveComponent::SetRBCollisionChannels)
        .def("SetRBCollidesWithChannel", &UPrimitiveComponent::SetRBCollidesWithChannel)
        .def("SetBlockRigidBody", &UPrimitiveComponent::SetBlockRigidBody)
        .def("RigidBodyIsAwake", &UPrimitiveComponent::RigidBodyIsAwake)
        .def("PutRigidBodyToSleep", &UPrimitiveComponent::PutRigidBodyToSleep)
        .def("WakeRigidBody", &UPrimitiveComponent::WakeRigidBody)
        .def("SetRBRotation", &UPrimitiveComponent::SetRBRotation)
        .def("SetRBPosition", &UPrimitiveComponent::SetRBPosition)
        .def("RetardRBLinearVelocity", &UPrimitiveComponent::RetardRBLinearVelocity)
        .def("SetRBAngularVelocity", &UPrimitiveComponent::SetRBAngularVelocity)
        .def("SetRBLinearVelocity", &UPrimitiveComponent::SetRBLinearVelocity)
        .def("AddTorque", &UPrimitiveComponent::AddTorque)
        .def("AddRadialForce", &UPrimitiveComponent::AddRadialForce)
        .def("AddForce", &UPrimitiveComponent::AddForce)
        .def("AddRadialImpulse", &UPrimitiveComponent::AddRadialImpulse)
        .def("AddImpulse", &UPrimitiveComponent::AddImpulse)
          ;
}