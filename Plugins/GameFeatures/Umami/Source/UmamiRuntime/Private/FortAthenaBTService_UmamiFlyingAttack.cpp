#include "FortAthenaBTService_UmamiFlyingAttack.h"

UFortAthenaBTService_UmamiFlyingAttack::UFortAthenaBTService_UmamiFlyingAttack() {
    this->NodeName = TEXT("Flying FlyingAttack Service");
    this->FlyingAttackExecutionStatusKeyName = TEXT("AIEvaluator_FlyingAttack_ExecutionStatus");
    this->SuccessPendingKeyName = TEXT("AIEvaluator_FlyingAttack_SuccessPending_Boolean");
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
}


