#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltLODModel(py::module &m)
{
    py::class_< FGestaltLODModel >(m, "FGestaltLODModel")
        .def_readwrite("GestaltFragments", &FGestaltLODModel::GestaltFragments)
  ;
}