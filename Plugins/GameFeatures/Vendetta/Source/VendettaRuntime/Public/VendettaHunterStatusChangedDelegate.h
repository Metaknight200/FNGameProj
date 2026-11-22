#pragma once
#include "CoreMinimal.h"
#include "EVendettaHuntedStatus.h"
#include "VendettaHunterStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendettaHunterStatusChanged, EVendettaHuntedStatus, NewHunterStatus);

