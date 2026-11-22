#pragma once
#include "CoreMinimal.h"
#include "EMinigameStatSavePolicy.generated.h"

UENUM(BlueprintType)
enum EMinigameStatSavePolicy {
    Never,
    Always,
    OnlyIfLower,
    OnlyIfHigher,
};

