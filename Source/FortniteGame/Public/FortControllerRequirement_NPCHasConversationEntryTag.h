#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_NPCHasConversationEntryTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortControllerRequirement_NPCHasConversationEntryTag : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QueryTag;
    
public:
    UFortControllerRequirement_NPCHasConversationEntryTag();

};

