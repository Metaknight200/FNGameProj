#pragma once
#include "CoreMinimal.h"
#include "AsyncGameplayMessageDelegateDelegate.generated.h"

class UAsyncAction_RegisterGameplayMessageReceiver;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncGameplayMessageDelegate, UAsyncAction_RegisterGameplayMessageReceiver*, ProxyObject);

