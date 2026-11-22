#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Behavior.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIRuntimeParameters_Behavior : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSurfaceTypeCheckEnabled: 1;
    
public:
    UFortAthenaAIRuntimeParameters_Behavior();

};

