#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnPodOnPawnEjectedFromPodDelegate.generated.h"

class AFortPlayerPawnAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpawnPodOnPawnEjectedFromPod, AFortPlayerPawnAthena*, Pawn);

