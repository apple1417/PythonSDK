#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_MissionCustomEvent(py::module &m)
{
    py::class_< UWillowSeqAct_MissionCustomEvent,  USequenceAction   >(m, "UWillowSeqAct_MissionCustomEvent")
		.def_static("StaticClass", &UWillowSeqAct_MissionCustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssociatedMission", &UWillowSeqAct_MissionCustomEvent::AssociatedMission)
        .def_readwrite("EventName", &UWillowSeqAct_MissionCustomEvent::EventName)
          ;
}