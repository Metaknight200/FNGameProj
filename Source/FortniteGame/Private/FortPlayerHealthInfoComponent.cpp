#include "FortPlayerHealthInfoComponent.h"
#include "Net/UnrealNetwork.h"

UFortPlayerHealthInfoComponent::UFortPlayerHealthInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFortPlayerHealthInfoComponent::OnRep_TeamHealthInfoArray() {
}

void UFortPlayerHealthInfoComponent::OnHealthChanged(AFortTeamHealthInfo* TeamHealthInfo) {
}

void UFortPlayerHealthInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerHealthInfoComponent, TeamHealthInfoArray);
}


