#include "FortPlayerTeamSettingsComponent.h"
#include "Net/UnrealNetwork.h"

UFortPlayerTeamSettingsComponent::UFortPlayerTeamSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamIndex = 255;
    this->TeamColorIndex = -1;
    this->bRunOutTimeToWin = false;
    this->DefaultClassSlot = 255;
    this->RespawnWaveType = ECreativeRespawnWaveType::None;
}

void UFortPlayerTeamSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, bRunOutTimeToWin);
}


