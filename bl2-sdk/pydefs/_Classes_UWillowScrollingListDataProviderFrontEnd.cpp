#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderFrontEnd(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderFrontEnd,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderFrontEnd")
		.def_static("StaticClass", &UWillowScrollingListDataProviderFrontEnd::StaticClass, py::return_value_policy::reference)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderFrontEnd::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderFrontEnd::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderFrontEnd::HandleClick)
          ;
}