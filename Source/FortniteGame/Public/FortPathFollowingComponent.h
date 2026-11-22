#pragma once
#include "CoreMinimal.h"
#include "FortPathFollowingComponentBase.h"
#include "FortPathFollowingComponent.generated.h"

class AFortAIController;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortPathFollowingComponent : public UFortPathFollowingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIController* MyAI;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementBlockFrustrationCooldownSpeed;
    
public:
    UFortPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

