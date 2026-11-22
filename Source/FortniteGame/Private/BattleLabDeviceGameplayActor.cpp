#include "BattleLabDeviceGameplayActor.h"
#include "Net/UnrealNetwork.h"

ABattleLabDeviceGameplayActor::ABattleLabDeviceGameplayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BattleLabDeviceItemData = NULL;
}

void ABattleLabDeviceGameplayActor::OnRep_BattleLabDeviceItemData() {
}

void ABattleLabDeviceGameplayActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattleLabDeviceGameplayActor, BattleLabDeviceItemData);
}


