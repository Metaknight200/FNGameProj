#include "FortMissionAircraft.h"
#include "Templates/SubclassOf.h"

AFortMissionAircraft::AFortMissionAircraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Aircraft = NULL;
}

AFortAircraft* AFortMissionAircraft::CreateAircraft(const FTransform SpawnTransform, TSubclassOf<AFortAircraft> AircraftClass) {
    return NULL;
}


