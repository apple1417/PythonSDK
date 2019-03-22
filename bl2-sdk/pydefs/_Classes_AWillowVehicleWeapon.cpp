#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicleWeapon(py::object m)
{
    py::class_< AWillowVehicleWeapon,  AWillowWeapon   >(m, "AWillowVehicleWeapon")
        .def_readwrite("SeatIndex", &AWillowVehicleWeapon::SeatIndex)
        .def_readwrite("MyVehicle", &AWillowVehicleWeapon::MyVehicle)
        .def_readwrite("FireTriggerTags", &AWillowVehicleWeapon::FireTriggerTags)
        .def_readwrite("AltFireTriggerTags", &AWillowVehicleWeapon::AltFireTriggerTags)
        .def_readwrite("GoodAimColor", &AWillowVehicleWeapon::GoodAimColor)
        .def_readwrite("BadAimColor", &AWillowVehicleWeapon::BadAimColor)
        .def_readwrite("AimTraceRange", &AWillowVehicleWeapon::AimTraceRange)
        .def_readwrite("CrosshairOwner", &AWillowVehicleWeapon::CrosshairOwner)
        .def("StaticClass", &AWillowVehicleWeapon::StaticClass, py::return_value_policy::reference)
        .def("ClearFlashLocation", &AWillowVehicleWeapon::ClearFlashLocation)
        .def("ClearFlashCount", &AWillowVehicleWeapon::ClearFlashCount)
        .def("GetBurstInterval", &AWillowVehicleWeapon::GetBurstInterval)
        .def("GetFireInterval", &AWillowVehicleWeapon::GetFireInterval)
        .def("WeaponPlayAkEvent", &AWillowVehicleWeapon::WeaponPlayAkEvent)
        .def("CanBeUsedBy", &AWillowVehicleWeapon::CanBeUsedBy)
        .def("ServerOnAltFireTriggered", &AWillowVehicleWeapon::ServerOnAltFireTriggered)
        .def("RouteCallToServerForAltFireTrigger", &AWillowVehicleWeapon::RouteCallToServerForAltFireTrigger)
        .def("StartZoom", &AWillowVehicleWeapon::StartZoom)
        .def("PlayAnimation", &AWillowVehicleWeapon::PlayAnimation)
        .def("PlayFirstPersonBodyAnimation", [](AWillowVehicleWeapon &self , unsigned char ActionType, float PlayRateScale, float Duration) { class USpecialMoveDefinition** pyPlayedSMD = 0 ;  float ret =  self.PlayFirstPersonBodyAnimation(ActionType, PlayRateScale, Duration, pyPlayedSMD); return py::make_tuple(ret, *pyPlayedSMD); })
        .def("ExecuteProjectileFiredConstructEvent", &AWillowVehicleWeapon::ExecuteProjectileFiredConstructEvent)
        .def("eventProjectileDefinitionFire", &AWillowVehicleWeapon::eventProjectileDefinitionFire, py::return_value_policy::reference)
        .def("ProjectileFire", &AWillowVehicleWeapon::ProjectileFire, py::return_value_policy::reference)
        .def("AdjustFiredProjectileVelocity", &AWillowVehicleWeapon::AdjustFiredProjectileVelocity)
        .def("ClientStopZoom", &AWillowVehicleWeapon::ClientStopZoom)
        .def("InstantFireEndTrace", &AWillowVehicleWeapon::InstantFireEndTrace)
        .def("GetTracerStartLocation", &AWillowVehicleWeapon::GetTracerStartLocation)
        .def("InstantFireStartTrace", &AWillowVehicleWeapon::InstantFireStartTrace)
        .def("IsCrosshairEnabled", &AWillowVehicleWeapon::IsCrosshairEnabled)
        .def("GetAdjustedAim", &AWillowVehicleWeapon::GetAdjustedAim)
        .def("AddAccuracyImpulse", &AWillowVehicleWeapon::AddAccuracyImpulse)
        .def("eventNotifyTargetLockSuccessful", &AWillowVehicleWeapon::eventNotifyTargetLockSuccessful)
        .def("EndFire", &AWillowVehicleWeapon::EndFire)
        .def("BeginFire", &AWillowVehicleWeapon::BeginFire)
        .def("GetPhysicalFireStartLoc", &AWillowVehicleWeapon::GetPhysicalFireStartLoc)
        .def("NotifyWeaponNotBeingOperated", &AWillowVehicleWeapon::NotifyWeaponNotBeingOperated)
        .def("NotifyWeaponBeingOperated", &AWillowVehicleWeapon::NotifyWeaponBeingOperated)
        .def("PutDownWeapon", &AWillowVehicleWeapon::PutDownWeapon)
        .def("Activate", &AWillowVehicleWeapon::Activate)
        .def("DetachWeapon", &AWillowVehicleWeapon::DetachWeapon)
        .def("AttachWeaponTo", &AWillowVehicleWeapon::AttachWeaponTo)
        .def("GetHand", &AWillowVehicleWeapon::GetHand)
        .def("SetHand", &AWillowVehicleWeapon::SetHand)
        .def("GetFireTriggerTag", &AWillowVehicleWeapon::GetFireTriggerTag)
        .def("IsAimCorrect", &AWillowVehicleWeapon::IsAimCorrect)
        .def("GetDesiredAimPoint", &AWillowVehicleWeapon::GetDesiredAimPoint)
        .def("ClientWeaponSetWaitForAmmoPool", &AWillowVehicleWeapon::ClientWeaponSetWaitForAmmoPool)
        .def("GetResourcePoolContext", &AWillowVehicleWeapon::GetResourcePoolContext, py::return_value_policy::reference)
        .def("AssociateAmmoPool", &AWillowVehicleWeapon::AssociateAmmoPool)
        .def("AddAmmo", &AWillowVehicleWeapon::AddAmmo)
        .def("InitializeWeaponAfterBringUp", &AWillowVehicleWeapon::InitializeWeaponAfterBringUp)
        .def("HasSpareAmmo", &AWillowVehicleWeapon::HasSpareAmmo)
        .def("eventGetAmmoCount", &AWillowVehicleWeapon::eventGetAmmoCount)
        .def("PostBeginPlay", &AWillowVehicleWeapon::PostBeginPlay)
        .def("RefreshCrosshairForPlayer", &AWillowVehicleWeapon::RefreshCrosshairForPlayer)
        .def("eventReplicatedEvent", &AWillowVehicleWeapon::eventReplicatedEvent)
          ;
}