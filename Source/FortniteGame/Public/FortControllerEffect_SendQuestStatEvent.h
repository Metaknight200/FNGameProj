#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "FortControllerEffect.h"
#include "FortControllerEffect_SendQuestStatEvent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortControllerEffect_SendQuestStatEvent : public UFortControllerEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuestObjectiveStatEvent StatEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalContextTags;
    
    UFortControllerEffect_SendQuestStatEvent();

};

