#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "CraftingUpgradeRule.generated.h"

USTRUCT(BlueprintType)
struct FCraftingUpgradeRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements SourceItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements TargetItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UpgradeFlags;
    
    CRAFTINGRUNTIME_API FCraftingUpgradeRule();
};

