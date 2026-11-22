#pragma once
#include "CoreMinimal.h"
#include "EBattlePassView.generated.h"

UENUM(BlueprintType)
enum class EBattlePassView : uint8 {
    None,
    LandingPage,
    RewardOverview,
    ItemDetails,
    BulkBuyRewards,
    CharacterCustomizer,
    BonusRewards,
    Quests,
};

