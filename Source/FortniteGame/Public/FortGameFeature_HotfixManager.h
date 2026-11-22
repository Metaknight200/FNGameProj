#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortGameFeature_HotfixManager.generated.h"

UCLASS(Blueprintable)
class UFortGameFeature_HotfixManager : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortGameFeature_HotfixManager();


    // Fix for true pure virtual functions not being implemented
};

