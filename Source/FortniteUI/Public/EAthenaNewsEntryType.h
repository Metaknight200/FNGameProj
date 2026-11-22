#pragma once
#include "CoreMinimal.h"
#include "EAthenaNewsEntryType.generated.h"

UENUM(BlueprintType)
enum class EAthenaNewsEntryType : uint8 {
    Text,
    Item,
    Website,
    NavigateToTab,
    Challenge,
    Playlist,
    Setting,
    SpatialScreen,
    SmallNews,
    NavigateToBattlePassSubPage,
    Creative,
    NavigateToSubscriptionSubPage,
    ProgressiveItemLearnMore,
    ProgressiveItemReminder,
    ProgressiveItemClaimRewards,
    Event,
    Discovery,
    Invalid,
};

