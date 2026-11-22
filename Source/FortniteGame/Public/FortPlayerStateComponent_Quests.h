#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPlayerStateComponent.h"
#include "UrgentQuestData.h"
#include "FortPlayerStateComponent_Quests.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayerStateComponent_Quests : public UFortPlayerStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpectatorUrgentQuest, const FUrgentQuestData&, UrgentQuestData, const float, EventTimeRemaining);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatorEndUrgentQuest, const FGameplayTag&, UrgentQuestEventTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpectatorClearUrgentQuests);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNoLongerTargetingBotUrgentQuest);
    
    UFortPlayerStateComponent_Quests(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void HandleNoLongerTargetingBotUrgentQuest();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorShowUrgentQuestEntry(const FUrgentQuestData& UrgentQuestData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorFailUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& FailedEventTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorCompleteUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& CompletedEventTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSpectatorClearUrgentQuestEntries();
    
};

