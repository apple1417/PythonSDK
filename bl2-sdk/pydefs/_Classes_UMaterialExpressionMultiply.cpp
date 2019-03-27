#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMultiply(py::module &m)
{
    py::class_< UMaterialExpressionMultiply,  UMaterialExpression   >(m, "UMaterialExpressionMultiply")
		.def_static("StaticClass", &UMaterialExpressionMultiply::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionMultiply::A)
        .def_readwrite("B", &UMaterialExpressionMultiply::B)
          ;
}