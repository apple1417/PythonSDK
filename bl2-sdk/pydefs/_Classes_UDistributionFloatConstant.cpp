#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatConstant(py::module &m)
{
    py::class_< UDistributionFloatConstant,  UDistributionFloat   >(m, "UDistributionFloatConstant")
		.def_static("StaticClass", &UDistributionFloatConstant::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Constant", &UDistributionFloatConstant::Constant)
          ;
}