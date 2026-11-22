#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotController.h"
#include "ScalableFloat.h"
#include "VendettaHunterAIBotController.generated.h"

UCLASS(Blueprintable)
class AVendettaHunterAIBotController : public AFortAthenaAIBotController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateBountyTargetInterval;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BountyTargetForgetTimePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bHostileTowardTargetSquad;
    
public:
    AVendettaHunterAIBotController(const FObjectInitializer& ObjectInitializer);

};

