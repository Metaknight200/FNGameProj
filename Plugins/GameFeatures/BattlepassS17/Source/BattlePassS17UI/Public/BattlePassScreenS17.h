#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BattlePassScreenBase.h"
#include "EBattlePassCurrencyType.h"
#include "EBattlePassInputs.h"
#include "EBattlePassView.h"
#include "Templates/SubclassOf.h"
#include "BattlePassScreenS17.generated.h"

class UAthenaExclusiveRewardBanner;
class UAthenaRewardItemTypeRarityTag;
class UAthenaSeasonItemData_BattleStar;
class UAthenaSeasonItemEntryBase;
class UBattlePassInputData;
class UBorder;
class UCommonButtonBase;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortBattlePassCurrencyPanel;
class UFortBattlePassPurchaseResourcesWidget;
class UFortBattlePassTutorialTooltipS17;
class UFortHoldableButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassScreenS17 : public UBattlePassScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBattlePassPurchaseResourcesWidget> ResourcePurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_BulkBuyRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ToggleViewDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ToggleViewDetails_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ReplayTrailer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ReplayTrailer_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ShowAbout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ShowAbout_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_ShowAboutCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ShowAboutCustomization_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* MobileVisibilitySwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassCurrencyPanel* BattlePassCurrencyPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaRewardItemTypeRarityTag* ItemRewardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SetDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_ContextualButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_BuyLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_BuyBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_ClaimReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_RequiresBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_PageLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_BaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_Prerequisite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_NotEnough_Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Tag_Delayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemEntryBase* CurrentSelectedEntry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBattlePassView> SwitcherSubPageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* SubPageSwitcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleStarsTooltipHideLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_BattleStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassTutorialTooltipS17* TutorialTooltip_AlienArtifacts;
    
public:
    UBattlePassScreenS17();

    UFUNCTION(BlueprintCallable)
    void OverviewShowAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionItemDetails(const bool bTransitionForward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPrerequisiteInfo(const FText& Description, const int32 OwnedRewards, const int32 NeededRewards, const bool bShowPrerequisiteLock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetItemPrice(const int32 Cost, const EBattlePassCurrencyType CurrencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDynamicInput(const EBattlePassInputs InputType, const UBattlePassInputData* InputData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetClaimedRewardInfo(const int32 OwnedRewards, const int32 TotalRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelChanged(const int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDelayed(const FTimespan Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInsufficientFunds(const EBattlePassCurrencyType CurrencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassOwned();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleSwitcherVisibilityShown();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleClaimRewardComplete(const bool bSuccess, const TArray<FString>& OfferTemplateIdList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetQuestPageDelay() const;
    
};

