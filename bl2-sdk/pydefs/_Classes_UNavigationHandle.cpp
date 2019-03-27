#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavigationHandle(py::module &m)
{
    py::class_< UNavigationHandle,  UObject   >(m, "UNavigationHandle")
		.def_static("StaticClass", &UNavigationHandle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AnchorPylon", &UNavigationHandle::AnchorPylon)
        .def_readwrite("AnchorPoly", &UNavigationHandle::AnchorPoly)
        .def_readwrite("PathCache", &UNavigationHandle::PathCache)
        .def_readwrite("BestUnfinishedPathPoint", &UNavigationHandle::BestUnfinishedPathPoint)
        .def_readwrite("CurrentEdge", &UNavigationHandle::CurrentEdge)
        .def_readwrite("SubGoal_DestPoly", &UNavigationHandle::SubGoal_DestPoly)
        .def_readwrite("FinalDestination", &UNavigationHandle::FinalDestination)
        .def_readwrite("PathConstraintList", &UNavigationHandle::PathConstraintList)
        .def_readwrite("PathGoalList", &UNavigationHandle::PathGoalList)
        .def_readwrite("CachedPathParams", &UNavigationHandle::CachedPathParams)
        .def_readwrite("LastPathError", &UNavigationHandle::LastPathError)
        .def_readwrite("LastPathFailTime", &UNavigationHandle::LastPathFailTime)
        .def_readwrite("BreadCrumbMostRecentIdx", &UNavigationHandle::BreadCrumbMostRecentIdx)
        .def_readwrite("BreadCrumbDistanceInterval", &UNavigationHandle::BreadCrumbDistanceInterval)
        .def("DrawBreadCrumbs", &UNavigationHandle::DrawBreadCrumbs)
        .def("StaticGetValidatedAnchorPosition", &UNavigationHandle::StaticGetValidatedAnchorPosition)
        .def("GetValidatedAnchorPosition", &UNavigationHandle::GetValidatedAnchorPosition)
        .def("GetAllCoverSlotsInRadius", &UNavigationHandle::GetAllCoverSlotsInRadius)
        .def("PopulatePathfindingParamCache", &UNavigationHandle::PopulatePathfindingParamCache)
        .def("MoveToDesiredHeightAboveMesh", &UNavigationHandle::MoveToDesiredHeightAboveMesh)
        .def("CalculatePathDistance", &UNavigationHandle::CalculatePathDistance)
        .def("GetFirstMoveLocation", &UNavigationHandle::GetFirstMoveLocation)
        .def("IsAnchorInescapable", &UNavigationHandle::IsAnchorInescapable)
        .def("LimitPathCacheDistance", &UNavigationHandle::LimitPathCacheDistance)
        .def("GetValidPositionsForBox", &UNavigationHandle::GetValidPositionsForBox)
        .def("GetAllPolyCentersWithinBounds", &UNavigationHandle::GetAllPolyCentersWithinBounds)
        .def("GetCurrentEdgeType", &UNavigationHandle::GetCurrentEdgeType)
        .def("ClearCurrentEdge", &UNavigationHandle::ClearCurrentEdge)
        .def("GetCurrentEdgeDebugText", &UNavigationHandle::GetCurrentEdgeDebugText)
        .def("PrintPathCacheDebugText", &UNavigationHandle::PrintPathCacheDebugText)
        .def("DrawPathCache", &UNavigationHandle::DrawPathCache)
        .def("ActorReachable", &UNavigationHandle::ActorReachable)
        .def("PointReachable", &UNavigationHandle::PointReachable)
        .def("PointCheck", &UNavigationHandle::PointCheck)
        .def("LineCheck", &UNavigationHandle::LineCheck)
        .def("ObstaclePointCheck", &UNavigationHandle::ObstaclePointCheck)
        .def("ObstacleLineCheck", &UNavigationHandle::ObstacleLineCheck)
        .def("SuggestMovePreparation", &UNavigationHandle::SuggestMovePreparation)
        .def("FindPath", [](UNavigationHandle &self ) { class AActor** pyout_DestActor = 0 ; int* pyout_DestItem = (int*)malloc(sizeof(int)) ;  bool ret =  self.FindPath(pyout_DestActor, pyout_DestItem); return py::make_tuple(ret, *pyout_DestActor, *pyout_DestItem); })
        .def("ComputeValidFinalDestination", &UNavigationHandle::ComputeValidFinalDestination)
        .def("SetFinalDestination", &UNavigationHandle::SetFinalDestination)
        .def("PullString", &UNavigationHandle::PullString)
        .def("GetNextMoveLocation", &UNavigationHandle::GetNextMoveLocation)
        .def("GetPylonFromPos", &UNavigationHandle::GetPylonFromPos, py::return_value_policy::reference)
        .def("FindPylon", &UNavigationHandle::FindPylon)
        .def("GetBestUnfinishedPathPoint", &UNavigationHandle::GetBestUnfinishedPathPoint)
        .def("PathCache_RemoveIndex", &UNavigationHandle::PathCache_RemoveIndex)
        .def("PathCache_GetGoalPoint", &UNavigationHandle::PathCache_GetGoalPoint)
        .def("PathCache_Empty", &UNavigationHandle::PathCache_Empty)
        .def("GetPathCacheLength", &UNavigationHandle::GetPathCacheLength)
        .def("CreatePathGoalEvaluator", &UNavigationHandle::CreatePathGoalEvaluator, py::return_value_policy::reference)
        .def("CreatePathConstraint", &UNavigationHandle::CreatePathConstraint, py::return_value_policy::reference)
        .def("DoesPylonAHaveAPathToPylonB", &UNavigationHandle::DoesPylonAHaveAPathToPylonB)
        .def("AddGoalEvaluator", &UNavigationHandle::AddGoalEvaluator)
        .def("AddPathConstraint", &UNavigationHandle::AddPathConstraint)
        .def("ClearConstraints", &UNavigationHandle::ClearConstraints)
        .def("GetNextBreadCrumb", &UNavigationHandle::GetNextBreadCrumb)
        .def("UpdateBreadCrumbs", &UNavigationHandle::UpdateBreadCrumbs)
        .def("MovePawnToLocation", &UNavigationHandle::MovePawnToLocation)
          ;
}