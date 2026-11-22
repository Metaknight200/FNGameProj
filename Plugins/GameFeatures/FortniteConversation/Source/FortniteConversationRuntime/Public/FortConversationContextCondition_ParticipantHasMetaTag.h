#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortConversationContextCondition.h"
#include "FortConversationContextCondition_ParticipantHasMetaTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MetaTag;
    
public:
    UFortConversationContextCondition_ParticipantHasMetaTag();

};

