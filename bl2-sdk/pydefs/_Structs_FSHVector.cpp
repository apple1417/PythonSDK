#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSHVector(py::module &m)
{
    py::class_< FSHVector >(m, "FSHVector")
  ;
}