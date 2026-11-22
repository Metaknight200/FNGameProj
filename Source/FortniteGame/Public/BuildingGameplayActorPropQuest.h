#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActorQuest.h"
#include "BuildingGameplayActorPropQuest.generated.h"

class UConsolidatedQuestComponent;
class UFortQuestIconComponent;

UCLASS(Blueprintable)
class ABuildingGameplayActorPropQuest : public ABuildingGameplayActorQuest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableConversationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConversationEntryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UConsolidatedQuestComponent* ConsolidatedQuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestIconComponent* QuestIconComponent;
    
public:
    ABuildingGameplayActorPropQuest(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void QuestLog(const FString& StringToLog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetQuestTargetTags() const;
    
};

