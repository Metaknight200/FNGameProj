#pragma once
#include "CoreMinimal.h"
#include "OnActiveWidgetDeactivatedDelegate.generated.h"

class UCommonActivatablePanelLegacy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveWidgetDeactivated, UCommonActivatablePanelLegacy*, DeactivatedWidget);

