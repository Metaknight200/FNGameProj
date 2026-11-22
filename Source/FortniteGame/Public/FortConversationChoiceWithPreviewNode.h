#pragma once
#include "CoreMinimal.h"
#include "ConversationChoiceNode.h"
#include "GameplayTagContainer.h"
#include "FortConversationChoiceWithPreviewNode.generated.h"

UCLASS(Blueprintable)
class UFortConversationChoiceWithPreviewNode : public UConversationChoiceNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPreviewOnlyIfChildTaskNodeValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OptionalChildChoiceTagFilter;
    
public:
    UFortConversationChoiceWithPreviewNode();

};

