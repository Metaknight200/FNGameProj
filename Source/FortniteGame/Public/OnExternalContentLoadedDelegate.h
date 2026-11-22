#pragma once
#include "CoreMinimal.h"
#include "OnExternalContentLoadedDelegate.generated.h"

class UFortGameFeatureData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnExternalContentLoaded, bool, SuccessfullyLoaded, const UFortGameFeatureData*, LoadedGameFeatureData);

