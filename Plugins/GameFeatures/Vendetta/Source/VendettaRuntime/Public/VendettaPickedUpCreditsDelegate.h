#pragma once
#include "CoreMinimal.h"
#include "VendettaPickedUpCreditsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendettaPickedUpCredits, int32, Value);

