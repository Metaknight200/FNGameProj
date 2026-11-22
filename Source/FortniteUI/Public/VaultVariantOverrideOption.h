#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VaultVariantOverrideOption.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FVaultVariantOverrideOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomDataPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* OptionalItemVariantIsUsedFor;
    
    FORTNITEUI_API FVaultVariantOverrideOption();
};

