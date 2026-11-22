#include "FortAthenaAIBotEvaluator_ReachBeacon.h"

UFortAthenaAIBotEvaluator_ReachBeacon::UFortAthenaAIBotEvaluator_ReachBeacon() {
    const FProperty* p_ExecutionStatusName = GetClass()->FindPropertyByName("ExecutionStatusName");
    (*p_ExecutionStatusName->ContainerPtrToValuePtr<FName>(this)) = TEXT("AIEvaluator_ReachBeacon_ExecutionStatus");
    this->MovementStateKeyName = TEXT("AIEvaluator_ReachBeacon_MovementState");
    this->MovementDestinationKeyName = TEXT("AIEvaluator_ReachBeacon_Target");
    this->ReachBeaconStatusKeyName = TEXT("AIEvaluator_ReachBeacon_ExecutionStatus");
    this->ReachBeaconMovementStateKeyName = TEXT("AIEvaluator_ReachBeacon_MovementState");
    this->ReachBeaconTargetKeyName = TEXT("AIEvaluator_ReachBeacon_Target");
    this->CurrentBeacon = NULL;
    this->CachedAIServicePlayerBots = NULL;
}


