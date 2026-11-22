#pragma once
#include "CoreMinimal.h"
#include "SkyfireInMothershipChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSkyfireInMothershipChanged, const bool, bInMothership);

