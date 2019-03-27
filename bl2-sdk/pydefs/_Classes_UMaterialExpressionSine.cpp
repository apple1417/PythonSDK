#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSine(py::module &m)
{
    py::class_< UMaterialExpressionSine,  UMaterialExpression   >(m, "UMaterialExpressionSine")
		.def_static("StaticClass", &UMaterialExpressionSine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionSine::Input)
        .def_readwrite("Period", &UMaterialExpressionSine::Period)
          ;
}