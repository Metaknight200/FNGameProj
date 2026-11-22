#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_GameplayCueObserver.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_GameplayCueObserver : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_GameplayCueObserver();


    // Fix for true pure virtual functions not being implemented
};

