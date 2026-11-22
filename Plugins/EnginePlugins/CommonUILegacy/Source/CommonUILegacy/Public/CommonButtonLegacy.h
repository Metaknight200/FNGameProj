#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "Engine/DataTable.h"
#include "CommonButtonClickedDelegate.h"
#include "CommonSelectedStateChangedDelegate.h"
#include "CommonButtonLegacy.generated.h"

class UCommonActivatablePanelLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUILEGACY_API UCommonButtonLegacy : public UCommonButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSelectedStateChanged OnSelectedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonButtonClicked OnButtonUnhovered;
    
public:
    UCommonButtonLegacy();

    UFUNCTION(BlueprintCallable)
    void SetTriggeredInputActionLegacy(const FDataTableRowHandle& InputActionRow, UCommonActivatablePanelLegacy* OldPanel);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnSelectedChanged(UCommonButtonBase* Button, bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonUnhovered(UCommonButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonHovered(UCommonButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonDoubleClicked(UCommonButtonBase* Button);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnButtonClicked(UCommonButtonBase* Button);
    
};

