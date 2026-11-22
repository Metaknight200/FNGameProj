#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_ExternalContent.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_ExternalContent : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_ExternalContent();


    // Fix for true pure virtual functions not being implemented
};

