#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_FortPlayerController.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_FortPlayerController : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_FortPlayerController();


    // Fix for true pure virtual functions not being implemented
};

