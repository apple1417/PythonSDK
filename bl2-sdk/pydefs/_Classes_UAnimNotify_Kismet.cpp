#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Kismet(py::module &m)
{
    py::class_< UAnimNotify_Kismet,  UAnimNotify   >(m, "UAnimNotify_Kismet")
		.def_static("StaticClass", &UAnimNotify_Kismet::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NotifyName", &UAnimNotify_Kismet::NotifyName)
          ;
}