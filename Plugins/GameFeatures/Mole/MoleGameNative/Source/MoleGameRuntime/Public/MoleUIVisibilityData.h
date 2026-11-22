#pragma once
#include "CoreMinimal.h"
#include "MoleUIVisibilityData.generated.h"

USTRUCT(BlueprintType)
struct FMoleUIVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    MOLEGAMERUNTIME_API FMoleUIVisibilityData();
};

