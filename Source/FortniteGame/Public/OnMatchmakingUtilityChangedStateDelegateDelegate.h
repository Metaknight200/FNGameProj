#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingUtilityState.h"
#include "OnMatchmakingUtilityChangedStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakingUtilityChangedStateDelegate, EMatchmakingUtilityState, OldState, EMatchmakingUtilityState, NewState);

