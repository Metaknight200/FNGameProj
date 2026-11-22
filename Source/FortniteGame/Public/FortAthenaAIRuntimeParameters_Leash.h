#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELeashReturnLocationMode.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "FortAthenaAIRuntimeParameters_Leash.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LeashLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeashInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeashOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELeashReturnLocationMode LeashReturnLocationMode;
    
public:
    UFortAthenaAIRuntimeParameters_Leash();

};

