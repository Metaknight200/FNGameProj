#pragma once
#include "CoreMinimal.h"
#include "VendettaMasterHunterEliminatedDelegate.generated.h"

class AFortPlayerStateAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVendettaMasterHunterEliminated, const AFortPlayerStateAthena*, Killer);

