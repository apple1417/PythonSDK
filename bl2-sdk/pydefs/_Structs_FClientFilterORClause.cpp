#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientFilterORClause(py::module &m)
{
    py::class_< FClientFilterORClause >(m, "FClientFilterORClause")
        .def_readwrite("OrParams", &FClientFilterORClause::OrParams)
  ;
}