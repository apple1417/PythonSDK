#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxEditDialog(py::module &m)
{
    py::class_< UWillowGFxEditDialog,  UWillowGFxMovie   >(m, "UWillowGFxEditDialog")
		.def_static("StaticClass", &UWillowGFxEditDialog::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tools", &UWillowGFxEditDialog::Tools)
        .def_readwrite("MenuItemCallbacks", &UWillowGFxEditDialog::MenuItemCallbacks)
        .def("GetDefaultEditBoxValue", &UWillowGFxEditDialog::GetDefaultEditBoxValue)
        .def("DisplayOkBox", &UWillowGFxEditDialog::DisplayOkBox)
        .def("extMenuItemClicked", &UWillowGFxEditDialog::extMenuItemClicked)
        .def("GetEditBoxValueForTag", &UWillowGFxEditDialog::GetEditBoxValueForTag)
        .def("SetDialogueText", &UWillowGFxEditDialog::SetDialogueText)
        .def("SetCaptionText", &UWillowGFxEditDialog::SetCaptionText)
        .def("ApplyLayout", &UWillowGFxEditDialog::ApplyLayout)
        .def("AddMenuItem", &UWillowGFxEditDialog::AddMenuItem)
        .def("AddEditItem", &UWillowGFxEditDialog::AddEditItem)
        .def("HandleInputKey", &UWillowGFxEditDialog::HandleInputKey)
        .def("GetLocalPlayerID", &UWillowGFxEditDialog::GetLocalPlayerID)
        .def("eventOnClose", &UWillowGFxEditDialog::eventOnClose)
        .def("eventStart", &UWillowGFxEditDialog::eventStart)
        .def("OnMenuItemClicked", &UWillowGFxEditDialog::OnMenuItemClicked)
          ;
}