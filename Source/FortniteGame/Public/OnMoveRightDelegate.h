#pragma once
#include "CoreMinimal.h"
#include "OnMoveRightDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveRight, float, Val);

