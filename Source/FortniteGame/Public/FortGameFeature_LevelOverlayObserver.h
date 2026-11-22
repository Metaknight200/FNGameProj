#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_LevelOverlayObserver.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_LevelOverlayObserver : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_LevelOverlayObserver();


    // Fix for true pure virtual functions not being implemented
};

