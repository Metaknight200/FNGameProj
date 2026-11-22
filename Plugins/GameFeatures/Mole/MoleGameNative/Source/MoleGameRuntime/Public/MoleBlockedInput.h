#pragma once
#include "CoreMinimal.h"
#include "MoleBlockedInput.generated.h"

USTRUCT(BlueprintType)
struct FMoleBlockedInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAxis;
    
    MOLEGAMERUNTIME_API FMoleBlockedInput();
};

