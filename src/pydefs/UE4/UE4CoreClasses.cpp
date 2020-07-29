#include "stdafx.h"

#ifdef UE4
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_classes(py::module& m)
{
	py::class_< UObject >(m, "UObject")
		.def_static("StaticClass", &UObject::StaticClass, py::return_value_policy::reference)
		.def_static("FindClass", &UObject::FindClass, py::return_value_policy::reference)
		.def_static("FindObjectsRegex", &UObject::FindObjectsRegex, py::return_value_policy::reference)
		.def_static("FindObjectsContaining", &UObject::FindObjectsContaining, py::return_value_policy::reference)

		.def_readwrite("ObjectFlags", &UObject::ObjectFlags, py::return_value_policy::reference)
		.def_readwrite("InternalIndex", &UObject::InternalIndex)
		.def_readwrite("Outer", &UObject::Outer, py::return_value_policy::reference)
		.def_readwrite("Name", &UObject::Name, py::return_value_policy::reference)
		.def_readwrite("Class", &UObject::Class, py::return_value_policy::reference)
		.def_static("FindAll", &UObject::FindAll, py::return_value_policy::reference)
		.def("GetPackageObject", &UObject::GetPackageObject, py::return_value_policy::reference)
		.def("GetName", &UObject::GetName)
		.def("GetNameCPP", &UObject::GetNameCpp)
		.def("GetFullName", &UObject::GetFullName)
		.def("GetObjectName", &UObject::GetObjectName)
		.def("DumpObject", &UObject::DumpObject)
		.def("__repr__", &UObject::GetFullName)
		.def("__getattr__", &UObject::GetProperty, py::return_value_policy::reference)
		.def("__setattr__", &UObject::SetProperty, py::return_value_policy::reference)
		.def("GetAddress", [](UObject* self) { return (int)self; });

	py::class_< UTextBuffer, UObject >(m, "UTextBuffer");
	py::class_< UPackageMap, UObject >(m, "UPackageMap");
	py::class_< UObjectRedirector, UObject >(m, "UObjectRedirector");
	py::class_< UMetaData, UObject >(m, "UMetaData");
	py::class_< UInterface, UObject >(m, "UInterface");

	py::class_< UField, UObject >(m, "UField")
		.def_readwrite("Next", &UField::Next, py::return_value_policy::reference);

	py::class_< UStruct, UField >(m, "UStruct")
		.def_readwrite("SuperField", &UStruct::SuperField, py::return_value_policy::reference)
		.def_readwrite("Children", &UStruct::Children, py::return_value_policy::reference)
		.def_readwrite("PropertySize", &UStruct::PropertySize)
		.def("FindChildByName", &UStruct::FindChildByName, py::return_value_policy::reference);

	py::class_< UScriptStruct, UStruct >(m, "UScriptStruct");

	py::class_< UFunction, UStruct >(m, "UFunction")
		.def_readwrite("FunctionFlags", &UFunction::FunctionFlags)
		.def_readwrite("RepOffset", &UFunction::RepOffset)
		.def_readwrite("NumParams", &UFunction::NumParams)
		.def_readwrite("ParamsSize", &UFunction::ParamsSize)
		.def_readwrite("ReturnValueOffset", &UFunction::ReturnValueOffset)
		.def_readwrite("Func", &UFunction::Func, py::return_value_policy::reference);

	py::class_< FFunction >(m, "FFunction")
		.def("__getattr__", [](FFunction self, std::string& in) { return self.func->GetProperty(in); }, py::return_value_policy::reference)
		.def("__call__", &FFunction::Call, py::return_value_policy::reference)
		.def_readwrite("obj", &FFunction::obj, py::return_value_policy::reference)
		.def_readwrite("func", &FFunction::func, py::return_value_policy::reference);

	py::class_< UProperty, UField >(m, "UProperty")
		.def_readwrite("ArrayDim", &UProperty::ArrayDim)
		.def_readwrite("ElementSize", &UProperty::ElementSize)
		.def_readwrite("PropertyFlags", &UProperty::PropertyFlags)
		.def_readwrite("RepIndex", &UProperty::RepIndex)
		.def_readwrite("BlueprintReplicationCondition", &UProperty::BlueprintReplicationCondition)
		.def_readwrite("Offset_Internal", &UProperty::Offset_Internal)
		.def_readwrite("RepNotifyFunc", &UProperty::RepNotifyFunc)
		.def_readwrite("PropertyLinkNext", &UProperty::PropertyLinkNext)
		.def_readwrite("NextRef", &UProperty::NextRef)
		.def_readwrite("DestructorLinkNext", &UProperty::DestructorLinkNext)
		.def_readwrite("PostConstructLinkNext", &UProperty::PostConstructLinkNext);

	py::class_< UStructProperty, UProperty >(m, "UStructProperty");
	py::class_< UStrProperty, UProperty >(m, "UStrProperty");
	py::class_< UObjectProperty, UProperty >(m, "UObjectProperty");
	py::class_< UClassProperty, UObjectProperty >(m, "UClassProperty");
	py::class_< UNameProperty, UProperty >(m, "UNameProperty");
	py::class_< UMapProperty, UProperty >(m, "UMapProperty");
	py::class_< UIntProperty, UProperty >(m, "UIntProperty");
	py::class_< UInterfaceProperty, UProperty >(m, "UInterfaceProperty");
	py::class_< UFloatProperty, UProperty >(m, "UFloatProperty");
	py::class_< UDelegateProperty, UProperty >(m, "UDelegateProperty");
	py::class_< UByteProperty, UProperty >(m, "UByteProperty");
	py::class_< UBoolProperty, UProperty >(m, "UBoolProperty");
	py::class_< UArrayProperty, UProperty >(m, "UArrayProperty");
	py::class_< UEnum, UField >(m, "UEnum");

	py::class_< UExporter, UObject >(m, "UExporter")
		.def_readwrite("FormatExtension", &UExporter::FormatExtension, py::return_value_policy::reference)
		.def_readwrite("FormatDescription", &UExporter::FormatDescription, py::return_value_policy::reference);


	py::class_< UDistributionVector, UDistribution >(m, "UDistributionVector")
		.def_property("bCanBeBaked", [](UDistributionVector& self) {return self.bCanBeBaked; }, [](UDistributionVector& self, bool value) {self.bCanBeBaked = value ? 1 : 0; })
		.def_property("bIsDirty", [](UDistributionVector& self) {return self.bIsDirty; }, [](UDistributionVector& self, bool value) {self.bIsDirty = value ? 1 : 0; })
		.def_property("bBakedDataSuccesfully", [](UDistributionVector& self) {return self.bBakedDataSuccesfully; }, [](UDistributionVector& self, bool value) {self.bBakedDataSuccesfully = value ? 1 : 0; });

	py::class_< UDistributionFloat, UDistribution >(m, "UDistributionFloat")
		.def_property("bCanBeBaked", [](UDistributionFloat& self) {return self.bCanBeBaked; }, [](UDistributionFloat& self, bool value) {self.bCanBeBaked = value ? 1 : 0; })
		.def_property("bIsDirty", [](UDistributionFloat& self) {return self.bIsDirty; }, [](UDistributionFloat& self, bool value) {self.bIsDirty = value ? 1 : 0; })
		.def_property("bBakedDataSuccesfully", [](UDistributionFloat& self) {return self.bBakedDataSuccesfully; }, [](UDistributionVector& self, bool value) { self.bBakedDataSuccesfully = value ? 1 : 0; });

	py::class_< UCommandlet, UObject >(m, "UCommandlet")
		.def_property("IsServer", [](UCommandlet& self) {return self.IsServer; }, [](UCommandlet& self, bool value) {self.IsServer = value ? 1 : 0; })
		.def_property("IsClient", [](UCommandlet& self) {return self.IsClient; }, [](UCommandlet& self, bool value) {self.IsClient = value ? 1 : 0; })
		.def_property("IsEditor", [](UCommandlet& self) {return self.IsEditor; }, [](UCommandlet& self, bool value) {self.IsEditor = value ? 1 : 0; })
		.def_property("LogToConsole", [](UCommandlet& self) {return self.LogToConsole; }, [](UCommandlet& self, bool value) {self.LogToConsole = value ? 1 : 0; })
		.def_property("ShowErrorCount", [](UCommandlet& self) {return self.ShowErrorCount; }, [](UCommandlet& self, bool value) {self.ShowErrorCount = value ? 1 : 0; })
		.def_readwrite("HelpDescription", &UCommandlet::HelpDescription, py::return_value_policy::reference)
		.def_readwrite("HelpUsage", &UCommandlet::HelpUsage, py::return_value_policy::reference)
		.def_readwrite("HelpWebLink", &UCommandlet::HelpWebLink, py::return_value_policy::reference)
		.def_readwrite("HelpParamNames", &UCommandlet::HelpParamNames, py::return_value_policy::reference)
		.def_readwrite("HelpParamDescriptions", &UCommandlet::HelpParamDescriptions, py::return_value_policy::reference);
		//.def("Main", &UCommandlet::Main);


	py::class_< UPackage, UObject >(m, "UPackage");

	py::class_< UClass, UStruct >(m, "UClass")
		.def_static("StaticClass", &UClass::StaticClass, py::return_value_policy::reference)
		.def_property("bCooked", [](UClass& self) {return self.bCooked; }, [](UClass& self, bool value) {self.bCooked = value ? 1 : 0; })
		.def_readwrite("ClassAddReferencedObjects", &UClass::ClassAddReferencedObjects)
		.def_readwrite("ClassCastFlags", &UClass::ClassCastFlags)
		.def_readwrite("ClassConfigName", &UClass::ClassConfigName)
		.def_readwrite("ClassConstructor", &UClass::ClassConstructor)
		.def_readwrite("ClassDefaultObject", &UClass::ClassDefaultObject, py::return_value_policy::reference)
		.def_readwrite("ClassFlags", &UClass::ClassFlags);

	py::class_< FStruct >(m, "FStruct")
		.def(py::init<UStruct*, void*>())
		.def("__getattr__", &FStruct::GetProperty, py::return_value_policy::reference)
		.def("__setattr__", &FStruct::SetProperty, py::return_value_policy::reference)
		.def("__repr__", &FStruct::Repr)
		.def_readwrite("structType", &FStruct::structType, py::return_value_policy::reference)
		.def("GetBase", [](FStruct* self) { return (int)self->base; });

	py::class_< FArray >(m, "FArray")
		.def(py::init<TArray <char>*, UProperty*>())
		.def("__getitem__", &FArray::GetItem, py::return_value_policy::reference)
		.def("__setitem__", &FArray::SetItem, py::return_value_policy::reference)
		.def("__iter__", &FArray::Iter, py::return_value_policy::reference)
		.def("__next__", &FArray::Next, py::return_value_policy::reference)
		.def("__repr__", &FArray::Repr)
		.def("GetAddress", &FArray::GetAddress, py::return_value_policy::reference);

	py::class_ < FScriptInterface >(m, "FScriptInterface")
		.def(py::init<>())
		.def("GetAddress", [](FScriptInterface* self) { return (int)&self; })
		.def("GetInterfacePointer", [](FScriptInterface* self) { return (int)self->InterfacePointer; })
		.def_readwrite("ObjectPointer", &FScriptInterface::ObjectPointer)
		.def_readwrite("InterfacePointer", &FScriptInterface::InterfacePointer);

}
#endif