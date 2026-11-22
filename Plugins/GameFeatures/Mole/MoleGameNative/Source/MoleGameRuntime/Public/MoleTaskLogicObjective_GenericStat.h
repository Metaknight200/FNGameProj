#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleObjectiveCriteriaFloat.h"
#include "MoleTaskLogicObjective.h"
#include "MoleTaskLogicObjective_GenericStat.generated.h"

class AController;
class UMoleTaskLinkComponent;

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicObjective_GenericStat : public UMoleTaskLogicObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StatTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleObjectiveCriteriaFloat InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleObjectiveCriteriaFloat TargetValue;
    
public:
    UMoleTaskLogicObjective_GenericStat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskLinkComponentGenericStatChanged(UMoleTaskLinkComponent* InTaskLinkComponent, AController* InUser, FGameplayTag InObjectiveStatTag, float InObjectiveStatDelta);
    
};

