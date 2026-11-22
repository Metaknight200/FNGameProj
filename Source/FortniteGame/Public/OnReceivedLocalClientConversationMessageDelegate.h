#pragma once
#include "CoreMinimal.h"
#include "ConversationTypes.h"
#include "OnReceivedLocalClientConversationMessageDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReceivedLocalClientConversationMessage, const AFortPlayerController*, LocalPlayerController, const FClientConversationMessagePayload&, Message);

