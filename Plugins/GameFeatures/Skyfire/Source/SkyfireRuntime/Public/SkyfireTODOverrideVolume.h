#pragma once
#include "CoreMinimal.h"
#include "FortSpatialGameplayInterface.h"
#include "GameplayVolume.h"
#include "SkyfireTODOverrideVolume.generated.h"

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API ASkyfireTODOverrideVolume : public AGameplayVolume, public IFortSpatialGameplayInterface {
    GENERATED_BODY()
public:
    ASkyfireTODOverrideVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

