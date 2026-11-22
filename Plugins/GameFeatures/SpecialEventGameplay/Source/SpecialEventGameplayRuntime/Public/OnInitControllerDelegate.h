#pragma once
#include "CoreMinimal.h"
#include "OnInitControllerDelegate.generated.h"

class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitController, AFortPlayerControllerAthena*, NewPlayer);

