#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EUIExtensionSlot.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortInitializationInterface.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESkyfirePhase.h"
#include "OnSkyfirePhaseChangedDelegate.h"
#include "SkyfireItemsAndAbilitySet.h"
#include "SkyfireLootRoomTeleportPointsData.h"
#include "SkyfireOnFirstSquadReachedMaxLootRarityDelegate.h"
#include "SkyfireOnOrbsSpawnedDelegate.h"
#include "SkyfireOnPlayerEnteredMainMapDelegate.h"
#include "SkyfirePlayerAnalyticData.h"
#include "SkyfireSquadDataEntry.h"
#include "SkyfireTeleportData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Skyfire.generated.h"

class AActor;
class ABuildingContainer;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class ASkyfireAudioManager;
class ASkyfireTeleportSquadPoint;
class UFortAbilitySet;
class UGameplayEffect;
class UObject;
class USkyfireBotPlayerPawnComponent;
class UUserWidget;

UCLASS(Blueprintable)
class SKYFIRERUNTIME_API AFortAthenaMutator_Skyfire : public AFortAthenaMutator_GameModeBase, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyfirePhaseChanged OnSkyfirePhaseChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbductionTeleportStartEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbductionTeleportCompleteEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BeingAbductedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbductionWarpTunnelStartEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbductionWarpTunnelEndEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MothershipWarpTunnelStartEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MothershipWarpTunnelEndEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> ItemsTypesToKeepOnAbduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkyfireWeaponHolsterId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnFirstSquadReachedMaxLootRarity OnFirstSquadReachedMaxLootRarity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnOrbsSpawned OnTimeOrbsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnOrbsSpawned OnSecurityOrbsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireOnPlayerEnteredMainMap OnPlayerEnteredMainMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TODOverrideActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> TimeOrbClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> BlockInventoryActionsGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShouldSkyfireSquadMemberUIBeEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuildingFoundationsToActivateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SecondsGrantedOnTimePickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InitialTimeBeforeLootRoomTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxTimeBeforeLootRoomTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat KnockedOutTeleportToLootRoomTimeReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat KnockedOutPrisonPenaltyWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShowWarpTunnelInsteadOfPenaltyPrison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity InitialLootRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MaxLootRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FGameplayTag> LootRoomTagByRarityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bStartExitLootRoomTimerAfterChestOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bStartExitLootRoomTimerAfterItemPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FScalableFloat> LootRoomPreCountdownTimeByRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FScalableFloat> LootRoomTimeByRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayspaceTeleportSquadPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrisonTeleportSquadPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PrisonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinPrisonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TimeToWaitBeforeStartingSkyfireWithJustBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireItemsAndAbilitySet PrisonAndPlayspaceItemsAndAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireItemsAndAbilitySet PrisonThroughLootRoomItemsAndAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> InPrisonAndPenaltyPrisonGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireItemsAndAbilitySet PlayspaceItemsAndAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireItemsAndAbilitySet LootRoomItemsAndAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExitSkydiveSafeZoneRadiusPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExitSkydiveSquadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExitSkydiveHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> BlockStormCenterActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BlockStormRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> TeleportAS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TeleportASRemovalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireTeleportData PrisonToPlayspaceTeleportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireTeleportData EnterLootRoomTeleportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireTeleportData ExitSkydiveTeleportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyfireTeleportData KnockedOutTeleportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestartSelectionWeightTimePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> SquadMemberStatusWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIExtensionSlot SquadMemberStatusWidgetExtensionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkyfireBotPlayerPawnComponent> SkyfireBotPlayerPawnComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkyfireAudioManager> SkyfireAudioManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearCachedIndicatorsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkyfireChestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShowLootRoomFlavorText_Perf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShowLootRoomFlavorText_Feel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FlavorTextCountdownThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSkyfireSquadDataEntry> SquadDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortRarity, FSkyfireLootRoomTeleportPointsData> LootRoomTeleportPointMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyfireTeleportSquadPoint*> AllPlayspaceTeleportSquadPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyfireTeleportSquadPoint*> AvailablePlacespaceTeleportSquadPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkyfireTeleportSquadPoint*> AvailablePrisonTeleportSquadPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, FSkyfirePlayerAnalyticData> PlayerAnalyticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPhase, meta=(AllowPrivateAccess=true))
    ESkyfirePhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> LoadedSkyfireAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayersReadyToTeleportFromFirstPrisonToPlayspace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlockStormCenter, meta=(AllowPrivateAccess=true))
    FVector CachedBlockStormCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyfireAudioManager* SkyfireAudioManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeOrbCount, meta=(AllowPrivateAccess=true))
    int32 TimeOrbCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SecurityOrbCount, meta=(AllowPrivateAccess=true))
    int32 SecurityOrbCount;
    
public:
    AFortAthenaMutator_Skyfire(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void StartSkyfireWithJustBotPlayers();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTimePickup(const AFortPlayerStateAthena* PlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeOrbCount(int32 TimeOrbCountPreReplication);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SecurityOrbCount(int32 SecurityOrbCountPreReplication);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BlockStormCenter();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTeleportToPrisonComplete_Internal(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLootedChest(AFortPlayerPawnAthena* PlayerPawn, ABuildingContainer* LootedContainer);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPlayerKnockedOutOfPlayspace(AFortPlayerStateAthena* PlayerState, AActor* HitOutOfBoundsVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnLootRarityPickup(const AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void ModifyTimeOrbCount(const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void ModifySecurityOrbCount(const int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBeingAbducted(const AFortPlayerStateAthena* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformanceFlavorTextEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsPawnLocalOrCurrentlyViewed(const AFortPlayerPawnAthena* InPawnToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeelingFlavorTextEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeOrbCount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FSkyfireSquadDataEntry GetSkyfireSquadDataEntry(const uint8 SquadId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESkyfirePhase GetSkyfirePhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    ASkyfireAudioManager* GetSkyfireAudioManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkydiveSpawnCircle(FVector& SkydiveSpawnCenter, float& SkydiveSpawnRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSecurityOrbCount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetPlayersInMothership(bool bIncludeLootRoom, bool bIncludeBots) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersInMothership(bool bIncludeLootRoom, bool bIncludeBots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialTimeBeforeLootRoomTeleport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetInitialLootRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlavorTextCountdownThreshold() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearCachedIndicators();
    
    UFUNCTION(BlueprintCallable)
    void ActivateBuildingFoundations() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

