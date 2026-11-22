#pragma once
#include "CoreMinimal.h"
#include "FortBladeMenu.h"
#include "FortBladeMenu_MainMenu.generated.h"

class UCommonButtonBase;
class UCommonButtonLegacy;
class URestrictedCountryRatingIcons;
class UUserWidget;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBladeMenu_MainMenu : public UFortBladeMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_MainMenuButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_BackToHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_Subscription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MobileBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SubgameSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonBase* Button_Store;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URestrictedCountryRatingIcons* RatingIcons_RatingIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_ExtensionContainer;
    
public:
    UFortBladeMenu_MainMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void TryPushWidgetAsModalPanel(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void TryPushWidgetAsActivatablePanel(UUserWidget* InWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenSettings(FName TabNameID, const FString& SettingToSelect);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingFlowChanged(bool bFlowActive);
    
};

