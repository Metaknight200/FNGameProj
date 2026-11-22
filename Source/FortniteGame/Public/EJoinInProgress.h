#pragma once
#include "CoreMinimal.h"
#include "EJoinInProgress.generated.h"

UENUM()
enum class EJoinInProgress : int32 {
    Spectate,
    JoinOnNextRound,
    JoinImmediately,
    JoinSpecificTeam,
};

