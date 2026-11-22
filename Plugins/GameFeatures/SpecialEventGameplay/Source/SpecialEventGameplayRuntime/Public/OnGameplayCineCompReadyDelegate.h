#pragma once
#include "CoreMinimal.h"
#include "OnGameplayCineCompReadyDelegate.generated.h"

class UFortControllerComponent_GameplayCinematic;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayCineCompReady, UFortControllerComponent_GameplayCinematic*, FoundComponent);

