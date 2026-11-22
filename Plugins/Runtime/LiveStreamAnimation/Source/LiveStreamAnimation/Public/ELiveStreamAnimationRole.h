#pragma once
#include "CoreMinimal.h"
#include "ELiveStreamAnimationRole.generated.h"

UENUM(BlueprintType)
enum class ELiveStreamAnimationRole : uint8 {
    Proxy,
    Processor,
    Tracker,
};

