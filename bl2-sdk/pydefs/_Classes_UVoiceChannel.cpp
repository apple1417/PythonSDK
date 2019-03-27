#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVoiceChannel(py::module &m)
{
    py::class_< UVoiceChannel,  UChannel   >(m, "UVoiceChannel")
		.def_static("StaticClass", &UVoiceChannel::StaticClass, py::return_value_policy::reference)
          ;
}