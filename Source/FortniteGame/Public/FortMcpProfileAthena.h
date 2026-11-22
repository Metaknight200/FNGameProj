#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "AthenaAccolades.h"
#include "AthenaMatchStats.h"
#include "AthenaSeasonItemMCPState.h"
#include "AthenaSeasonRewardLevelInfo.h"
#include "FortCreateItemDetail.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortMcpProfileSubgame.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortTransientQuestGrant.h"
#include "HardcoreModifierUpdate.h"
#include "SecondaryXpGained.h"
#include "FortMcpProfileAthena.generated.h"

class UAthenaSeasonItemDefinition;

UCLASS(Blueprintable, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileAthena : public UFortMcpProfileSubgame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientQuestLoginTimerNoise;
    
public:
    UFortMcpProfileAthena();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockRewardNode(const FString& NodeId, const FString& rewardGraphId, const FString& rewardCfg, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleQuestActiveState(const TArray<FString>& QuestIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRewardGraphConfig(const TArray<FString>& State, const FString& rewardGraphId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHardcoreModifier(const TArray<FHardcoreModifierUpdate>& Updates, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestRestedStateIncrease(int32 timeToCompensateFor, int32 restedXpGenAccumulated, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReportConsumableUsed(int32 UsedQuantity, const FString& ItemType, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPurchasedSeasonBook() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveEventFlagsChanged(const TArray<FString>& ActiveEventFlags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeasonRestedXpMult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeasonRestedXpExchange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonRestedXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonOverflowXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonMatchXpBoost() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSeasonLevelUpReward(int32 SeasonLevel, FFortItemInstanceQuantityPair& Reward, int32& RewardLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaSeasonRewardLevelInfo GetSeasonLevelInfo(const int32 SeasonLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonFriendMatchXpBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeasonBookLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaSeasonItemDefinition* GetActiveSeasonDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExchangeGiftToken(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExchangeGameCurrencyForBattlePassOffer(const TArray<FString>& OfferItemIdList, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndBattleRoyaleGameV2(const TArray<FFortQuestObjectiveCompletion>& Advance, const FString& PlaylistId, const FAthenaMatchStats& MatchStats, int32 TotalXPAccum, int32 RestedXPAccum, int32 FriendshipXpBoost, int32 CosmeticXpBoost, float AntiAddictionPlayTimeMultiplier, bool ShouldAccumulateToProfileStats, bool ShouldSaveToRecentGameLists, const TArray<FAthenaAccolades>& Accolades, const TArray<FString>& ShuffledLoadoutUsed, int32 ShuffledLockerUsedIndex, const TArray<FString>& DeletedQuestIds, const TArray<FString>& GrantedQuestDefs, const TArray<FSecondaryXpGained>& secondaryXp, const TArray<FFortCreateItemDetail>& GrantedItems, const TArray<FFortTransientQuestGrant>& GrantedTransientQuests, const FString& PinnedSharedQuest, const TArray<FAthenaSeasonItemMCPState>& SeasonItemStates, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChallengeBundleLevelUp(const FString& BundleIdToLevel, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPurchaseSeasonBook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyVote(const FString& OfferId, UPARAM(ref) FClientUrlContext& Context);
    
};

