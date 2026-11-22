#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PurchasedItemInfo.h"
#include "PurchaseChoiceRequesterInterface.h"
#include "EGiftingPresentationMode.h"
#include "AthenaGiftingConfirmationScreen.generated.h"

class UAthenaGiftConfirmedPanel;
class UAthenaGiftingErrorsPanel;
class UAthenaGiftingPurchasePanel;
class UAthenaGiftingWrapOptionsPanel;
class UCommonButtonLegacy;
class UFortStoreFrontOfferInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget, public IPurchaseChoiceRequesterInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* PresentedGiftableOfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* PresentedOptionalTokenOfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGiftSubmissionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGiftSubmissionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_WrapOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MtxWallet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGiftingPurchasePanel* Panel_GiftingPurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGiftingWrapOptionsPanel* Panel_WrapOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGiftConfirmedPanel* Panel_GiftConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGiftingErrorsPanel* Panel_GiftingErrors;
    
public:
    UAthenaGiftingConfirmationScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPresentationModeChanged(EGiftingPresentationMode NewMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTokenOfferPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes);
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    

    // Fix for true pure virtual functions not being implemented
};

