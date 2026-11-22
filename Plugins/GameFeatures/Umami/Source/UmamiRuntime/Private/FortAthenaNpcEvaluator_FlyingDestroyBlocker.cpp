#include "FortAthenaNpcEvaluator_FlyingDestroyBlocker.h"

UFortAthenaNpcEvaluator_FlyingDestroyBlocker::UFortAthenaNpcEvaluator_FlyingDestroyBlocker() {
    this->UnstuckLastBlockedByActorLocationKeyName = TEXT("AIEvaluator_Unstuck_LastBlockingActor_Location");
    this->DestroyBlockerExecutionStatusKeyName = TEXT("AIEvaluator_DestroyBlocker_ExecutionStatus");
    this->DestroyBlockerMovementStateKeyName = TEXT("AIEvaluator_DestroyBlocker_MovementState");
    this->DestroyBlockerDestinationKeyName = TEXT("AIEvaluator_DestroyBlocker_Destination");
    this->DestroyBlockerTargetKeyName = TEXT("AIEvaluator_DestroyBlocker_Target");
    this->WeaponFireStatusKeyName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->FocusActorName = TEXT("AIEvaluator_Global_FocusActor");
    this->FocalPointName = TEXT("AIEvaluator_Global_FocalPoint");
    this->CachedFlyingDestroyBlockerDigestedSkillSet = NULL;
}


