#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortAccountPinLinkingWindow.generated.h"

class UBackgroundBlur;
class UCircularThrobber;
class UCommonButtonLegacy;
class UCommonTextBlock;
class UCommonWidgetSwitcherLegacy;
class UHorizontalBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAccountPinLinkingWindow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFortNewPlatformReceipt);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* Blur_PinGrantCodeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* Blur_InitialRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* Blur_SkipSignIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* Switcher_NoThanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularThrobber* Throbber_LoginDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCircularThrobber* Throbber_GettingPinCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CreateEpicAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_GoLinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SkipLinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_GenerateCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_CancelPinRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SkipGoBackLinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SkipSignInNoThanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PinCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ErrorMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivationURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CodeExpiringTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PinPromptTypeTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Container_ActivationURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Container_CreateEpicAccount;
    
public:
    UFortAccountPinLinkingWindow();

    UFUNCTION(BlueprintCallable)
    void UpdateExpiringTime(int32 RemainingTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowCurrentPinInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetPinGrantInfo(const FString& PinCode, const FString& ActivationURL, const FText& InfoText);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialSection();
    
    UFUNCTION(BlueprintCallable)
    void PinCodeIssue(const FText& ErrorMessage, const FText& InfoText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSkipNoThanksClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSkipLinkingClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleLinkAccountClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleGoBackToInitialRequest();
    
    UFUNCTION(BlueprintCallable)
    void HandleGenerateCodeClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleCreateAccountClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleCancelPinRequestClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateHeadlessAccount();
    
};

