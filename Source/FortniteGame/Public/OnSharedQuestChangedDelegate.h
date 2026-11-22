#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnSharedQuestChangedDelegate.generated.h"

class UFortQuestItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSharedQuestChanged, const FUniqueNetIdRepl&, PlayerID, const UFortQuestItem*, QuestToPin);

