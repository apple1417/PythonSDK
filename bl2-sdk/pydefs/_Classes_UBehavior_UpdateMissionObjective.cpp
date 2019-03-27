#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpdateMissionObjective(py::module &m)
{
    py::class_< UBehavior_UpdateMissionObjective,  UBehaviorBase   >(m, "UBehavior_UpdateMissionObjective")
		.def_static("StaticClass", &UBehavior_UpdateMissionObjective::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MissionObjective", &UBehavior_UpdateMissionObjective::MissionObjective)
        .def("ApplyBehaviorToContext", &UBehavior_UpdateMissionObjective::ApplyBehaviorToContext)
          ;
}