#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnPodData.h"
#include "PlayerSpawnPodOnPodLandedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerSpawnPodOnPodLanded, FPlayerSpawnPodData, PodData);

