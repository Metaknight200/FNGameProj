#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "KidnapCustomTargetWeightConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FKidnapCustomTargetWeightConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckOnVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightDelta;
    
    UMAMIRUNTIME_API FKidnapCustomTargetWeightConfiguration();
};

