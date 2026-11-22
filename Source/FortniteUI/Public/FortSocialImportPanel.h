#pragma once
#include "CoreMinimal.h"
#include "ESocialImportPanelPlatform.h"
#include "ESocialImportPanelType.h"
#include "FortActivatablePanel.h"
#include "SocialImportPanelClosedDelegateDelegate.h"
#include "FortSocialImportPanel.generated.h"

class UBorder;
class UCommonButtonLegacy;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UFortSocialImportPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialImportPanelClosedDelegate OnSocialImportPanelClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_AddFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Import;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Add;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_NotNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_OptOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_OuterBorder;
    
public:
    UFortSocialImportPanel();

    UFUNCTION(BlueprintCallable)
    void ShowPanel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingViewRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPanelTypeSet(ESocialImportPanelType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLauncherImportOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncentivizedSet(bool bIncentivized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImportViewRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClaimViewRequested();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSocialPlatform(ESocialImportPanelPlatform& OutPlatform) const;
    
};

