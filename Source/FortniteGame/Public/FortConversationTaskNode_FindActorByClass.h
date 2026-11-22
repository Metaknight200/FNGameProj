#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FindActorByClassData.h"
#include "FortConversationTaskNode_Service.h"
#include "FortConversationTaskNode_FindActorByClass.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortConversationTaskNode_FindActorByClass : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFindActorByClassData> FilterDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnalyticsTag;
    
public:
    UFortConversationTaskNode_FindActorByClass();

};

