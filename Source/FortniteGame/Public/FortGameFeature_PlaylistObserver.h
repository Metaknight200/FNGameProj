#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_PlaylistObserver.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_PlaylistObserver : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_PlaylistObserver();


    // Fix for true pure virtual functions not being implemented
};

