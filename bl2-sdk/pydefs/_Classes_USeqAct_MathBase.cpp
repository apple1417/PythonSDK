#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MathBase(py::module &m)
{
    py::class_< USeqAct_MathBase,  USequenceAction   >(m, "USeqAct_MathBase")
		.def_static("StaticClass", &USeqAct_MathBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
          ;
}