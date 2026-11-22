#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortConversationContextCondition.h"
#include "FortConversationContextCondition_ParticipantControllerMeetsRequirement.generated.h"

class UFortControllerRequirement;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerRequirement* Requirement;
    
public:
    UFortConversationContextCondition_ParticipantControllerMeetsRequirement();

};

