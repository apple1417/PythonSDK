#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldNova(py::module &m)
{
    py::class_< UWillowDmgSource_ShieldNova,  UWillowDmgSource_Shield   >(m, "UWillowDmgSource_ShieldNova")
		.def_static("StaticClass", &UWillowDmgSource_ShieldNova::StaticClass, py::return_value_policy::reference)
          ;
}