#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "PurchasedItemInfo.h"
#include "Layout/Margin.h"
#include "EItemShopNavigationAction.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopScreen.generated.h"

class ADynamicBackgroundDirector;
class UAthenaItemShopOfferDetailsPreviewWidget;
class UAthenaItemShopRealMoneyOfferDetails;
class UAthenaItemShopSectionNavigator;
class UAthenaScrollBox;
class UCommonButtonBase;
class UCommonButtonGroupLegacy;
class UDynamicEntryBox;
class UFortActivatableMovieWidget;
class UFortAffilateModal;
class UFortMtxStoreSelectionPopup;
class UFortSwipePanel;
class UFortTextButton;
class UImage;
class UInvalidationBox;
class UOverlay;
class UVerticalBox;
class UWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopScreen : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowAvailableMTXBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SectionsPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrevCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaItemShopOfferDetailsPreviewWidget> ItemShopOfferDetailsScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaItemShopRealMoneyOfferDetails> ItemShopRMTOfferInspectScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAffilateModal> AffiliateModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMtxStoreSelectionPopup> StoreSelectionPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAffilateModal* AffiliateModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMtxStoreSelectionPopup* StoreSelectionPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastPlayedIntroAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_NavigationControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaScrollBox* ScrollBox_Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInvalidationBox* InvalidationBox_ItemShop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_AvailableAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaItemShopSectionNavigator* Navigator_ShopSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_SectionsNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SectionsPips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTextButton* Button_SupportACreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_ScrollToTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_InGameScrollToTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_BackToGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DefaultBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableMovieWidget> SpecialOfferVideoPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup_SectionsPips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADynamicBackgroundDirector> ItemShopBackgroundDirector;
    
public:
    UAthenaItemShopScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayIntroAnimation(UWidgetAnimation* IntroAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialOfferVideoStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialOfferVideoSkipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpecialOfferVideoFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSectionsEstablished(bool bEmpty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEstablishingSections();
    
public:
    UFUNCTION(BlueprintCallable)
    void NavigateToOffer(const FString& OfferId, EItemShopNavigationAction NavigationAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleUserMouseUp(float ScrollAmount);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseOfferComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableShopNavigation(bool bIsNavigationEnabled);
    

    // Fix for true pure virtual functions not being implemented
};

