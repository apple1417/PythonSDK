#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSubtract(py::module &m)
{
    py::class_< UMaterialExpressionSubtract,  UMaterialExpression   >(m, "UMaterialExpressionSubtract")
		.def_static("StaticClass", &UMaterialExpressionSubtract::StaticClass, py::return_value_policy::reference)
        .def_readwrite("A", &UMaterialExpressionSubtract::A)
        .def_readwrite("B", &UMaterialExpressionSubtract::B)
          ;
}