#pragma once
#include "CoreMinimal.h"
#include "OnDownloadOnDemandDownloadingFailureDelegate.generated.h"

class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadOnDemandDownloadingFailure, UFortItemDefinition*, DownloadOnDemandFortItemDefinition, int32, Index);

