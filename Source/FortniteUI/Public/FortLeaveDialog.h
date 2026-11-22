#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortLeaveDialog.generated.h"

class UCommonButtonGroupLegacy;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeaveDialog : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDialogResponse);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogResponse OnLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDialogResponse OnCanceled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_PartyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupLegacy* PartyRadioButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_LeavePartyRadio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_StayWithPartyRadio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Leave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileClose;
    
public:
    UFortLeaveDialog();

    UFUNCTION(BlueprintCallable)
    void SetupLeaveDialog(const FText& InTitle, const FText& InDescription, bool bInShowPartyOptions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseDialog();
    
};

