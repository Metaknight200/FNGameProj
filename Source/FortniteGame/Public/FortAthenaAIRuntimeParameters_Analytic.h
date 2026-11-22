#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Analytic.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OnDeathGameplayTags;
    
public:
    UFortAthenaAIRuntimeParameters_Analytic();

};

