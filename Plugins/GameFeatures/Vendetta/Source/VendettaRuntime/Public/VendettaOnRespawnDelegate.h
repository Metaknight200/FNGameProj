#pragma once
#include "CoreMinimal.h"
#include "VendettaOnRespawnDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendettaOnRespawn, int32, RespawnsRemaining);

