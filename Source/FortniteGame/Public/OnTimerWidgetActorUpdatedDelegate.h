#pragma once
#include "CoreMinimal.h"
#include "OnTimerWidgetActorUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimerWidgetActorUpdated, const AActor*, TimerWidgetActor);

