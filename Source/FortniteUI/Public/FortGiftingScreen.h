#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PurchasedItemInfo.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortItemPreviewScreen.h"
#include "GiftingErrorText.h"
#include "PurchaseChoiceRequesterInterface.h"
#include "FortGiftingScreen.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UCommonListView;
class UCommonTextBlock;
class UFortGiftRecipientsTab;
class UFortPersonalizeGiftTab;
class UFortStoreFrontOfferInfo;
class UFortUserDetails;
class UImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingScreen : public UFortItemPreviewScreen, public IFortHUDShutdownTimerInterface, public IPurchaseChoiceRequesterInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle GiftingPolicyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegularGiftingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BattlePassGiftingPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* RequiredOfferInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUserDetails*> UserDetailArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUserDetails* LocalPlayerDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGiftingErrorText> GiftingErrorMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGiftingErrorText GiftingErrorMessageDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortUserDetails*> SelectedUsers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_RecipientCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_GiftCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_GetVBucks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Send;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_TabRecipients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_ChosenRecipients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPersonalizeGiftTab* Activatable_PersonalizeTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGiftRecipientsTab* Activatable_RecipientsTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* VBox_Recipients;
    
public:
    UFortGiftingScreen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSendButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGetVBucksButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowContinueButton();
    
    UFUNCTION(BlueprintCallable)
    void SetOffer(UFortStoreFrontOfferInfo* NewOfferInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferSet(UFortStoreFrontOfferInfo* NewOfferInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnGiftingTimerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGiftingSubmission(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginGiftingSubmission();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRequiredMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGiftingPolicyClicked(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackActionClicked(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPersonalizeGiftTab* GetWrapGiftWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetSendButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetGetVBucksButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGiftRecipientsTab* GetFriendSelectWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetFriendSelectTabButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonButtonLegacy* GetContinueButton() const;
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveWrapGriftTab();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActiveFriendSelectTab();
    

    // Fix for true pure virtual functions not being implemented
};

