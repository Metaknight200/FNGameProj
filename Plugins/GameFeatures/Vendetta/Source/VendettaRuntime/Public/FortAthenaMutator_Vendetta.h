#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AthenaGameMessageData.h"
#include "BountyQuestSettings.h"
#include "EAthenaGamePhase.h"
#include "EFortRarity.h"
#include "FortAthenaCompassIcon.h"
#include "FortAthenaMutator_Wax.h"
#include "RadiusTrackingInitializer.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "MasterHunterSpawnedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VendettaBountyPuckRarityChangedDelegate.h"
#include "VendettaBountyPuckRarityData.h"
#include "VendettaBountyPuckTargetData.h"
#include "VendettaBountyPuckTargetingDataArray.h"
#include "VendettaEQSQueryData.h"
#include "VendettaPlayerData.h"
#include "VendettaReplicatedUIMessage.h"
#include "FortAthenaMutator_Vendetta.generated.h"

class AFortAthenaMutator_EQSActorSpawner;
class AFortPlayerStateAthena;
class APawn;
class UBehaviorTree;
class UBountyPuckWeaponComponent;
class UEQSActorSpawner;
class UEnvQuery;
class UFortAthenaAISpawnerData;
class UFortBotNameSettings;
class UFortControllerComponent_MarkActorsInRadius;
class UFortUrgentQuestItemDefinition;
class UFortWorldItemDefinition;
class USoundBase;
class USoundCue;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Vendetta : public AFortAthenaMutator_Wax {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData VendettaMessageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterHunterHuntingMessageDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MyBountyKilledByMisadventureText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MyBountyKilledByMeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MyBountyKilledByAllyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MyBountyKilledByEnemyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FoundMyOwnBountyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AllyFoundMyBountyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText YouFoundAnAllyBountyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TargetIsNearText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MasterHunterHunterIsNearText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MasterHunterIsHuntingYouText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HunterIsNearText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MasterHunterHasSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MasterHunterHasBeenKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MasterHunterHasBeenKilledByLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoTargetsFoundInRangeMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FoundTargetsInRangeMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FoundTargetsInRangeButPuckNotEquippedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MasterHunterSpawnedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* TargetNearbySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* TargetKilledSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LocalPlayerKilledSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LocalPlayerKilledByMasterHunterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LocalPlayerRespawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocalActiveBountyPuckUITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalActiveBountyPuckTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalActiveBountyPuckDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon ActiveBountyCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusTrackingInitializer ActiveBountyPuckTargetMapTrackingDetails;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaBountyPuckRarityChanged OnBountyPuckRarityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMasterHunterSpawned OnMasterHunterSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUrgentQuestItemDefinition* ActiveBountyQuestToGrantDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUrgentQuestItemDefinition* MasterHunterTargetQuestToGrantDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortUrgentQuestItemDefinition* BountyTargetQuestToGrantDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBountyQuestSettings BountyQuestSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowWaxPickupSplit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HunterAIGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> CloserAISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> SniperAISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> TankAISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> MasterHunterAISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FScalableFloat> HunterAIGameplayTagToStartingTokenMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBotNameSettings* AIHunterNameSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HunterAIWeaponDroppedOnDeathTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* HunterAIBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StartingBountyPuckGiveGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* BountyPuckItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerComponent_MarkActorsInRadius> VendettaMarkAIComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BountyBonusGained_BaseBonusValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BountyBonusGained_TimeIntervalKeyedPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BountyBonusGained_BonusPerIntervalKeyedPerMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BountyBonusGained_BonusAccrualStopMinute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterEnterNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterExitNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UpdateIntervalHuntedStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UpdateIntervalBountyRewardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVendettaBountyPuckRarityData> BountyPuckRarityDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MasterHunterGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MasterHunterRespawnDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MasterHunterRetrySpawnDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MasterHunterSpawnScoreThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* MasterHunterSpawnLocationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData MasterHunterSpawnLocationQueryGridHalfSizeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData MasterHunterSpawnDistanceFromLeadingPlayerLocationMinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData MasterHunterSpawnDistanceFromLeadingPlayerLocationMaxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAITargetDistanceScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAIExistingTargetingBountyPuckScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAIPreferredTargetScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAITargetEloScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAITargetCreditValueScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAIRelativeELO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MasterHunterRelativeELO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxWaxPickupValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WaxPickupSpawnLocationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WaxPickupSpawnLocationQueryPerfAlternate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUsePerfAlternateWaxPickupSpawnLocationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaxPickupRetrySpawnDelayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData WaxPickupSpawnLocationQueryGridSpaceBetweenMultiplierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData WaxPickupSpawnLocationQueryGridHalfSizeMultiplierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData WaxPickupMaxDistFromSafeZoneIndicatorCenterMultiplierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData WaxPickupMinDistFromAllPlayersMultiplierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendettaEQSQueryData WaxPickupMinDistFromAllOtherWaxPickupsMultiplierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftTeleportEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CantinaHunterAIGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CantinaPOILocationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CantinaPOILocationOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bGiveCantinaHunterAIBountyPuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAICantinaPOIRadialInnerLeashRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAICantinaPOIRadialOuterLeashRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HunterAICantinaPOILeashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* HunterAICantinaBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShowDebugAITargetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MasterHunterPlayerState, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> MasterHunterPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedUIMessage, meta=(AllowPrivateAccess=true))
    FVendettaReplicatedUIMessage ReplicatedUIMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData LandedFromBusMessageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateMarkedTargetAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateThreeMarkedTargetAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateHunterAIAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateThreeHunterAIsAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateMasterHunterAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateYourHunterHunterAIAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FirstStormPhaseTargetEliminationAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MaxBountyBonusTargetEliminationAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateATopThreePlayerAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EliminateTopPlayerAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HunterAIAsTargetAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClearFriendlyBountyAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickUpHunterAIWeaponAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LeadingPlayerAtMasterHunterSpawnAccoladeTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_EQSActorSpawner* EQSActorSpawnerMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BountyPuckTargetingData, meta=(AllowPrivateAccess=true))
    FVendettaBountyPuckTargetingDataArray BountyPuckTargetingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FVendettaPlayerData> VendettaPlayerDataList;
    
public:
    AFortAthenaMutator_Vendetta(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterBountyPuckWeaponComponent(FGuid TrackerGuid, UBountyPuckWeaponComponent* BountyPuckWeaponComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShowUIMessageToAllClients(FText MessageText);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBountyPuckWeaponComponent(FGuid TrackerGuid, UBountyPuckWeaponComponent* BountyPuckWeaponComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedUIMessage();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MasterHunterPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BountyPuckTargetingData();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnMasterHunterDied(AFortPlayerStateAthena* MasterHuntersKiller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnHuntersSpawned(FName SpawnGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMasterHunterSpawned() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleHunterAISpawned(APawn* SpawnedAI, const UFortAthenaAISpawnerData* SpawnerData, const UEQSActorSpawner* EQSActorSpawner);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVendettaBountyPuckTargetData GetBountyPuckTargetDataCopyForGuid(const FGuid& BountyPuckTrackerGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetBountyPuckRarityForGuid(const FGuid& BountyPuckTrackerGuid) const;
    
};

