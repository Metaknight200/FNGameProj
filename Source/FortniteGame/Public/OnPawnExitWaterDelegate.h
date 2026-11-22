#pragma once
#include "CoreMinimal.h"
#include "OnPawnExitWaterDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPawnExitWater, AFortPlayerPawn*, FortPlayerPawn, const bool, bPawnIsOutsideOfAllWaterBodies);

