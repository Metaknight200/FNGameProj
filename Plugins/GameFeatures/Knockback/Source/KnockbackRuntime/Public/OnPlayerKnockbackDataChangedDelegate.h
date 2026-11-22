#pragma once
#include "CoreMinimal.h"
#include "KnockbackMutatorData.h"
#include "OnPlayerKnockbackDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerKnockbackDataChanged, const FKnockbackMutatorData&, KnockbackData);

