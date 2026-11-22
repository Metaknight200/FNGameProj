#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "UrgentQuestData.h"
#include "FortTransientQuestGameplayAbility.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class UFortTransientQuestGameplayAbility : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestItemDefinition;
    
public:
    UFortTransientQuestGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void StopUrgentQuestEvent(const FUrgentQuestData& UrgentQuestData);
    
    UFUNCTION(BlueprintCallable)
    void StartUrgentQuestEvent(FUrgentQuestData UrgentQuestData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostAbilityInitialization();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FailQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CompleteQuest() const;
    
};

