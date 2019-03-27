#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWindDirectionalSource(py::module &m)
{
    py::class_< AWindDirectionalSource,  AInfo   >(m, "AWindDirectionalSource")
		.def_static("StaticClass", &AWindDirectionalSource::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Component", &AWindDirectionalSource::Component)
          ;
}