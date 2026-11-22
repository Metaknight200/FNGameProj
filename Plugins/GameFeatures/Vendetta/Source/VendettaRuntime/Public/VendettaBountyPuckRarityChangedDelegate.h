#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortRarity.h"
#include "VendettaBountyPuckRarityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVendettaBountyPuckRarityChanged, FGuid, TrackerGuid, EFortRarity, NewRarity);

