#include "FortAthenaNpcEvaluator_FollowSquadLeader.h"

UFortAthenaNpcEvaluator_FollowSquadLeader::UFortAthenaNpcEvaluator_FollowSquadLeader() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_FollowSquadLeader_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_FollowSquadLeader_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_FollowSquadLeader_Destination");
    this->FollowSquadLeaderStatusKeyName = TEXT("AIEvaluator_FollowSquadLeader_ExecutionStatus");
    this->FollowSquadLeaderMovementStateKeyName = TEXT("AIEvaluator_FollowSquadLeader_MovementState");
    this->FollowSquadLeaderDestinationKeyName = TEXT("AIEvaluator_FollowSquadLeader_Destination");
    this->TooFarFromLeaderKeyName = TEXT("AIEvaluator_FollowSquadLeader_TooFarFromLeader");
    this->CachedTooFarFromSquadLeaderDistanceSqr = 0.00f;
    this->LastNoiseOffsetUpdateTime = 0.00f;
    this->DurationNoiseEvaluate = 0.00f;
}


