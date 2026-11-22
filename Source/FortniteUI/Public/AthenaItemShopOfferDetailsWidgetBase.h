#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "FortPublicAccountInfo.h"
#include "OnPurchaseOfferCompleteDelegate.h"
#include "PurchasedItemInfo.h"
#include "FortHUDShutdownTimerInterface.h"
#include "PurchaseChoiceRequesterInterface.h"
#include "Templates/SubclassOf.h"
#include "AthenaItemShopOfferDetailsWidgetBase.generated.h"

class UAthenaItemShopPurchaseOverlayModal;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortProgressModal;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UAthenaItemShopOfferDetailsWidgetBase : public UCommonActivatableWidget, public IFortHUDShutdownTimerInterface, public IPurchaseChoiceRequesterInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> PagedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CosmeticWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextUndoAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UndoBottomBarWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Undo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UndoAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediatelyPurchased;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaItemShopPurchaseOverlayModal> PurchaseModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortProgressModal> ProgressModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortProgressModal* ProgressModal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRefundWarningWhileMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRefundWarningWhileInZone;
    
public:
    UAthenaItemShopOfferDetailsWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowPurchasedOverlayWidget(int32 QuantityPurchased, const TArray<FPurchasedItemInfo> PurchasedItems, bool bShowAsRefund, const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void ShowItemPresentationScreen(const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowReloadVBucks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowDynamicReloadVBucks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHavePurchaseConfirmation() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetOffer(UFortStoreFrontOfferInfo* InOfferData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SendShopInteractionAnalytic(const FString& Interaction) const;
    
    UFUNCTION(BlueprintCallable)
    void SendRealMoneyPurchase(int32 PriceIndex, int32 Quantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshUndoState(UFortStoreFrontOfferInfo* OfferPurchased);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshOfferInfo();
    
    UFUNCTION(BlueprintCallable)
    void PurchaseOffer(const FOnPurchaseOfferComplete& Callback, int32 Quantity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseAmountRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PurchaseAmountLeft();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUndoAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchasingStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleUndoAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRealMoneyPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftingItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfoById(const FString& OfferId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortStoreFrontOfferInfo* GetOfferInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSetOffer();
    

    // Fix for true pure virtual functions not being implemented
};

