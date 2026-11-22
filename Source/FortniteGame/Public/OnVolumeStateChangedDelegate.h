#pragma once
#include "CoreMinimal.h"
#include "ESpatialLoadingState.h"
#include "OnVolumeStateChangedDelegate.generated.h"

class AFortVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVolumeStateChanged, ESpatialLoadingState, NewState, AFortVolume*, Volume);

