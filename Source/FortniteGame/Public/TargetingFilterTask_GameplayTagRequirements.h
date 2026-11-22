#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_GameplayTagRequirements.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_GameplayTagRequirements : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements GameplayTagReqs;
    
public:
    UTargetingFilterTask_GameplayTagRequirements();

};

