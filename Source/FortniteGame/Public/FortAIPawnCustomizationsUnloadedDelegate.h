#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnCustomizationsUnloadedDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortAIPawnCustomizationsUnloaded, AFortPawn*, ThisPawn);

