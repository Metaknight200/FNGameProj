#pragma once
#include "CoreMinimal.h"
#include "EMoleTaskLeashType.generated.h"

UENUM(BlueprintType)
enum class EMoleTaskLeashType : uint8 {
    CollisionOverlap,
    DistanceFromActorLocation,
};

