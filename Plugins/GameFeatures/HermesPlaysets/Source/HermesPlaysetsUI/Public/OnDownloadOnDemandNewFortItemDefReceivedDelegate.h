#pragma once
#include "CoreMinimal.h"
#include "OnDownloadOnDemandNewFortItemDefReceivedDelegate.generated.h"

class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadOnDemandNewFortItemDefReceived, UFortItemDefinition*, DownloadOnDemandFortItemDefinition);

