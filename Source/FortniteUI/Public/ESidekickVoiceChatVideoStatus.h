#pragma once
#include "CoreMinimal.h"
#include "ESidekickVoiceChatVideoStatus.generated.h"

UENUM(BlueprintType)
enum class ESidekickVoiceChatVideoStatus : uint8 {
    Enabled,
    Disabled,
    NetworkDisabled,
    BackgroundDisabled,
};

