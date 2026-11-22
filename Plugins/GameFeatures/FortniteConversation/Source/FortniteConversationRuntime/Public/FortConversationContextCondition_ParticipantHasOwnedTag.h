#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortConversationContextCondition.h"
#include "FortConversationContextCondition_ParticipantHasOwnedTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwnedTag;
    
public:
    UFortConversationContextCondition_ParticipantHasOwnedTag();

};

