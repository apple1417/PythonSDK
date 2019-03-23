#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObject(py::module &m)
{
	py::class_<UObject>(m, "UObject")
		.def_readwrite("HashNext", &UObject::HashNext)
		.def_readwrite("ObjectFlags", &UObject::ObjectFlags)
		.def_readwrite("HashOuterNext", &UObject::HashOuterNext)
		.def_readwrite("StateFrame", &UObject::StateFrame)
		.def_readwrite("Linker", &UObject::Linker)
		.def_readwrite("LinkerIndex", &UObject::LinkerIndex)
		.def_readwrite("ObjectInternalInteger", &UObject::ObjectInternalInteger)
		.def_readwrite("NetIndex", &UObject::NetIndex)
		.def_readwrite("Outer", &UObject::Outer, py::return_value_policy::reference_internal)
		.def_readwrite("Name", &UObject::Name)
		.def_readwrite("Class", &UObject::Class, py::return_value_policy::copy)
		.def_readwrite("ObjectArchetype", &UObject::ObjectArchetype)
        .def_static("GObjObjects", &UObject::GObjObjects, py::return_value_policy::reference)
		.def_static("StaticClass", &UObject::StaticClass, py::return_value_policy::reference)
		.def_static("FindObject", &UObject::FindObject, py::return_value_policy::reference)
		.def("As", &UObject::As, py::return_value_policy::reference)
        .def("GetName", &UObject::GetName)
        .def("GetNameCPP", &UObject::GetNameCPP)
        .def("GetFullName", &UObject::GetFullName)
        .def_static("FindClass", &UObject::FindClass, py::return_value_policy::reference)
        .def("IsRelevantForDebugging", &UObject::IsRelevantForDebugging)
        .def("GetGlobalDebugTarget", &UObject::GetGlobalDebugTarget, py::return_value_policy::reference)
        .def("SetGlobalDebugTarget", &UObject::SetGlobalDebugTarget)
        .def("LogContentDebug", &UObject::LogContentDebug)
        .def("GetLanguage", &UObject::GetLanguage)
        .def("GetRandomOptionSumFrequency", &UObject::GetRandomOptionSumFrequency)
        .def("GetBuildChangelistNumber", &UObject::GetBuildChangelistNumber)
        .def("GetEngineVersion", &UObject::GetEngineVersion)
        .def("GetSystemTime", [](UObject &self ) { int* Year = (int *)malloc(sizeof(int)) ; int* Month = (int *)malloc(sizeof(int)) ; int* DayOfWeek = (int *)malloc(sizeof(int)) ; int* Day = (int *)malloc(sizeof(int)) ; int* Hour = (int *)malloc(sizeof(int)) ; int* Min = (int *)malloc(sizeof(int)) ; int* Sec = (int *)malloc(sizeof(int)) ; int* MSec = (int *)malloc(sizeof(int)) ;  self.GetSystemTime(Year, Month, DayOfWeek, Day, Hour, Min, Sec, MSec); return py::make_tuple(Year, Month, DayOfWeek, Day, Hour, Min, Sec, MSec); })
        .def("TimeStamp", &UObject::TimeStamp)
        .def("TransformVectorByRotation", &UObject::TransformVectorByRotation)
        .def("GetPackageName", &UObject::GetPackageName)
        .def("IsPendingKill", &UObject::IsPendingKill)
        .def("ByteToFloat", &UObject::ByteToFloat)
        .def("FloatToByte", &UObject::FloatToByte)
        .def("UnwindHeading", &UObject::UnwindHeading)
        .def("FindDeltaAngle", &UObject::FindDeltaAngle)
        .def("GetHeadingAngle", &UObject::GetHeadingAngle)
        .def("GetAngularDegreesFromRadians", &UObject::GetAngularDegreesFromRadians)
        .def("GetAngularFromDotDist", &UObject::GetAngularFromDotDist)
        .def("GetAngularDistance", &UObject::GetAngularDistance)
        .def("GetDotDistance", &UObject::GetDotDistance)
        .def("PointProjectToPlane", &UObject::PointProjectToPlane)
        .def("PointDistToPlane", &UObject::PointDistToPlane)
        .def("PointDistToSegment", &UObject::PointDistToSegment)
        .def("PointDistToLine", &UObject::PointDistToLine)
        .def("GetPerObjectConfigSections", &UObject::GetPerObjectConfigSections)
        .def("StaticSaveConfig", &UObject::StaticSaveConfig)
        .def("SaveConfig", &UObject::SaveConfig)
        .def("GetAttributeModiferDescriptor", &UObject::GetAttributeModiferDescriptor)
        .def("GetAttributeValueByName", &UObject::GetAttributeValueByName)
        .def("RemoveModifier", &UObject::RemoveModifier)
        .def("AddModifier", &UObject::AddModifier)
        .def("FindObject", &UObject::FindObject, py::return_value_policy::reference)
        .def("DynamicLoadObject", &UObject::DynamicLoadObject, py::return_value_policy::reference)
        .def("GetEnum", &UObject::GetEnum)
        .def("Disable", &UObject::Disable)
        .def("Enable", &UObject::Enable)
        .def("eventContinuedState", &UObject::eventContinuedState)
        .def("eventPausedState", &UObject::eventPausedState)
        .def("eventPoppedState", &UObject::eventPoppedState)
        .def("eventPushedState", &UObject::eventPushedState)
        .def("eventEndState", &UObject::eventEndState)
        .def("eventBeginState", &UObject::eventBeginState)
        .def("BreakPoint", &UObject::BreakPoint)
        .def("PrintScriptStack", &UObject::PrintScriptStack)
        .def("DumpStateStack", &UObject::DumpStateStack)
        .def("PopState", &UObject::PopState)
        .def("PushState", &UObject::PushState)
        .def("GetStateName", &UObject::GetStateName)
        .def("IsChildState", &UObject::IsChildState)
        .def("IsInState", &UObject::IsInState)
        .def("GotoState", &UObject::GotoState)
        .def("IsUTracing", &UObject::IsUTracing)
        .def("SetUTracing", &UObject::SetUTracing)
        .def("GetFuncName", &UObject::GetFuncName)
        .def("DebugBreak", &UObject::DebugBreak)
        .def("GetScriptTrace", &UObject::GetScriptTrace)
        .def("ScriptTrace", &UObject::ScriptTrace)
        .def("ParseLocalizedPropertyPath", &UObject::ParseLocalizedPropertyPath)
        .def("Localize", &UObject::Localize)
        .def("LogIndentedInternal", &UObject::LogIndentedInternal)
        .def("WarnInternal", &UObject::WarnInternal)
        .def("LogInternal", &UObject::LogInternal)
        .def("GetStringForNameBasedObjectPath", &UObject::GetStringForNameBasedObjectPath)
        .def("SetNameBasedObjectPath", &UObject::SetNameBasedObjectPath)
        .def("FlagHasBeenTrueFor", &UObject::FlagHasBeenTrueFor)
        .def("FlagTimeRemaining", &UObject::FlagTimeRemaining)
        .def("FlagTimeSinceRaised", &UObject::FlagTimeSinceRaised)
        .def("FlagSetValue", &UObject::FlagSetValue)
        .def("FlagIsLowered", &UObject::FlagIsLowered)
        .def("FlagIsRaised", &UObject::FlagIsRaised)
        .def("FlagIsFalse", &UObject::FlagIsFalse)
        .def("FlagIsTrue", &UObject::FlagIsTrue)
        .def("FlagSetTrueTimed", &UObject::FlagSetTrueTimed)
        .def("SmartVectTimeRemaining", &UObject::SmartVectTimeRemaining)
        .def("SmartVectTimeSinceSet", &UObject::SmartVectTimeSinceSet)
        .def("SmartVectGetVector", &UObject::SmartVectGetVector)
        .def("SmartVectIsSet", &UObject::SmartVectIsSet)
        .def("SmartVectSetVectorTimed", &UObject::SmartVectSetVectorTimed)
        .def("SmartVectValue", &UObject::SmartVectValue)
        .def("SmartVectReset", &UObject::SmartVectReset)
        .def("SmartVectSetVector", &UObject::SmartVectSetVector)
        .def("Subtract_LinearColorLinearColor", &UObject::Subtract_LinearColorLinearColor)
        .def("Multiply_LinearColorFloat", &UObject::Multiply_LinearColorFloat)
        .def("ColorToLinearColor", &UObject::ColorToLinearColor)
        .def("MakeLinearColor", &UObject::MakeLinearColor)
        .def("GetHTMLColor", &UObject::GetHTMLColor)
        .def("LerpColor", &UObject::LerpColor)
        .def("MakeColor", &UObject::MakeColor)
        .def("Add_ColorColor", &UObject::Add_ColorColor)
        .def("Multiply_ColorFloat", &UObject::Multiply_ColorFloat)
        .def("Multiply_FloatColor", &UObject::Multiply_FloatColor)
        .def("Subtract_ColorColor", &UObject::Subtract_ColorColor)
        .def("EvalInterpCurveVector2D", &UObject::EvalInterpCurveVector2D)
        .def("EvalInterpCurveVector", &UObject::EvalInterpCurveVector)
        .def("EvalInterpCurveFloat", &UObject::EvalInterpCurveFloat)
        .def("vect2d", &UObject::vect2d)
        .def("GetMappedRangeValue", &UObject::GetMappedRangeValue)
        .def("GetRangePctByValue", &UObject::GetRangePctByValue)
        .def("GetRangeValueByPct", &UObject::GetRangeValueByPct)
        .def("SubtractEqual_Vector2DVector2D", &UObject::SubtractEqual_Vector2DVector2D)
        .def("AddEqual_Vector2DVector2D", &UObject::AddEqual_Vector2DVector2D)
        .def("DivideEqual_Vector2DFloat", &UObject::DivideEqual_Vector2DFloat)
        .def("MultiplyEqual_Vector2DFloat", &UObject::MultiplyEqual_Vector2DFloat)
        .def("Divide_Vector2DFloat", &UObject::Divide_Vector2DFloat)
        .def("Multiply_Vector2DFloat", &UObject::Multiply_Vector2DFloat)
        .def("Subtract_Vector2DVector2D", &UObject::Subtract_Vector2DVector2D)
        .def("Add_Vector2DVector2D", &UObject::Add_Vector2DVector2D)
        .def("Subtract_QuatQuat", &UObject::Subtract_QuatQuat)
        .def("Add_QuatQuat", &UObject::Add_QuatQuat)
        .def("QuatSlerp", &UObject::QuatSlerp)
        .def("QuatToRotator", &UObject::QuatToRotator)
        .def("QuatFromRotator", &UObject::QuatFromRotator)
        .def("QuatFromAxisAndAngle", &UObject::QuatFromAxisAndAngle)
        .def("QuatFindBetween", &UObject::QuatFindBetween)
        .def("QuatRotateVector", &UObject::QuatRotateVector)
        .def("QuatInvert", &UObject::QuatInvert)
        .def("QuatDot", &UObject::QuatDot)
        .def("QuatProduct", &UObject::QuatProduct)
        .def("MatrixGetAxis", &UObject::MatrixGetAxis)
        .def("MatrixGetOrigin", &UObject::MatrixGetOrigin)
        .def("MatrixGetRotator", &UObject::MatrixGetRotator)
        .def("MakeRotationMatrix", &UObject::MakeRotationMatrix)
        .def("MakeRotationTranslationMatrix", &UObject::MakeRotationTranslationMatrix)
        .def("InverseTransformNormal", &UObject::InverseTransformNormal)
        .def("TransformNormal", &UObject::TransformNormal)
        .def("InverseTransformVector", &UObject::InverseTransformVector)
        .def("TransformVector", &UObject::TransformVector)
        .def("Multiply_MatrixMatrix", &UObject::Multiply_MatrixMatrix)
        .def("NotEqual_NameName", &UObject::NotEqual_NameName)
        .def("EqualEqual_NameName", &UObject::EqualEqual_NameName)
        .def("QueryInterface", &UObject::QueryInterface, py::return_value_policy::reference)
        .def("IsA", (bool (UObject::*)(FName) )&UObject::IsA)
        .def("ClassIsChildOf", &UObject::ClassIsChildOf)
        .def("NotEqual_InterfaceInterface", &UObject::NotEqual_InterfaceInterface)
        .def("EqualEqual_InterfaceInterface", &UObject::EqualEqual_InterfaceInterface)
        .def("NotEqual_ObjectObject", &UObject::NotEqual_ObjectObject)
        .def("EqualEqual_ObjectObject", &UObject::EqualEqual_ObjectObject)
        .def("GuidToString", &UObject::GuidToString)
        .def("PathName", &UObject::PathName)
        .def("SplitString", &UObject::SplitString)
        .def("ParseStringIntoArray", &UObject::ParseStringIntoArray)
        .def("JoinArray", &UObject::JoinArray)
        .def("GetRightMost", &UObject::GetRightMost)
        .def("Split", &UObject::Split)
        .def("StringHash", &UObject::StringHash)
        .def("Repl", &UObject::Repl)
        .def("Asc", &UObject::Asc)
        .def("Chr", &UObject::Chr)
        .def("Locs", &UObject::Locs)
        .def("Caps", &UObject::Caps)
        .def("Right", &UObject::Right)
        .def("Left", &UObject::Left)
        .def("Mid", &UObject::Mid)
        .def("InStr", &UObject::InStr)
        .def("Len", &UObject::Len)
        .def("SubtractEqual_StrStr", &UObject::SubtractEqual_StrStr)
        .def("AtEqual_StrStr", &UObject::AtEqual_StrStr)
        .def("ConcatEqual_StrStr", &UObject::ConcatEqual_StrStr)
        .def("ComplementEqual_StrStr", &UObject::ComplementEqual_StrStr)
        .def("NotEqual_StrStr", &UObject::NotEqual_StrStr)
        .def("EqualEqual_StrStr", &UObject::EqualEqual_StrStr)
        .def("GreaterEqual_StrStr", &UObject::GreaterEqual_StrStr)
        .def("LessEqual_StrStr", &UObject::LessEqual_StrStr)
        .def("Greater_StrStr", &UObject::Greater_StrStr)
        .def("Less_StrStr", &UObject::Less_StrStr)
        .def("At_StrStr", &UObject::At_StrStr)
        .def("Concat_StrStr", &UObject::Concat_StrStr)
        .def("MakeRotator", &UObject::MakeRotator)
        .def("SClampRotAxis", [](UObject &self , float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed) { int* out_DeltaViewAxis = (int *)malloc(sizeof(int)) ;  self.SClampRotAxis(DeltaTime, ViewAxis, MaxLimit, MinLimit, InterpolationSpeed, out_DeltaViewAxis); return py::make_tuple(out_DeltaViewAxis); })
        .def("ClampRotAxisFromRange", &UObject::ClampRotAxisFromRange)
        .def("ClampRotAxisFromBase", &UObject::ClampRotAxisFromBase)
        .def("ClampRotAxis", [](UObject &self , int ViewAxis, int MaxLimit, int MinLimit) { int* out_DeltaViewAxis = (int *)malloc(sizeof(int)) ;  self.ClampRotAxis(ViewAxis, MaxLimit, MinLimit, out_DeltaViewAxis); return py::make_tuple(out_DeltaViewAxis); })
        .def("RSize", &UObject::RSize)
        .def("RDiff", &UObject::RDiff)
        .def("NormalizeRotAxis", &UObject::NormalizeRotAxis)
        .def("RInterpTo", &UObject::RInterpTo)
        .def("RTransform", &UObject::RTransform)
        .def("RLerp", &UObject::RLerp)
        .def("Normalize", &UObject::Normalize)
        .def("OrthoRotation", &UObject::OrthoRotation)
        .def("RotRand", &UObject::RotRand)
        .def("GetRotatorAxis", &UObject::GetRotatorAxis)
        .def("GetUnAxes", &UObject::GetUnAxes)
        .def("GetAxes", &UObject::GetAxes)
        .def("ClockwiseFrom_IntInt", &UObject::ClockwiseFrom_IntInt)
        .def("SubtractEqual_RotatorRotator", &UObject::SubtractEqual_RotatorRotator)
        .def("AddEqual_RotatorRotator", &UObject::AddEqual_RotatorRotator)
        .def("Subtract_RotatorRotator", &UObject::Subtract_RotatorRotator)
        .def("Add_RotatorRotator", &UObject::Add_RotatorRotator)
        .def("DivideEqual_RotatorFloat", &UObject::DivideEqual_RotatorFloat)
        .def("MultiplyEqual_RotatorFloat", &UObject::MultiplyEqual_RotatorFloat)
        .def("Divide_RotatorFloat", &UObject::Divide_RotatorFloat)
        .def("Multiply_FloatRotator", &UObject::Multiply_FloatRotator)
        .def("Multiply_RotatorFloat", &UObject::Multiply_RotatorFloat)
        .def("NotEqual_RotatorRotator", &UObject::NotEqual_RotatorRotator)
        .def("EqualEqual_RotatorRotator", &UObject::EqualEqual_RotatorRotator)
        .def("InCylinder", &UObject::InCylinder)
        .def("NoZDot", &UObject::NoZDot)
        .def("ClampLength", &UObject::ClampLength)
        .def("VInterpTo", &UObject::VInterpTo)
        .def("IsZero", &UObject::IsZero)
        .def("ProjectOnTo", &UObject::ProjectOnTo)
        .def("MirrorVectorByNormal", &UObject::MirrorVectorByNormal)
        .def("VRandCone2", &UObject::VRandCone2)
        .def("VRandCone", &UObject::VRandCone)
        .def("VRand", &UObject::VRand)
        .def("VLerp", &UObject::VLerp)
        .def("Normal", &UObject::Normal)
        .def("VSizeSq2D", &UObject::VSizeSq2D)
        .def("VSizeSq", &UObject::VSizeSq)
        .def("VSize2D", &UObject::VSize2D)
        .def("VSize", &UObject::VSize)
        .def("SubtractEqual_VectorVector", &UObject::SubtractEqual_VectorVector)
        .def("AddEqual_VectorVector", &UObject::AddEqual_VectorVector)
        .def("DivideEqual_VectorFloat", &UObject::DivideEqual_VectorFloat)
        .def("MultiplyEqual_VectorVector", &UObject::MultiplyEqual_VectorVector)
        .def("MultiplyEqual_VectorFloat", &UObject::MultiplyEqual_VectorFloat)
        .def("Cross_VectorVector", &UObject::Cross_VectorVector)
        .def("Dot_VectorVector", &UObject::Dot_VectorVector)
        .def("NotEqual_VectorVector", &UObject::NotEqual_VectorVector)
        .def("EqualEqual_VectorVector", &UObject::EqualEqual_VectorVector)
        .def("GreaterGreater_VectorRotator", &UObject::GreaterGreater_VectorRotator)
        .def("LessLess_VectorRotator", &UObject::LessLess_VectorRotator)
        .def("Subtract_VectorVector", &UObject::Subtract_VectorVector)
        .def("Add_VectorVector", &UObject::Add_VectorVector)
        .def("Divide_VectorFloat", &UObject::Divide_VectorFloat)
        .def("Multiply_VectorVector", &UObject::Multiply_VectorVector)
        .def("Multiply_FloatVector", &UObject::Multiply_FloatVector)
        .def("Multiply_VectorFloat", &UObject::Multiply_VectorFloat)
        .def("Subtract_PreVector", &UObject::Subtract_PreVector)
        .def("SmoothInterp", &UObject::SmoothInterp)
        .def("FInterpConstantTo", &UObject::FInterpConstantTo)
        .def("FInterpTo", &UObject::FInterpTo)
        .def("FPctByRange", &UObject::FPctByRange)
        .def("RandRange", &UObject::RandRange)
        .def("FInterpEaseInOut", &UObject::FInterpEaseInOut)
        .def("FInterpEaseOut", &UObject::FInterpEaseOut)
        .def("FInterpEaseIn", &UObject::FInterpEaseIn)
        .def("FCubicInterp", &UObject::FCubicInterp)
        .def("FCeil", &UObject::FCeil)
        .def("FFloor", &UObject::FFloor)
        .def("Round", &UObject::Round)
        .def("Lerp", &UObject::Lerp)
        .def("FClamp", &UObject::FClamp)
        .def("FMax", &UObject::FMax)
        .def("FMin", &UObject::FMin)
        .def("FRand", &UObject::FRand)
        .def("Square", &UObject::Square)
        .def("Sqrt", &UObject::Sqrt)
        .def("Loge", &UObject::Loge)
        .def("Exp", &UObject::Exp)
        .def("Atan2", &UObject::Atan2)
        .def("Atan", &UObject::Atan)
        .def("Tan", &UObject::Tan)
        .def("Acos", &UObject::Acos)
        .def("Cos", &UObject::Cos)
        .def("Asin", &UObject::Asin)
        .def("Sin", &UObject::Sin)
        .def("Abs", &UObject::Abs)
        .def("SubtractEqual_FloatFloat", [](UObject &self , float B) { float* A = (float *)malloc(sizeof(float)) ;  self.SubtractEqual_FloatFloat(B, A); return py::make_tuple(A); })
        .def("AddEqual_FloatFloat", [](UObject &self , float B) { float* A = (float *)malloc(sizeof(float)) ;  self.AddEqual_FloatFloat(B, A); return py::make_tuple(A); })
        .def("DivideEqual_FloatFloat", [](UObject &self , float B) { float* A = (float *)malloc(sizeof(float)) ;  self.DivideEqual_FloatFloat(B, A); return py::make_tuple(A); })
        .def("MultiplyEqual_FloatFloat", [](UObject &self , float B) { float* A = (float *)malloc(sizeof(float)) ;  self.MultiplyEqual_FloatFloat(B, A); return py::make_tuple(A); })
        .def("NotEqual_FloatFloat", &UObject::NotEqual_FloatFloat)
        .def("ComplementEqual_FloatFloat", &UObject::ComplementEqual_FloatFloat)
        .def("EqualEqual_FloatFloat", &UObject::EqualEqual_FloatFloat)
        .def("GreaterEqual_FloatFloat", &UObject::GreaterEqual_FloatFloat)
        .def("LessEqual_FloatFloat", &UObject::LessEqual_FloatFloat)
        .def("Greater_FloatFloat", &UObject::Greater_FloatFloat)
        .def("Less_FloatFloat", &UObject::Less_FloatFloat)
        .def("Subtract_FloatFloat", &UObject::Subtract_FloatFloat)
        .def("Add_FloatFloat", &UObject::Add_FloatFloat)
        .def("Percent_FloatFloat", &UObject::Percent_FloatFloat)
        .def("Divide_FloatFloat", &UObject::Divide_FloatFloat)
        .def("Multiply_FloatFloat", &UObject::Multiply_FloatFloat)
        .def("MultiplyMultiply_FloatFloat", &UObject::MultiplyMultiply_FloatFloat)
        .def("Subtract_PreFloat", &UObject::Subtract_PreFloat)
        .def("ToHex", &UObject::ToHex)
        .def("Clamp", &UObject::Clamp)
        .def("Max", &UObject::Max)
        .def("Min", &UObject::Min)
        .def("Rand", &UObject::Rand)
        .def("SubtractSubtract_Int", [](UObject &self ) { int* A = (int *)malloc(sizeof(int)) ;  self.SubtractSubtract_Int(A); return py::make_tuple(A); })
        .def("AddAdd_Int", [](UObject &self ) { int* A = (int *)malloc(sizeof(int)) ;  self.AddAdd_Int(A); return py::make_tuple(A); })
        .def("SubtractSubtract_PreInt", [](UObject &self ) { int* A = (int *)malloc(sizeof(int)) ;  self.SubtractSubtract_PreInt(A); return py::make_tuple(A); })
        .def("AddAdd_PreInt", [](UObject &self ) { int* A = (int *)malloc(sizeof(int)) ;  self.AddAdd_PreInt(A); return py::make_tuple(A); })
        .def("SubtractEqual_IntInt", [](UObject &self , int B) { int* A = (int *)malloc(sizeof(int)) ;  self.SubtractEqual_IntInt(B, A); return py::make_tuple(A); })
        .def("AddEqual_IntInt", [](UObject &self , int B) { int* A = (int *)malloc(sizeof(int)) ;  self.AddEqual_IntInt(B, A); return py::make_tuple(A); })
        .def("DivideEqual_IntFloat", [](UObject &self , float B) { int* A = (int *)malloc(sizeof(int)) ;  self.DivideEqual_IntFloat(B, A); return py::make_tuple(A); })
        .def("MultiplyEqual_IntFloat", [](UObject &self , float B) { int* A = (int *)malloc(sizeof(int)) ;  self.MultiplyEqual_IntFloat(B, A); return py::make_tuple(A); })
        .def("Or_IntInt", &UObject::Or_IntInt)
        .def("Xor_IntInt", &UObject::Xor_IntInt)
        .def("And_IntInt", &UObject::And_IntInt)
        .def("NotEqual_IntInt", &UObject::NotEqual_IntInt)
        .def("EqualEqual_IntInt", &UObject::EqualEqual_IntInt)
        .def("GreaterEqual_IntInt", &UObject::GreaterEqual_IntInt)
        .def("LessEqual_IntInt", &UObject::LessEqual_IntInt)
        .def("Greater_IntInt", &UObject::Greater_IntInt)
        .def("Less_IntInt", &UObject::Less_IntInt)
        .def("GreaterGreaterGreater_IntInt", &UObject::GreaterGreaterGreater_IntInt)
        .def("GreaterGreater_IntInt", &UObject::GreaterGreater_IntInt)
        .def("LessLess_IntInt", &UObject::LessLess_IntInt)
        .def("Subtract_IntInt", &UObject::Subtract_IntInt)
        .def("Add_IntInt", &UObject::Add_IntInt)
        .def("Percent_IntInt", &UObject::Percent_IntInt)
        .def("Divide_IntInt", &UObject::Divide_IntInt)
        .def("Multiply_IntInt", &UObject::Multiply_IntInt)
        .def("Subtract_PreInt", &UObject::Subtract_PreInt)
        .def("Complement_PreInt", &UObject::Complement_PreInt)
        .def("SubtractSubtract_Byte", [](UObject &self ) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.SubtractSubtract_Byte(A); return py::make_tuple(A); })
        .def("AddAdd_Byte", [](UObject &self ) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.AddAdd_Byte(A); return py::make_tuple(A); })
        .def("SubtractSubtract_PreByte", [](UObject &self ) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.SubtractSubtract_PreByte(A); return py::make_tuple(A); })
        .def("AddAdd_PreByte", [](UObject &self ) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.AddAdd_PreByte(A); return py::make_tuple(A); })
        .def("SubtractEqual_ByteByte", [](UObject &self , unsigned char B) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.SubtractEqual_ByteByte(B, A); return py::make_tuple(A); })
        .def("AddEqual_ByteByte", [](UObject &self , unsigned char B) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.AddEqual_ByteByte(B, A); return py::make_tuple(A); })
        .def("DivideEqual_ByteByte", [](UObject &self , unsigned char B) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.DivideEqual_ByteByte(B, A); return py::make_tuple(A); })
        .def("MultiplyEqual_ByteFloat", [](UObject &self , float B) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.MultiplyEqual_ByteFloat(B, A); return py::make_tuple(A); })
        .def("MultiplyEqual_ByteByte", [](UObject &self , unsigned char B) { unsigned char* A = (unsigned char *)malloc(sizeof(unsigned char)) ;  self.MultiplyEqual_ByteByte(B, A); return py::make_tuple(A); })
        .def("OrOr_BoolBool", &UObject::OrOr_BoolBool)
        .def("XorXor_BoolBool", &UObject::XorXor_BoolBool)
        .def("AndAnd_BoolBool", &UObject::AndAnd_BoolBool)
        .def("NotEqual_BoolBool", &UObject::NotEqual_BoolBool)
        .def("EqualEqual_BoolBool", &UObject::EqualEqual_BoolBool)
        .def("Not_PreBool", &UObject::Not_PreBool)
          ;

		py::class_< TArray<UObject *> >(m, "TArray<UObject *>")
			.def_readwrite("Count", &TArray<UObject *>::Count)
			.def_readwrite("Max", &TArray<UObject *>::Max)
			.def("Num", &TArray<UObject *>::Num)
			.def("__call__", (UObject*& (TArray<UObject *>::*)(int))&TArray<UObject *>::operator (), py::return_value_policy::reference)
			;
}