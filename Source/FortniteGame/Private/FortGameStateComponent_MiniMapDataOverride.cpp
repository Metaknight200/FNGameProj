#include "FortGameStateComponent_MiniMapDataOverride.h"
#include "Net/UnrealNetwork.h"

UFortGameStateComponent_MiniMapDataOverride::UFortGameStateComponent_MiniMapDataOverride(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortGameStateComponent_MiniMapDataOverride::OnRep_MiniMapDataOverridesRepDatas() {
}

void UFortGameStateComponent_MiniMapDataOverride::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGameStateComponent_MiniMapDataOverride, MiniMapDataOverrideRepDatas);
}


