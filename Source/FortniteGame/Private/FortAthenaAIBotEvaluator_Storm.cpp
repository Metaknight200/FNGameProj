#include "FortAthenaAIBotEvaluator_Storm.h"

UFortAthenaAIBotEvaluator_Storm::UFortAthenaAIBotEvaluator_Storm() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Storm_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Storm_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Storm_Destination");
    this->StormDestinationName = TEXT("AIEvaluator_Storm_Destination");
    this->CacheAthenaGameMode = NULL;
    this->CachedBTComp = NULL;
}

void UFortAthenaAIBotEvaluator_Storm::OnSafezoneStateChanged(const EFortSafeZoneState NewState) {
}

void UFortAthenaAIBotEvaluator_Storm::OnSafeZonePhaseChanged() {
}


