#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "HelperGameplayTagToAmmoCountMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FHelperGameplayTagToAmmoCountMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CountMultiplier;
    
    FORTNITEGAME_API FHelperGameplayTagToAmmoCountMultiplier();
};

