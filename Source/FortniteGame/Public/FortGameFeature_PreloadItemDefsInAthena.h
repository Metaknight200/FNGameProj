#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_PreloadItemDefsInAthena.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_PreloadItemDefsInAthena : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_PreloadItemDefsInAthena();


    // Fix for true pure virtual functions not being implemented
};

