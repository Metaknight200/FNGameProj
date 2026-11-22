#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortRarityItemData.h"
#include "GameplayTagContainer.h"
#include "EBattlePassView.h"
#include "FortItemPreviewScreen.h"
#include "BattlePassScreenBase.generated.h"

class AFortItemPreviewWorld;
class UAthenaAboutModal;
class UAthenaCosmeticItemDefinition;
class UAthenaSeasonItemDefinition;
class UFortAccountItemDefinition;
class UFortItemDefinition;
class UFortSeasonLevelConfirmationScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UBattlePassScreenBase : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RefundGiftToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSeasonLevelConfirmationScreen> SeasonLevelPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaAboutModal> SeasonAboutScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WrapPreviewExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePassView CurrentView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortItemPreviewWorld* CachedVaultWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* CurrentDisplayedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* LastViewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CyclingCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CyclingItem;
    
public:
    UBattlePassScreenBase();

    UFUNCTION(BlueprintCallable)
    bool ShouldPlayBPVideo(bool bAllowUpdate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewReward(FFortRarityItemData Rarity, bool bNoReward, const UFortItemDefinition* RewardItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPurchasedAnnualPass(bool bIsPurchased);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDifferentBPText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestViewRewardComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestViewReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoCurrentSeason();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassViewChanged(EBattlePassView NewView);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfRewardsToPurchase() const;
    
};

