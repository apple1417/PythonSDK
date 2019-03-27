#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleBeamModifier(py::module &m)
{
    py::class_< UParticleModuleBeamModifier,  UParticleModuleBeamBase   >(m, "UParticleModuleBeamModifier")
		.def_static("StaticClass", &UParticleModuleBeamModifier::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ModifierType", &UParticleModuleBeamModifier::ModifierType)
        .def_readwrite("PositionOptions", &UParticleModuleBeamModifier::PositionOptions)
        .def_readwrite("Position", &UParticleModuleBeamModifier::Position)
        .def_readwrite("TangentOptions", &UParticleModuleBeamModifier::TangentOptions)
        .def_readwrite("Tangent", &UParticleModuleBeamModifier::Tangent)
        .def_readwrite("StrengthOptions", &UParticleModuleBeamModifier::StrengthOptions)
        .def_readwrite("Strength", &UParticleModuleBeamModifier::Strength)
          ;
}