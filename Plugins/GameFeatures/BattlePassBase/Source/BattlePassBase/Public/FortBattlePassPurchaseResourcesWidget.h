#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PurchasedItemInfo.h"
#include "FortPrimaryContentInterface.h"
#include "FortBattlePassPurchaseResourcesWidget.generated.h"

class UCommonButtonBase;
class UFortBattlePassCheckBoxButton;
class UFortHoldableButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPASSBASE_API UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Addition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_BatchAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Subtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_BatchSubtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortHoldableButton* Button_Purchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_GetVBucks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBattlePassCheckBoxButton* CheckBox_Bundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOfferActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentVBucks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentBattleStars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BatchNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfferUnavailable;
    
public:
    UFortBattlePassPurchaseResourcesWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotalPriceChanged(const int32 NewPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseAmountChanged(const int32 NewAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOfferUnavailable();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseMultiComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const TArray<FString>& OfferIdList);
    
    UFUNCTION(BlueprintCallable)
    void HandlePurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    

    // Fix for true pure virtual functions not being implemented
};

