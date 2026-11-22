#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "TailgateTargetBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ATailgateTargetBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetType;
    
public:
    ATailgateTargetBase(const FObjectInitializer& ObjectInitializer);

};

