#pragma once
#include "CoreMinimal.h"
#include "GameFeaturesProjectPolicies.h"
#include "FortGameFeaturePluginManager.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UFortGameFeaturePluginManager : public UGameFeaturesProjectPolicies {
    GENERATED_BODY()
public:
    UFortGameFeaturePluginManager();

};

