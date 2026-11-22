#pragma once
#include "CoreMinimal.h"
#include "EFortDagwoodSimEvent.generated.h"

UENUM(BlueprintType)
enum class EFortDagwoodSimEvent : uint8 {
    EnterLandscape,
    ExitLandscape,
    EnterRoad,
    ExitRoad,
    Explode,
    FlipImpact,
    StartBoost,
    FinishBoost,
};

