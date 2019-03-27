#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterFastTravelDefinition(py::module &m)
{
    py::class_< UBehavior_RegisterFastTravelDefinition,  UBehaviorBase   >(m, "UBehavior_RegisterFastTravelDefinition")
		.def_static("StaticClass", &UBehavior_RegisterFastTravelDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StationToRegister", &UBehavior_RegisterFastTravelDefinition::StationToRegister)
        .def("ApplyBehaviorToContext", &UBehavior_RegisterFastTravelDefinition::ApplyBehaviorToContext)
          ;
}