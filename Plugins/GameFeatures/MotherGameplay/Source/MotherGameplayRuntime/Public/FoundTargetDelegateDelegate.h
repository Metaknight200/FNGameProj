#pragma once
#include "CoreMinimal.h"
#include "FoundTargetDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoundTargetDelegate, AActor*, NewTarget);

