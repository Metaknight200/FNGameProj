#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "RebirthPlayerRarity.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FRebirthPlayerRarity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity Rarity;
    
    REBIRTHRUNTIME_API FRebirthPlayerRarity();
};

