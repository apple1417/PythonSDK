#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWorldLightColor(py::module &m)
{
    py::class_< UMaterialExpressionWorldLightColor,  UMaterialExpression   >(m, "UMaterialExpressionWorldLightColor")
		.def_static("StaticClass", &UMaterialExpressionWorldLightColor::StaticClass, py::return_value_policy::reference)
          ;
}