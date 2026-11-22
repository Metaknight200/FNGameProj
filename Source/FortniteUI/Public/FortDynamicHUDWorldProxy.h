#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameFeatureStateChangeObserver.h"
#include "FortDynamicHUDWorldProxy.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortDynamicHUDWorldProxy : public UWorldSubsystem, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UFortDynamicHUDWorldProxy();


    // Fix for true pure virtual functions not being implemented
};

