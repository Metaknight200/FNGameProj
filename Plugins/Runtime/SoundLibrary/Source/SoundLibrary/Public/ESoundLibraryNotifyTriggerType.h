#pragma once
#include "CoreMinimal.h"
#include "ESoundLibraryNotifyTriggerType.generated.h"

UENUM(BlueprintType)
enum class ESoundLibraryNotifyTriggerType : uint8 {
    Play,
    Stop,
    None,
};

