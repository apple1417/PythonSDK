#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIGBXNavMeshObstaclePointer(py::module &m)
{
    py::class_< FIGBXNavMeshObstaclePointer >(m, "FIGBXNavMeshObstaclePointer")
        .def_readwrite("Dummy", &FIGBXNavMeshObstaclePointer::Dummy)
  ;
}