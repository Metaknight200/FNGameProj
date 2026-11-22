#include "FortAthenaBTService_FlyingDestroyBlocker.h"

UFortAthenaBTService_FlyingDestroyBlocker::UFortAthenaBTService_FlyingDestroyBlocker() {
    this->NodeName = TEXT("Flying Destroy Blocker");
    this->DestroyBlockerExecutionStatusKeyName = TEXT("AIEvaluator_DestroyBlocker_ExecutionStatus");
    this->DestroyBlockerTargetKeyName = TEXT("AIEvaluator_DestroyBlocker_Target");
    this->WeaponFireStatusKeyName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
}


