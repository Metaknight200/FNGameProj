#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortConversationContextCondition.h"
#include "FortConversationContextCondition_ParticipantHasCID.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> AllowedCIDs;
    
public:
    UFortConversationContextCondition_ParticipantHasCID();

};

