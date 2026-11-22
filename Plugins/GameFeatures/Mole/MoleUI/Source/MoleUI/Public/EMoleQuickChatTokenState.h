#pragma once
#include "CoreMinimal.h"
#include "EMoleQuickChatTokenState.generated.h"

UENUM()
enum class EMoleQuickChatTokenState : int32 {
    None,
    AnyPlayer,
    AlivePlayer,
    DeadPlayer,
    Location,
};

