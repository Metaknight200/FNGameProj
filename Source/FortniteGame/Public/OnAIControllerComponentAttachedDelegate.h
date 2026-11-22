#pragma once
#include "CoreMinimal.h"
#include "OnAIControllerComponentAttachedDelegate.generated.h"

class AFortAIController;
class UFortControllerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIControllerComponentAttached, AFortAIController*, OwnerController, UFortControllerComponent*, AttachedComponent);

