#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_IpDrv_structs(py::module &m)
{
	py::class_< FIpAddr >(m, "FIpAddr")
		.def_readwrite("Addr", &FIpAddr::Addr)
		.def_readwrite("Port", &FIpAddr::Port)
		;
	py::class_< FConnectionBandwidthStats >(m, "FConnectionBandwidthStats")
		.def_readwrite("UpstreamRate", &FConnectionBandwidthStats::UpstreamRate)
		.def_readwrite("DownstreamRate", &FConnectionBandwidthStats::DownstreamRate)
		.def_readwrite("RoundtripLatency", &FConnectionBandwidthStats::RoundtripLatency)
		;
	py::class_< FPlayerMember >(m, "FPlayerMember")
		.def_readwrite("TeamNum", &FPlayerMember::TeamNum)
		.def_readwrite("Skill", &FPlayerMember::Skill)
		.def_readwrite("NetId", &FPlayerMember::NetId, py::return_value_policy::reference)
		;
	py::class_< FClientBandwidthTestData >(m, "FClientBandwidthTestData")
		.def_readwrite("TestType", &FClientBandwidthTestData::TestType)
		.def_readwrite("CurrentState", &FClientBandwidthTestData::CurrentState)
		.def_readwrite("NumBytesToSendTotal", &FClientBandwidthTestData::NumBytesToSendTotal)
		.def_readwrite("NumBytesSentTotal", &FClientBandwidthTestData::NumBytesSentTotal)
		.def_readwrite("NumBytesSentLast", &FClientBandwidthTestData::NumBytesSentLast)
		.def_readwrite("ElapsedTestTime", &FClientBandwidthTestData::ElapsedTestTime)
		;
	py::class_< FClientConnectionRequest >(m, "FClientConnectionRequest")
		.def_property("bCanHostVs", [](FClientConnectionRequest &self){return self.bCanHostVs;}, [](FClientConnectionRequest &self, bool value){self.bCanHostVs = value ? 1 : 0;})
		.def_readwrite("PlayerNetId", &FClientConnectionRequest::PlayerNetId, py::return_value_policy::reference)
		.def_readwrite("NatType", &FClientConnectionRequest::NatType)
		.def_readwrite("GoodHostRatio", &FClientConnectionRequest::GoodHostRatio)
		.def_readwrite("BandwidthHistory", &FClientConnectionRequest::BandwidthHistory, py::return_value_policy::reference)
		.def_readwrite("MinutesSinceLastTest", &FClientConnectionRequest::MinutesSinceLastTest)
		;
	py::class_< FClientConnectionBandwidthTestData >(m, "FClientConnectionBandwidthTestData")
		.def_readwrite("CurrentState", &FClientConnectionBandwidthTestData::CurrentState)
		.def_readwrite("TestType", &FClientConnectionBandwidthTestData::TestType)
		.def_readwrite("BytesTotalNeeded", &FClientConnectionBandwidthTestData::BytesTotalNeeded)
		.def_readwrite("BytesReceived", &FClientConnectionBandwidthTestData::BytesReceived)
		.def_readwrite("RequestTestStartTime", &FClientConnectionBandwidthTestData::RequestTestStartTime, py::return_value_policy::reference)
		.def_readwrite("TestStartTime", &FClientConnectionBandwidthTestData::TestStartTime, py::return_value_policy::reference)
		.def_readwrite("BandwidthStats", &FClientConnectionBandwidthTestData::BandwidthStats, py::return_value_policy::reference)
		;
	py::class_< FClientMeshBeaconConnection >(m, "FClientMeshBeaconConnection")
		.def_property("bConnectionAccepted", [](FClientMeshBeaconConnection &self){return self.bConnectionAccepted;}, [](FClientMeshBeaconConnection &self, bool value){self.bConnectionAccepted = value ? 1 : 0;})
		.def_property("bCanHostVs", [](FClientMeshBeaconConnection &self){return self.bCanHostVs;}, [](FClientMeshBeaconConnection &self, bool value){self.bCanHostVs = value ? 1 : 0;})
		.def_readwrite("PlayerNetId", &FClientMeshBeaconConnection::PlayerNetId, py::return_value_policy::reference)
		.def_readwrite("ElapsedHeartbeatTime", &FClientMeshBeaconConnection::ElapsedHeartbeatTime)
		.def_readwrite("Socket", &FClientMeshBeaconConnection::Socket, py::return_value_policy::reference)
		.def_readwrite("BandwidthTest", &FClientMeshBeaconConnection::BandwidthTest, py::return_value_policy::reference)
		.def_readwrite("NatType", &FClientMeshBeaconConnection::NatType)
		.def_readwrite("GoodHostRatio", &FClientMeshBeaconConnection::GoodHostRatio)
		.def_readwrite("BandwidthHistory", &FClientMeshBeaconConnection::BandwidthHistory, py::return_value_policy::reference)
		.def_readwrite("MinutesSinceLastTest", &FClientMeshBeaconConnection::MinutesSinceLastTest)
		;
	py::class_< FEventUploadConfig >(m, "FEventUploadConfig")
		.def_property("bUseCompression", [](FEventUploadConfig &self){return self.bUseCompression;}, [](FEventUploadConfig &self, bool value){self.bUseCompression = value ? 1 : 0;})
		.def_readwrite("UploadType", &FEventUploadConfig::UploadType)
		.def_readwrite("UploadUrl", &FEventUploadConfig::UploadUrl, py::return_value_policy::reference)
		.def_readwrite("TimeOut", &FEventUploadConfig::TimeOut)
		;
	py::class_< FNewsCacheEntry >(m, "FNewsCacheEntry")
		.def_property("bIsUnicode", [](FNewsCacheEntry &self){return self.bIsUnicode;}, [](FNewsCacheEntry &self, bool value){self.bIsUnicode = value ? 1 : 0;})
		.def_readwrite("NewsUrl", &FNewsCacheEntry::NewsUrl, py::return_value_policy::reference)
		.def_readwrite("ReadState", &FNewsCacheEntry::ReadState)
		.def_readwrite("NewsType", &FNewsCacheEntry::NewsType)
		.def_readwrite("NewsItem", &FNewsCacheEntry::NewsItem, py::return_value_policy::reference)
		.def_readwrite("TimeOut", &FNewsCacheEntry::TimeOut)
		.def_readwrite("HttpDownloader", &FNewsCacheEntry::HttpDownloader, py::return_value_policy::reference)
		;
	py::class_< FConfiguredGameSetting >(m, "FConfiguredGameSetting")
		.def_readwrite("GameSettingId", &FConfiguredGameSetting::GameSettingId)
		.def_readwrite("GameSettingsClassName", &FConfiguredGameSetting::GameSettingsClassName, py::return_value_policy::reference)
		.def_readwrite("URL", &FConfiguredGameSetting::URL, py::return_value_policy::reference)
		.def_readwrite("GameSettings", &FConfiguredGameSetting::GameSettings, py::return_value_policy::reference)
		;
	py::class_< FInventorySwap >(m, "FInventorySwap")
		.def_readwrite("Original", &FInventorySwap::Original, py::return_value_policy::reference)
		.def_readwrite("SwapTo", &FInventorySwap::SwapTo, py::return_value_policy::reference)
		;
	py::class_< FPlaylist >(m, "FPlaylist")
		.def_property("bDisableDedicatedServerSearches", [](FPlaylist &self){return self.bDisableDedicatedServerSearches;}, [](FPlaylist &self, bool value){self.bDisableDedicatedServerSearches = value ? 1 : 0;})
		.def_readwrite("ConfiguredGames", &FPlaylist::ConfiguredGames, py::return_value_policy::reference)
		.def_readwrite("PlaylistId", &FPlaylist::PlaylistId)
		.def_readwrite("LoadBalanceId", &FPlaylist::LoadBalanceId)
		.def_readwrite("LocalizationString", &FPlaylist::LocalizationString, py::return_value_policy::reference)
		.def_readwrite("ContentIds", &FPlaylist::ContentIds, py::return_value_policy::reference)
		.def_readwrite("TeamSize", &FPlaylist::TeamSize)
		.def_readwrite("TeamCount", &FPlaylist::TeamCount)
		.def_readwrite("MaxPartySize", &FPlaylist::MaxPartySize)
		.def_readwrite("Name", &FPlaylist::Name, py::return_value_policy::reference)
		.def_readwrite("URL", &FPlaylist::URL, py::return_value_policy::reference)
		.def_readwrite("MatchType", &FPlaylist::MatchType)
		.def_readwrite("MapCycle", &FPlaylist::MapCycle, py::return_value_policy::reference)
		.def_readwrite("InventorySwaps", &FPlaylist::InventorySwaps, py::return_value_policy::reference)
		;
	py::class_< FPlaylistPopulation >(m, "FPlaylistPopulation")
		.def_readwrite("PlaylistId", &FPlaylistPopulation::PlaylistId)
		.def_readwrite("WorldwideTotal", &FPlaylistPopulation::WorldwideTotal)
		.def_readwrite("RegionTotal", &FPlaylistPopulation::RegionTotal)
		;
	py::class_< FTitleFileMcp, FTitleFile >(m, "FTitleFileMcp")
		.def_readwrite("HttpDownloader", &FTitleFileMcp::HttpDownloader, py::return_value_policy::reference)
		;
	py::class_< FFileNameToURLMapping >(m, "FFileNameToURLMapping")
		.def_readwrite("Filename", &FFileNameToURLMapping::Filename, py::return_value_policy::reference)
		.def_readwrite("UrlMapping", &FFileNameToURLMapping::UrlMapping, py::return_value_policy::reference)
		;
	py::class_< FPlayerReservation >(m, "FPlayerReservation")
		.def_readwrite("NetId", &FPlayerReservation::NetId, py::return_value_policy::reference)
		.def_readwrite("Skill", &FPlayerReservation::Skill)
		.def_readwrite("XpLevel", &FPlayerReservation::XpLevel)
		.def_readwrite("Mu", &FPlayerReservation::Mu, py::return_value_policy::reference)
		.def_readwrite("Sigma", &FPlayerReservation::Sigma, py::return_value_policy::reference)
		.def_readwrite("ElapsedSessionTime", &FPlayerReservation::ElapsedSessionTime)
		;
	py::class_< FPartyReservation >(m, "FPartyReservation")
		.def_readwrite("TeamNum", &FPartyReservation::TeamNum)
		.def_readwrite("PartyLeader", &FPartyReservation::PartyLeader, py::return_value_policy::reference)
		.def_readwrite("PartyMembers", &FPartyReservation::PartyMembers, py::return_value_policy::reference)
		;
	py::class_< FClientBeaconConnection >(m, "FClientBeaconConnection")
		.def_readwrite("PartyLeader", &FClientBeaconConnection::PartyLeader, py::return_value_policy::reference)
		.def_readwrite("ElapsedHeartbeatTime", &FClientBeaconConnection::ElapsedHeartbeatTime)
		.def_readwrite("Socket", &FClientBeaconConnection::Socket, py::return_value_policy::reference)
		;

}