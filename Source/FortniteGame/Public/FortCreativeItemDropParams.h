#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeItemDropAmount.h"
#include "FortCreativeItemDropParams.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeItemDropParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeItemDropAmount AmountRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPickups;
    
    FORTNITEGAME_API FFortCreativeItemDropParams();
};

