#pragma once
#include "CoreMinimal.h"
#include "OnSkyTubeChangedDelegate.generated.h"

class AFortPlayerPawn;
class AFortSkyTube;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSkyTubeChanged, AFortPlayerPawn*, Pawn, AFortSkyTube*, NewSkyTube, AFortSkyTube*, OldSkyTube);

