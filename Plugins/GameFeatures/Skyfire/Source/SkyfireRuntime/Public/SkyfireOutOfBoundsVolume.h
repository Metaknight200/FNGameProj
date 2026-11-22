#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "SkyfireOutOfBoundsVolume.generated.h"

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API ASkyfireOutOfBoundsVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    ASkyfireOutOfBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

