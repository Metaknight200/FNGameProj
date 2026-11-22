#pragma once
#include "CoreMinimal.h"
#include "SpecialClientEvent.h"
#include "OnSpecialClientEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpecialClientEvent, FSpecialClientEvent, ClientEventData);

