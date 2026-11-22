#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/EngineTypes.h"
#include "AthenaItemShopSectionInterface.h"
#include "AthenaItemShopCarousel.generated.h"

class UAthenaItemShopCarouselTile;
class UCommonButtonGroupLegacy;
class UCommonTextBlock;
class UDynamicEntryBox;
class UFortClickThroughButton;
class UFortSwipePanel;
class UImage;
class UOverlay;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaItemShopCarousel : public UCommonUserWidget, public IAthenaItemShopSectionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAthenaItemShopCarouselTile> CarouselTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Container_CurrentTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Container_NextTileToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortClickThroughButton* MobileClickThroughButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* HBox_NavigationButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NextItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PreviousItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AutoScrollProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Pips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_ItemsNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* ButtonGroup_Pips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaItemShopCarouselTile*> Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TileSeenTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SelectedItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemShopCarouselTile* NextTileToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemShopCarouselTile* CurrentTile;
    
public:
    UAthenaItemShopCarousel();

    UFUNCTION(BlueprintCallable)
    void SelectPrevItem();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextItem();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemAtIndex(int32 ItemIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionToPreviousTile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionToNextTile();
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionChanged(bool bInIsSelected);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntroAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex() const;
    

    // Fix for true pure virtual functions not being implemented
};

