#pragma once
#include "CoreMinimal.h"
#include "EFortCollectedState.h"
#include "FortHUDElementWidget.h"
#include "AthenaCollectionItemToast.generated.h"

class UButton;
class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionItemToast : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenCollectionScreenInputHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* LazyImage_ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_MobileClickCatcher;
    
public:
    UAthenaCollectionItemToast();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetToast();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMobileClick();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPCallableIsDesignTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToastUpdated(EFortCollectedState CollectedState, int32 NumCollected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToastReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisplayToast();
    
};

