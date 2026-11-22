#pragma once
#include "CoreMinimal.h"
#include "EFortActivityBrowserTagType.generated.h"

UENUM(BlueprintType)
enum class EFortActivityBrowserTagType : uint8 {
    Default,
    EpicOriginal,
    SquadSize,
    MaxPlayers,
};

