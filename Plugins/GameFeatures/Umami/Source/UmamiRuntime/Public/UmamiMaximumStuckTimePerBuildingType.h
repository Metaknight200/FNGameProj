#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "UmamiMaximumStuckTimePerBuildingType.generated.h"

USTRUCT(BlueprintType)
struct FUmamiMaximumStuckTimePerBuildingType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumStuckTime;
    
    UMAMIRUNTIME_API FUmamiMaximumStuckTimePerBuildingType();
};

