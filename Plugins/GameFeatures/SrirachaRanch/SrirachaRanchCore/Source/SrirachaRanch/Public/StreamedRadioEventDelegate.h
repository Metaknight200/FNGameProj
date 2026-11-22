#pragma once
#include "CoreMinimal.h"
#include "AthenaRadioStation.h"
#include "StreamedRadioEventDelegate.generated.h"

class UStreamingRadioPlayerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStreamedRadioEvent, UStreamingRadioPlayerComponent*, Component, FAthenaRadioStation, AffectedSource);

