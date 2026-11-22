#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaAICanMoveState.generated.h"

UENUM(BlueprintType)
enum class EFortAthenaAICanMoveState : uint8 {
    None,
    Failed_AgentOffNavmesh,
    Failed_GoalOffNavmesh,
    Failed_Falling,
    Success,
    Success_Partial,
};

