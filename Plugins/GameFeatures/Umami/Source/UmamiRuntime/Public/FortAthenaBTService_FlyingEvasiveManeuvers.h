#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EFlyingEvasiveManeuversMode.h"
#include "EvasiveManeuver_Step.h"
#include "FortAthenaBTService_FlyingEvasiveManeuvers.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTService_FlyingEvasiveManeuvers : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlyingEvasiveManeuversMode FlyingEvasiveManeuversMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvasiveManeuver_Step> FlyingEvasiveManeuversConfiguration;
    
public:
    UFortAthenaBTService_FlyingEvasiveManeuvers();

};

