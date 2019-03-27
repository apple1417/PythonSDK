#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateGroup(py::module &m)
{
    py::class_< UGearboxDialogTemplateGroup,  UGearboxDialogGroup   >(m, "UGearboxDialogTemplateGroup")
		.def_static("StaticClass", &UGearboxDialogTemplateGroup::StaticClass, py::return_value_policy::reference)
          ;
}