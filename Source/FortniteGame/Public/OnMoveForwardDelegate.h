#pragma once
#include "CoreMinimal.h"
#include "OnMoveForwardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveForward, float, Val);

