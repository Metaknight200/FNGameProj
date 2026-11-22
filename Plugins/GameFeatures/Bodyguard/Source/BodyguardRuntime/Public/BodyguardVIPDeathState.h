#pragma once
#include "CoreMinimal.h"
#include "BodyguardVIPDeathState.generated.h"

USTRUCT(BlueprintType)
struct FBodyguardVIPDeathState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
    BODYGUARDRUNTIME_API FBodyguardVIPDeathState();
};

