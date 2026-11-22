#pragma once
#include "CoreMinimal.h"
#include "EDialogMarkerInteractionState.h"
#include "DialogMarkerInteractionStateChangedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDialogMarkerInteractionStateChanged, const EDialogMarkerInteractionState, CurrentInteractionState, const AFortPlayerController*, InteractingController);

