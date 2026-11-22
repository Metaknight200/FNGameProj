#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_CheckNPCMatchConversationCount.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortControllerRequirement_CheckNPCMatchConversationCount : public UFortControllerRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig RequiredConversationCountConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NPCUniqueIDTag;
    
public:
    UFortControllerRequirement_CheckNPCMatchConversationCount();

};

