#pragma once
#include "CoreMinimal.h"
#include "ConfirmationDialogAction.h"
#include "FortDialogDescription_NUI.h"
#include "FortActivatablePanel.h"
#include "FortConfirmationButtonInfo.h"
#include "FortConfirmationWindow.generated.h"

class UCommonButtonLegacy;
class UCommonLoadGuard;
class UCommonTextBlock;
class UDynamicEntryBox;
class UImage;
class UPanelWidget;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortConfirmationWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SimpleButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ComplexChoiceButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_LeftOptionalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_OptionalWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextBlock_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* CommonTextBlock_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MainIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* CommonLoadGuard_LatentSpinner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortConfirmationButtonInfo> ConfirmationButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* DeclineButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDialogDescription_NUI ConfirmationDescription;
    
public:
    UFortConfirmationWindow();

private:
    UFUNCTION(BlueprintCallable)
    void HandleDeclineActionClicked(UCommonButtonLegacy* ButtonClicked);
    
    UFUNCTION(BlueprintCallable)
    void HandleCancelButtonClicked(UCommonButtonLegacy* Buttton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortDialogDescription_NUI GetConfirmationDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureDeclineButton(UCommonButtonLegacy* Button);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ConfigureConfirmationButton(UCommonButtonLegacy* Button, const FConfirmationDialogAction& Action, bool bSimpleConfirm);
    
    UFUNCTION(BlueprintCallable)
    void BotClickButton();
    
};

