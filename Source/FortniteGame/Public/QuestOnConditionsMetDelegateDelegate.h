#pragma once
#include "CoreMinimal.h"
#include "QuestOnConditionsMetDelegateDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FQuestOnConditionsMetDelegate, AController*, ConditionInstigator);

