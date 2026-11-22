#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnMutatorCharacterMovementBlockedDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMutatorCharacterMovementBlocked, FHitResult&, InOutHit, AFortPawn*, FortPawn);

