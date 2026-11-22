#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortQuantitySelector.generated.h"

class UCommonButtonLegacy;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortQuantitySelector : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentQuantity;
    
public:
    UFortQuantitySelector();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuantitySelectorInitialized(UFortItem* InItem, const FText& TitleText, const FText& ConfirmButtonText, const FText& AdditionalInfoText, const int32 InitialQuantity, const int32 MaximumQuantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeQuantitySelector(UFortItem* InItem, const FText TitleText, const FText ConfirmButtonText, const FText AdditionalInfoText, const int32 InitialQuantity, const int32 MaximumQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItem() const;
    
};

