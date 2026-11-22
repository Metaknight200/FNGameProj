#pragma once
#include "CoreMinimal.h"
#include "CommonButtonClickedDelegate.generated.h"

class UCommonButtonLegacy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonButtonClicked, UCommonButtonLegacy*, Button);

