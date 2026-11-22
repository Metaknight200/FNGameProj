#pragma once
#include "CoreMinimal.h"
#include "MoleObjectiveValue.generated.h"

USTRUCT(BlueprintType)
struct FMoleObjectiveValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 ForceRepCount;
    
    MOLEGAMERUNTIME_API FMoleObjectiveValue();
};

