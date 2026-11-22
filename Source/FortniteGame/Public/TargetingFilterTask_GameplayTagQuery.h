#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_GameplayTagQuery.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTargetingFilterTask_GameplayTagQuery : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery GameplayTagQuery;
    
public:
    UTargetingFilterTask_GameplayTagQuery();

};

