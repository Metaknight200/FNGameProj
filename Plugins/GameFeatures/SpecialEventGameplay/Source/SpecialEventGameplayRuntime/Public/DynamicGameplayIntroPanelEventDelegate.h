#pragma once
#include "CoreMinimal.h"
#include "DynamicGameplayIntroPanelEventDelegate.generated.h"

class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDynamicGameplayIntroPanelEvent, AFortPlayerControllerAthena*, PlayerControllerAthena);

