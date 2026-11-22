#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UmamiMaximumStuckTimePerBuildingTypeDigested.generated.h"

USTRUCT(BlueprintType)
struct FUmamiMaximumStuckTimePerBuildingTypeDigested {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTag;
    
    UMAMIRUNTIME_API FUmamiMaximumStuckTimePerBuildingTypeDigested();
};

