#pragma once
#include "CoreMinimal.h"
#include "OnDownloadOnDemandAddProjectDefDelegate.generated.h"

class UFortItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadOnDemandAddProjectDef, const FString&, LinkCode, UFortItemDefinition*, DownloadOnDemandFortItemDefinition);

