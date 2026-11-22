#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "EAthenaCustomizationCategory.h"
#include "FortAthenaLoadoutData.h"
#include "FortMcpProfile.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortSubgameClientSettings.h"
#include "McpVariantReader.h"
#include "FortMcpProfileSubgame.generated.h"

class UFortCosmeticLockerItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileSubgame : public UFortMcpProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCosmeticLockerItem*> LoadoutLockerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticLockerItem* LastAppliedLoadout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSubgameClientSettings CachedClientSettings;
    
public:
    UFortMcpProfileSubgame();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateQuests(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateQuestClientObjectives(const TArray<FFortQuestObjectiveCompletion>& Advance, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRandomCosmeticLoadoutFlag(bool Random, UPARAM(ref) FClientUrlContext& Context);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPinnedQuests(const TArray<FString>& PinnedQuestIds, UPARAM(ref) FClientUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemFavoriteStatusBatch(const TArray<FString>& ItemIds, const TArray<bool>& itemFavStatus, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemFavoriteStatus(const FString& TargetItemId, bool bFavorite, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCosmeticLockerSlots(const FString& LockerItem, const TArray<FFortAthenaLoadoutData>& LoadoutData, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCosmeticLockerSlot(const FString& LockerItem, EAthenaCustomizationCategory Category, const FString& ItemToSlot, int32 SlotIndex, const TArray<FMcpVariantReader>& VariantUpdates, int32 OptLockerUseCountOverride, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCosmeticLockerName(const FString& LockerItem, const FString& Name, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCosmeticLockerBanner(const FString& LockerItem, const FString& BannerIconTemplateName, const FString& BannerColorTemplateName, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerQuestLogin(const FString& MatchmakingSessionId, UPARAM(ref) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkNewQuestNotificationSent(const TArray<FString>& ItemIds, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FortRerollDailyQuest(const FString& QuestId, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteCosmeticLoadout(int32 Index, int32 FallbackLoadoutIndex, bool leaveNullSlot, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CopyCosmeticLoadout(int32 SourceIndex, int32 TargetIndex, const FString& OptNewNameForTarget, UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientQuestLogin(UPARAM(ref) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClaimQuestReward(const FString& QuestId, int32 SelectedRewardIndex, UPARAM(ref) FClientUrlContext& Context);
    
};

