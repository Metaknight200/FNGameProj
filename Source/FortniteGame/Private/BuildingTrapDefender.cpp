#include "BuildingTrapDefender.h"
#include "Net/UnrealNetwork.h"

ABuildingTrapDefender::ABuildingTrapDefender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->LastInteractError = EFortDefenderInteractionError::None;
    this->DefenderPawn = NULL;
    this->DefenderItemDefinition = NULL;
    this->DefenderItemLevel = 0;
}

UFortWorldItem* ABuildingTrapDefender::TakeWeaponAwayFromDefender(UFortWorldItem* WeaponToTakeAway) {
    return NULL;
}

void ABuildingTrapDefender::SupplyDefender(const UFortWorldItem* WeaponToGive, const int32 AmmoQuantity) {
}

AFortAIPawn* ABuildingTrapDefender::SpawnDefenderfromItem(UFortAccountItem* DefenderItem, const FName& DefenderSquadId, const FTransform& SpawnTransform, AActor* InOwner) {
    return NULL;
}




FText ABuildingTrapDefender::GetLastInteractErrorText() {
    return FText::GetEmpty();
}




void ABuildingTrapDefender::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrapDefender, DefenderPawn);
    DOREPLIFETIME(ABuildingTrapDefender, DefenderItemDefinition);
    DOREPLIFETIME(ABuildingTrapDefender, DefenderItemLevel);
}


