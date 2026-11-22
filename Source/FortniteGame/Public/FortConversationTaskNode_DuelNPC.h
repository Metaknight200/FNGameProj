#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_DuelNPC.generated.h"

class UGameplayAbility;

UCLASS(Abstract, Blueprintable)
class UFortConversationTaskNode_DuelNPC : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAbility> DuelObserverAbility;
    
public:
    UFortConversationTaskNode_DuelNPC();

};

