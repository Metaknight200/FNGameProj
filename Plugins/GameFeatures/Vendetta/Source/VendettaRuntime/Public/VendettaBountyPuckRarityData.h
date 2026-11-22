#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "ScalableFloat.h"
#include "VendettaBountyPuckRarityData.generated.h"

USTRUCT(BlueprintType)
struct FVendettaBountyPuckRarityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRewardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxRewardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity Rarity;
    
    VENDETTARUNTIME_API FVendettaBountyPuckRarityData();
};

