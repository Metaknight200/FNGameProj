#include "FortAthenaAIBotEvaluator_UmamiFlyingAttack.h"

UFortAthenaAIBotEvaluator_UmamiFlyingAttack::UFortAthenaAIBotEvaluator_UmamiFlyingAttack() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_FlyingAttack_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_FlyingAttack_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_Attack_Destination");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    this->TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    this->HasLoSOnThreatName = TEXT("AIEvaluator_Global_HasLoSOnThreat");
    this->MovementModeKeyName = TEXT("AIEvaluator_FlyingAttack_MovementMode");
    this->FlyingEvasiveManeuversModeWhenInRange = EFlyingEvasiveManeuversMode::HorizontalAndVerticalWhileStandingStill;
    this->CachedRangeAttackDigestedSkillSet = NULL;
    this->CachedAimingDigestedSkillSet = NULL;
    this->CachedPerceptionDigestedSkillSet = NULL;
    this->CachedFlyingAttackDigestedSkillSet = NULL;
    this->CachedFlyingVehicleDigestedSkillSet = NULL;
}


