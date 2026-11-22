#include "FortAthenaMutator_AddBarrier.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AddBarrier::AFortAthenaMutator_AddBarrier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BigBaseWallClass = NULL;
    this->bStartTimerAtSafeZone = false;
    this->bSpawnAtMidFlightPathDuringBusLockedPhase = true;
    this->BigBaseWall = NULL;
}

void AFortAthenaMutator_AddBarrier::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

bool AFortAthenaMutator_AddBarrier::IsBarrierUp() const {
    return false;
}

AAthenaBigBaseWall* AFortAthenaMutator_AddBarrier::GetBigBaseWall() const {
    return BigBaseWall;
}

void AFortAthenaMutator_AddBarrier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AddBarrier, BigBaseWall);
}


