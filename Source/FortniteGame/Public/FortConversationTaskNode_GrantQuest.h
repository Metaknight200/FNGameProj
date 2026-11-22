#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_GrantQuest.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_GrantQuest : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideSpeakerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDisplayQuestProviderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharedQuestLimitsEnforced;
    
public:
    UFortConversationTaskNode_GrantQuest();

};

