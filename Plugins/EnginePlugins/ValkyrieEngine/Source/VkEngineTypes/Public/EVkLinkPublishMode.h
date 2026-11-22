#pragma once
#include "CoreMinimal.h"
#include "EVkLinkPublishMode.generated.h"

UENUM(BlueprintType)
enum class EVkLinkPublishMode : uint8 {
    Live,
    Playtest,
};

