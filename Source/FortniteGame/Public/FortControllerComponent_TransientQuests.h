#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "EPlayerBountyThreatLevel.h"
#include "FortAbilitySystemComponentAbilityGivenListenerInterface.h"
#include "FortControllerComponent.h"
#include "UrgentQuestData.h"
#include "FortControllerComponent_TransientQuests.generated.h"

class AFortPlayerStateAthena;
class UFortQuestItemDefinition;
class UFortUrgentQuestItemDefinition;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_TransientQuests : public UFortControllerComponent, public IFortAbilitySystemComponentAbilityGivenListenerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentQuestTimeExpired, const FUrgentQuestData&, UrgentQuestData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUrgentQuestStarted, const FUrgentQuestData&, UrgentQuestData, float, EventTimeRemaining);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrgentQuestEnded, const FGameplayTag&, UrgentQuestTag);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerBountyThreatLevelUpdated, EPlayerBountyThreatLevel, PlayerBountyThreatLevel);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerBountyThreatLevelEnded);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUrgentQuestTimeExpired OnUrgentQuestTimeExpired;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* TrackedHunterBountyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrackedHunterBountyTargetDistance, meta=(AllowPrivateAccess=true))
    int32 TrackedHunterBountyTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TrackedHunterBountyTargetPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* TrackedProtectorBountyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* TrackedPrimaryHunter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> TrackedBountyHunters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUrgentQuestItemDefinition* ProtectorQuestToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUrgentQuestItemDefinition* TargetQuestToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUrgentQuestData> ActiveUrgentQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAbilitySpecHandle, UFortQuestItemDefinition*> AbilityHandleQuestDefinitions;
    
public:
    UFortControllerComponent_TransientQuests(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopPlayerBountyThreatLevelUpdates();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSharedQuest(const UFortQuestItemDefinition* QuestDefToRemove);
    
    UFUNCTION(BlueprintCallable)
    void PinSharedQuest(const UFortQuestItemDefinition* QuestDefToPin);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackedHunterBountyTargetDistance();
    
public:
    UFUNCTION(BlueprintCallable)
    void GrantTransientQuest(const UFortQuestItemDefinition* QuestDefToGrant, const UFortQuestItemDefinition* PreceedingQuestDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackedHunterBountyTargetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTrackedHunterBountyTargetDistance() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetBountyTargetNPCIcon(const TSoftObjectPtr<UTexture2D>& NPCIcon);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetBountyHunterNPCIcon(const TSoftObjectPtr<UTexture2D>& NPCIcon);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveTransientQuest(const UFortQuestItemDefinition* QuestItemDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveThreatLevelBind();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPinSharedQuest(const UFortQuestItemDefinition* QuestItemDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleSharedQuestUpdated(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef, const FName& BackendName, int32 StatValue, int32 Delta);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleSharedQuestRemoved(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleSharedQuestPinned(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHandleSharedQuestGranted(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef, const FString& Bucket, const TArray<FString>& Playlists);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGrantTransientQuest(const UFortQuestItemDefinition* QuestItemDef, const UFortQuestItemDefinition* PreceedingQuestDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnUrgentQuestStarted(const FUrgentQuestData& UrgentQuestData, float EventTimeRemaining);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnUrgentQuestEnded(const FGameplayTag& EventTag);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnPlayerBountyThreatLevelUpdated(EPlayerBountyThreatLevel NewPlayerBountyThreatLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void CleanupCompletedQuest(const UFortQuestItemDefinition* CompletedQuestDef);
    

    // Fix for true pure virtual functions not being implemented
};

