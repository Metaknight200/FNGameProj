#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleSabotageStatus.generated.h"

USTRUCT(BlueprintType)
struct FMoleSabotageStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SabotageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    MOLEGAMERUNTIME_API FMoleSabotageStatus();
};

