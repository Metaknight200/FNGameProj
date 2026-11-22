#pragma once
#include "CoreMinimal.h"
#include "VendettaHuntersSpawnedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendettaHuntersSpawned, FName, SpawnGroup);

