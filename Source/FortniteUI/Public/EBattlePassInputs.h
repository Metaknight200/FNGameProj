#pragma once
#include "CoreMinimal.h"
#include "EBattlePassInputs.generated.h"

UENUM(BlueprintType)
enum class EBattlePassInputs : uint8 {
    Back,
    ViewItem,
    PreviewAction,
    ReplayTrailer,
    ShowAbout,
    BulkBuyRewards,
    ShowAboutCustomization,
    COUNT,
};

