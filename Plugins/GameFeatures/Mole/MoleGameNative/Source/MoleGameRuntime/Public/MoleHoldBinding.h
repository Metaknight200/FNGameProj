#pragma once
#include "CoreMinimal.h"
#include "MoleHoldBinding.generated.h"

USTRUCT(BlueprintType)
struct FMoleHoldBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionBindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvertedActionBindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
public:
    MOLEGAMERUNTIME_API FMoleHoldBinding();
};

