#include "FortAIBuddy.h"

AFortAIBuddy::AFortAIBuddy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->VocalChords.AddDefaulted(1);
    this->AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
    this->InteractionType = IT_LongPress;
    this->ConsumableItem = NULL;
    this->DrainPawn = NULL;
    this->DrainItem = NULL;
}

void AFortAIBuddy::StopItemDrain() {
}

bool AFortAIBuddy::StartItemDrain(AFortPlayerPawn* PlayerPawn) {
    return false;
}

void AFortAIBuddy::RemoveTagListener(AActor* TargetActor, const FGameplayTag Tag) {
}






void AFortAIBuddy::AddTagListener(AActor* TargetActor, const FGameplayTag Tag) {
}


