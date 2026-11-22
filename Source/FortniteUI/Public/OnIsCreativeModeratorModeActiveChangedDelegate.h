#pragma once
#include "CoreMinimal.h"
#include "OnIsCreativeModeratorModeActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCreativeModeratorModeActiveChanged, bool, bIsCreativeModeratorModeActive);

