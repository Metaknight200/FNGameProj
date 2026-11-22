#pragma once
#include "CoreMinimal.h"
#include "OnAudioShapeInsideStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioShapeInsideStateChanged, bool, bIsInside);

