#pragma once
#include "CoreMinimal.h"
#include "PickupOnSetPawnWhoDroppedPickupDelegate.generated.h"

class AFortPickup;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupOnSetPawnWhoDroppedPickup, AFortPickup*, SelfActor);

