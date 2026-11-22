#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortItemHeaderInformation.h"
#include "EItemContextAction.h"
#include "FortItemPreviewScreen.h"
#include "FortReceivedItemLootInfo.h"
#include "Templates/SubclassOf.h"
#include "FortItemPresentationScreen.generated.h"

class UAthenaBattlePassTracker;
class UAthenaExclusiveRewardBanner;
class UCommonBorder;
class UCommonButtonBase;
class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UCommonListView;
class UCommonRichTextBlock;
class UDynamicEntryBox;
class UFortGiftBoxItem;
class UFortItem;
class UFortItemInfoPresentationWidget;
class UFortItemPresentationEntry;
class UFortItemReceivedHeaderBase;
class UImage;
class UNamedSlot;
class UTextBlock;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemPresentationScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemPresentationEntry> ItemCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortReceivedItemLootInfo> ItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortReceivedItemLootInfo> PaidBattlePassItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* CurrentItemSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* EntryBoxButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> BackgroundMessageTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> GiftboxCustomLeftsideContentWidgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemsInView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotItemDisplayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MultipleItemPurchaseHeaderTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SingleItemPurchaseHeaderTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PurchaseHeaderBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingBattlePassItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HoldToCloseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_BattlePassRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_BattlePassCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ViewCrewLegacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ItemsCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemInfoPresentationWidget* ItemInfoPresentationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemReceivedHeaderBase* ItemHeaderWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBattlePassTracker* BattlePassTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_UnownedBaseItemMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_PaidItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_InputBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_LeftScrollArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_RightScrollArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaExclusiveRewardBanner* Banner_TokenDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* CustomContent;
    
public:
    UFortItemPresentationScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void SetGiftBoxItem(UFortGiftBoxItem* GiftBoxItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnedItemText(bool bShowText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateNextButtonText(bool bShowNext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemInformation(const UFortItem* FortItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateItemContextAction(const EItemContextAction ItemContextAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateHeaderInformation(const FFortItemHeaderInformation& HeaderInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchToPaidItems();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchLeftsideContent(bool bInDefaultContent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialIconAnimation(bool bUsingListView);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishDisplayingHotItems(bool bShowOtherRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayItemsCollectedText(bool bCloseScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayEquipButton(bool bCanEquip);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseScreenWithoutAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleHoldToClose(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleExitBattlePassPurchaseFlow();
    
    UFUNCTION(BlueprintCallable)
    void HandleBack();
    
    UFUNCTION(BlueprintCallable)
    void FinishSwitchingToPaidItems();
    
    UFUNCTION(BlueprintCallable)
    void EnableUserControlOnPaidItems();
    
    UFUNCTION(BlueprintCallable)
    void ClearItemPreview();
    
};

