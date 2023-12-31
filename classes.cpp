#include "anim/CAnimAssociations.hpp"
#include "aud/audEntity.hpp"
#include "aud/audObjectAudioentity.hpp"
#include "base/blockInfo.hpp"
#include "base/CObject.hpp"
#include "base/CVirtualBase.hpp"
#include "base/datBase.hpp"
#include "base/HashTable.hpp"
#include "base/pgBase.hpp"
#include "base/pgBasicScheduler.hpp"
#include "data/CPortalTracker.hpp"
#include "data/CPtrNode.hpp"
#include "entities/CEntity.hpp"
#include "entities/CEntityCoords.hpp"
#include "entities/CEntityScanner.hpp"
#include "entities/CPhysical.hpp"
#include "hud/CSms.hpp"
#include "hud/ePhoneType.hpp"
#include "hud/missions.hpp"
#include "network/CDeltaBuffer.hpp"
#include "network/CMessageBuffer.hpp"
#include "network/CNetworkArrayMgr.hpp"
#include "network/CNetworkConfig.hpp"
#include "network/CNetworkObject.hpp"
#include "network/CNetworkObjectPlayerState.hpp"
#include "network/CParseNetworkObject.hpp"
#include "network/netConnectionManager.hpp"
#include "network/netTimeSync.hpp"
#include "ped/BoneTag.hpp"
#include "ped/CPed.hpp"
#include "ped/CPedFormation.hpp"
#include "ped/CPedGroup.hpp"
#include "ped/CPedGuardArea.hpp"
#include "ped/CPedModelInfo.hpp"
#include "ped/CPedObj.hpp"
#include "ped/CPedTasks.hpp"
#include "ped/CReplayWidget.hpp"
#include "player/CPlayer.hpp"
#include "player/CPlayerPed.hpp"
#include "police/CWanted.hpp"
#include "rage/atReferenceCounter.hpp"
#include "rage/atStringHash.hpp"
#include "rage/atVector.hpp"
#include "rage/crFrameBuffer.hpp"
#include "rage/datBitBuffer.hpp"
#include "rage/fiBaseTokenizer.hpp"
#include "rage/grbTargetManager.hpp"
#include "rage/sysArray.hpp"
#include "rage/sysMemAllocator.hpp"
#include "rage/sysTask.hpp"
#include "rage/sysTimeManager.hpp"
#include "rage/vector.hpp"
#include "script/dataList.hpp"
#include "script/GtaThread.hpp"
#include "script/HudColor.hpp"
#include "script/scrNativeRegistration.hpp"
#include "script/scrProgram.hpp"
#include "script/scrRgba.hpp"
#include "script/scrThread.hpp"
#include "script/scrThreadContext.hpp"
#include "script/scrVector.hpp"
#include "script/tlsContext.hpp"
#include "system/memory.hpp"
#include "system/new.hpp"
#include "timecycle/CTimecycle.hpp"
#include "timecycle/eWeather.hpp"
#include "timecycle/SkyDome.hpp"
#include "ui/CBlip.hpp"
#include "ui/CBlip2D.hpp"
#include "ui/CBlip3D.hpp"
#include "ui/CBlipSpriteInfo.hpp"
#include "vehicle/CHandlingData.hpp"
#include "vehicle/CVehicle.hpp"
#include "vehicle/eGarageType.hpp"
#include "vehicle/ePoliceVehicle.hpp"
#include "vehicle/eVehicleBone.hpp"
#include "vehicle/eVehicleColor.hpp"
#include "vehicle/eVehicleExtras.hpp"
#include "vehicle/eVehicleHandling.hpp"
#include "vehicle/eVehicleLights.hpp"
#include "vehicle/eVehicleList.hpp"
#include "vehicle/eVehicleState.hpp"
#include "vehicle/eVehicleStatus.hpp"
#include "weapon/CWeaponInfo.hpp"






