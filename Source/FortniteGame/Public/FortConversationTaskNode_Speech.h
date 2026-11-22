#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "GameplayTagContainer.h"
#include "ContextualMessageConfig.h"
#include "ContextualMessageQueryResult.h"
#include "FortConversationTaskNode.h"
#include "FortConversationTaskNode_Speech.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_Speech : public UFortConversationTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePerNPC_ContextualMessageLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookupViaServiceProviderTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FContextualMessageConfig> SpeakerEntryTagToConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContextualMessageConfig GeneralConfig;
    
    UFortConversationTaskNode_Speech();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ResolveMessageForContext(const FGameplayTag& SpeakerParticipantTag, const FConversationContext& ConversationContext, FContextualMessageQueryResult& OutResult) const;
    
};

