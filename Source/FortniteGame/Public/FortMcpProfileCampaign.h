#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "AccountIdAndMatchEndData.h"
#include "AccountIdAndScore.h"
#include "ECampaignCustomizationCategory.h"
#include "EndZoneScoreAndAwards.h"
#include "FortMcpProfileSubgame.h"
#include "FortPersistentGameplayStatValue.h"
#include "FortQuestEarnedBadgeData.h"
#include "FortQuestObjectiveCompletion.h"
#include "McpVariantReader.h"
#include "FortMcpProfileCampaign.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortMcpProfileCampaign;

UCLASS(Blueprintable, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileCampaign : public UFortMcpProfileSubgame {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDifferentHeroLoadoutActivated, UFortMcpProfileCampaign*, Profile);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDifferentHeroLoadoutActivated OnDifferentHeroLoadoutActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHeroLoadoutMocking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeroLoadoutCommandDelaySeconds;
    
public:
    UFortMcpProfileCampaign();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeItemRarity(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeItemBulk(const FString& TargetItemId, int32 DesiredLevel, const FString& DesiredTier, int32 ConversionRecipeIndexChoice, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeItem(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpgradeAlteration(const FString& TargetItemId, int32 AlterationSlot, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBuildingLevelAndRating(const FString& BuildingId, int32 LastBuildingLevel, int32 LastBuildingRating, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnslotItemFromCollectionBook(const FString& ItemId, const FString& Specific, const FString& TemplateId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnslotAllWorkers(const TArray<FString>& BuildingIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnloadWarehouse(const TArray<FString>& ResourceTypes, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnassignAllSquads(const TArray<FString>& SquadIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransmogItem(const FString& TransmogKeyTemplateId, const TArray<FString>& SacrificeItemIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPrimaryMission(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartExpedition(const FString& ExpeditionId, const FString& SquadId, const TArray<FString>& ItemIds, const TArray<int32>& SlotIndices, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SlotItemInCollectionBook(const FString& ItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SkipTutorial(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLoadoutName(const FString& LoadoutName, const FString& LoadoutId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeroCosmeticVariants(const FString& HeroItem, const TArray<FMcpVariantReader>& OutfitVariants, const TArray<FMcpVariantReader>& BackblingVariants, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGameplayStats(const TArray<FFortPersistentGameplayStatValue>& GameplayStats, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActiveHeroLoadout(const FString& SelectedLoadout, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespecUpgrades(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespecResearch(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RespecAlteration(const FString& TargetItemId, int32 AlterationSlot, const FString& AlterationId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResearchItemFromCollectionBook(const FString& TemplateId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefundItem(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshExpeditions(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RecycleItemBatch(const TArray<FString>& TargetItemIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RecycleItem(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseResearchStatUpgrade(const FString& StatId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PurchaseOrUpgradeHomebaseNode(const FString& NodeId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PromoteItem(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PopulatePrerolledOffers(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverrideMissionRewardLootTierGroup(const FString& MatchmakingSessionId, const FString& OverrideRewardTag, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverrideMissionRewardLootLevel(const FString& MatchmakingSessionId, int32 OverrideLootLevel, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCardPackBatch(const TArray<FString>& CardPackItemIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenCardPack(const FString& CardPackItemId, int32 SelectionIdx, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyMission(const FString& MatchmakingSessionId, const FString& Difficulty, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortCampaignHeroLoadoutItem*> GetOrderedHeroLoadoutItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentHeroLoadoutItem(UFortCampaignHeroLoadoutItem*& OutCampaignHeroLoadoutItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FailsafeSaveMissionResults(const FEndZoneScoreAndAwards& PlayerScoreData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EquipCampaignCustomization(ECampaignCustomizationCategory SlotName, const FString& ItemToSlot, int32 IndexWithinSlot, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndPrimaryMission(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, const TArray<FFortQuestEarnedBadgeData>& EarnedBadgeData, const TArray<FString>& EarnedItemCaches, int32 DifficultyIncreaseTier, int32 NumMissionPoints, bool bCriticalMatchBonus, const TArray<FString>& ShuffledLoadoutUsed, int32 ShuffledLockerUsedIndex, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndMatch(const TArray<FAccountIdAndMatchEndData>& PlayersAndMatchEndData, const FString& MatchmakingSessionId, const FString& MissionName, const FString& MissionStatus, int32 DifficultyIncreaseTier, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EarnScore(const TArray<FAccountIdAndScore>& PlayersAndScores, const FString& MatchmakingSessionId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConvertLegacyAlterations(const FString& TargetItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConvertItem(const FString& TargetItemId, int32 ConversionIndex, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConsumeItems(const TArray<FString>& ItemsToConsumeIds, const TArray<int32>& ItemCountsToConsume, const FString& ConsumeReason, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CollectExpedition(const FString& ExpeditionTemplate, const FString& ExpeditionId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearHeroLoadout(const FString& LoadoutId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimMissionAlertRewards(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimLoginReward(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimDifficultyIncreaseRewards(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimCollectionBookRewards(int32 RequiredXp, int32 SelectedRewardIndex, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimCollectedResources(const TArray<FString>& CollectorsToClaim, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssignWorkerToSquadBatch(const TArray<FString>& CharacterIds, const TArray<FString>& SquadIds, const TArray<int32>& SlotIndices, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssignWorkerToSquad(const FString& CharacterId, const FString& SquadId, int32 SlotIndex, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssignTeamPerkToLoadout(const FString& TeamPerkId, const FString& LoadoutId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssignHeroToLoadout(const FString& HeroId, const FString& LoadoutId, const FString& SlotName, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AssignGadgetToLoadout(const FString& GadgetId, const FString& LoadoutId, int32 SlotIndex, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyAlteration(const FString& TargetItemId, const FString& AlterationItemId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateConsumable(const FString& TargetItemId, const FString& TargetAccountId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbandonExpedition(const FString& ExpeditionId, UPARAM(ref) FClientUrlContext& Context);
    
};

