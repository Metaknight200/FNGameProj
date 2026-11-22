#pragma once
#include "CoreMinimal.h"
#include "QuestOnSetScoreDelegateDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestOnSetScoreDelegate, AController*, ConditionInstigator, int32, AmountToSet);

