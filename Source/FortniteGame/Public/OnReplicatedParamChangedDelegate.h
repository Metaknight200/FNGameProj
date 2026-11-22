#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnReplicatedParamChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReplicatedParamChanged, const FGameplayTag&, ParamTag);

