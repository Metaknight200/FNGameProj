#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PurchasedItemInfo.h"
#include "GameplayTagContainer.h"
#include "FortHUDShutdownTimerInterface.h"
#include "Templates/SubclassOf.h"
#include "BattlePassPurchaseScreenBase.generated.h"

class UAthenaSeasonItemDefinition;
class UCommonButtonLegacy;
class UEnableMultiFactorModal;
class UFortGiftingScreen;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassPurchaseScreenBase : public UCommonActivatableWidget, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDoesOwnBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SpatialCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlePassSpatialRoomCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSeasonLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGiftingScreen> GiftingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> PurchaseCompleteModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* GiftBattlePassButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* MoreInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_DeclinePurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_CloseButtonMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Overlay_TierBundleDisclaimer;
    
public:
    UBattlePassPurchaseScreenBase();

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSelfFromWidgetStack(bool Succeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseClicked(bool bPlayForward, bool bBuyBattleBundle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalPurchaseConfirmed();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBattlePassPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    

    // Fix for true pure virtual functions not being implemented
};

