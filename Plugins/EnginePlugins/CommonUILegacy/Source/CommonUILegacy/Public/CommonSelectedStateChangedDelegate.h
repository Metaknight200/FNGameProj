#pragma once
#include "CoreMinimal.h"
#include "CommonSelectedStateChangedDelegate.generated.h"

class UCommonButtonLegacy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommonSelectedStateChanged, UCommonButtonLegacy*, Button, bool, Selected);

