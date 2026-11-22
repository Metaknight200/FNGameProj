#pragma once
#include "CoreMinimal.h"
#include "OnJumpInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpInput, bool, bPressed);

