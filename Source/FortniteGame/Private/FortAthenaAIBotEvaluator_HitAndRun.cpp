#include "FortAthenaAIBotEvaluator_HitAndRun.h"

UFortAthenaAIBotEvaluator_HitAndRun::UFortAthenaAIBotEvaluator_HitAndRun() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_Evade_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_Evade_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Evade_Destination");
    this->EvadeKeyName = TEXT("AIEvaluator_Evade_ExecutionStatus");
    this->EvadeMovementStateKeyName = TEXT("AIEvaluator_Evade_MovementState");
    this->EvadeDestinationKeyName = TEXT("AIEvaluator_Evade_Destination");
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->MeleeAttackMaxDistToEvadeSqr = 0.00f;
    this->MaxDistanceToEvadeSqr = 0.00f;
}


