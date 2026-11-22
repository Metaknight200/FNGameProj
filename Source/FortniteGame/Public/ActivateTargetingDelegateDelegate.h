#pragma once
#include "CoreMinimal.h"
#include "ActivateTargetingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivateTargetingDelegate, bool, bIsTargeting);

