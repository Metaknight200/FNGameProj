#pragma once
#include "CoreMinimal.h"
#include "OnWidgetActivationChangedDynamicDelegate.generated.h"

class UCommonActivatablePanelLegacy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWidgetActivationChangedDynamic, UCommonActivatablePanelLegacy*, Panel);

