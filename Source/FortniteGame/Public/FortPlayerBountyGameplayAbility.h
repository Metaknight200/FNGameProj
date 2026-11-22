#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTransientQuestGameplayAbility.h"
#include "UrgentQuestData.h"
#include "FortPlayerBountyGameplayAbility.generated.h"

class AFortPlayerStateAthena;
class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class UFortPlayerBountyGameplayAbility : public UFortTransientQuestGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> PoachedBountyQuestPtr;
    
public:
    UFortPlayerBountyGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void SpectatorShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData);
    
    UFUNCTION(BlueprintCallable)
    void SpectatorFailUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& FailedEventTag);
    
    UFUNCTION(BlueprintCallable)
    void SpectatorCompleteUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& CompletedEventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetTrackedProtectorBountyTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetTrackedPrimaryHunter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetTrackedHunterBountyTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetTrackedBountyHunters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPrimaryHunter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CleanupBountyTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CleanupBountyProtector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CleanupBountyHunter() const;
    
    UFUNCTION(BlueprintCallable)
    void BountyPoached();
    
};

