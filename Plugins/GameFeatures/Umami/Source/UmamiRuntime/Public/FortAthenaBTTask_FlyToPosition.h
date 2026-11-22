#pragma once
#include "CoreMinimal.h"
#include "FortAthenaBTTask_BotMoveTo.h"
#include "ScalableFloat.h"
#include "FortAthenaBTTask_FlyToPosition.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTTask_FlyToPosition : public UFortAthenaBTTask_BotMoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldSlowdownWhenApproachingGoal: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectStartOnNavArea: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDirectMovementOnProjectionFailure: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LinearForwardDivisorMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LinearElevationDivisorMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxForwardSpeedOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxElevationSpeedOverride;
    
public:
    UFortAthenaBTTask_FlyToPosition();

};

