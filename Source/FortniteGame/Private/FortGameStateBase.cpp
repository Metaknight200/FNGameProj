#include "FortGameStateBase.h"
#include "Net/UnrealNetwork.h"

AFortGameStateBase::AFortGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FortTimeOfDayManager = NULL;
    this->StormShield = NULL;
}

void AFortGameStateBase::OnRep_TimeOfDayManager() {
}

void AFortGameStateBase::OnRep_StormShield() {
}

AFortTimeOfDayManager* AFortGameStateBase::GetTimeOfDayManager() const {
    return NULL;
}

AFortMissionStormShield* AFortGameStateBase::GetStormShield() const {
    return StormShield;
}

void AFortGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateBase, FortTimeOfDayManager);
    DOREPLIFETIME(AFortGameStateBase, StormShield);
}


