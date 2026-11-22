#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "HealthSetExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class UHealthSetExecutionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UHealthSetExecutionCalculation();

};

