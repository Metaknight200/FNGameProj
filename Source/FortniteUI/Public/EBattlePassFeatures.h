#pragma once
#include "CoreMinimal.h"
#include "EBattlePassFeatures.generated.h"

UENUM(BlueprintType)
enum class EBattlePassFeatures : uint8 {
    None,
    BuyBattlePass,
    GiftBattlePass,
    BuySubscription,
    ViewDetails,
    WatchVideo,
    ShowAbout,
    PurchaseResources,
};

