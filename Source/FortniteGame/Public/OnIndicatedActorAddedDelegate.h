#pragma once
#include "CoreMinimal.h"
#include "OnIndicatedActorAddedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnIndicatedActorAdded, AActor*, IndicatedActor);

