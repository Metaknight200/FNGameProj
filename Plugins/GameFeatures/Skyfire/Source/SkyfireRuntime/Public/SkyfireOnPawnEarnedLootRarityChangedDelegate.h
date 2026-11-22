#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "SkyfireOnPawnEarnedLootRarityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireOnPawnEarnedLootRarityChanged, const EFortRarity, NewRarity);

