#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_AIGoals.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_AIGoals : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_AIGoals();


    // Fix for true pure virtual functions not being implemented
};

