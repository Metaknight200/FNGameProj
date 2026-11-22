#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortConversationTaskNode_GrantStaticQuest.h"
#include "FortConversationTaskNode_GrantPlayerBounty.generated.h"

class UFortQuestItemDefinition;

UCLASS(Abstract, Blueprintable)
class UFortConversationTaskNode_GrantPlayerBounty : public UFortConversationTaskNode_GrantStaticQuest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> TargetQuestToGrantPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfPlayersToSelectFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MediumThreatRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighThreatRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThreatRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AllowPoaching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> ProtectorQuestToGrantPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> PoachedQuestToGrantPtr;
    
public:
    UFortConversationTaskNode_GrantPlayerBounty();

};

