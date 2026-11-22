#pragma once
#include "CoreMinimal.h"
#include "EInteractionBeingAttempted.h"
#include "FortAIInteractionDelegate.generated.h"

class AFortAIPawn;
class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortAIInteraction, AFortAIPawn*, AI, AFortPlayerController*, InteractingPlayerController, TEnumAsByte<EInteractionBeingAttempted>, InteractionBeingAttempted);

