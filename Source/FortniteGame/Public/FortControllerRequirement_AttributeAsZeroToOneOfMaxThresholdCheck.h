#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_AttributeAsZeroToOneOfMaxThresholdCheck.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerRequirement_AttributeAsZeroToOneOfMaxThresholdCheck : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute QueryAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute MaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig ThresholdTestConfig;
    
    UFortControllerRequirement_AttributeAsZeroToOneOfMaxThresholdCheck();

};

