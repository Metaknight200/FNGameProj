#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "SkyfireOnSquadEarnedLootRarityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSkyfireOnSquadEarnedLootRarityChanged, const uint8, SquadId, const EFortRarity, NewRarity);

