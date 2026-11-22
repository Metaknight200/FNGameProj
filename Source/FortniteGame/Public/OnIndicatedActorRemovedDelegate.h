#pragma once
#include "CoreMinimal.h"
#include "OnIndicatedActorRemovedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnIndicatedActorRemoved, AActor*, IndicatedActor);

