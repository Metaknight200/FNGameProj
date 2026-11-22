#pragma once
#include "CoreMinimal.h"
#include "OnNativePurchaseBattlePassOfferCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNativePurchaseBattlePassOfferComplete, const bool, bSuccess);

