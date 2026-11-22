#pragma once
#include "CoreMinimal.h"
#include "EInteriorAudioRoomSize.generated.h"

UENUM(BlueprintType)
namespace EInteriorAudioRoomSize {
    enum Type {
        Small,
        Medium,
        Large,
        Max_None,
    };
}

