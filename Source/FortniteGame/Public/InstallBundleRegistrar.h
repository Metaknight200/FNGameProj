#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeatureStateChangeObserver.h"
#include "InstallBundleRegistrar.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UInstallBundleRegistrar : public UObject, public IGameFeatureStateChangeObserver {
    GENERATED_BODY()
public:
    UInstallBundleRegistrar();


    // Fix for true pure virtual functions not being implemented
};

