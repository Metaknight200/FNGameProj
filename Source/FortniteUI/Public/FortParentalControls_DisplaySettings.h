#pragma once
#include "CoreMinimal.h"
#include "FortParentalControls_SettingModifyingSubScreen.h"
#include "FortParentalControls_DisplaySettings.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;
class UFortSettingRegistry;
class UFortSettingsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_DisplaySettings : public UFortParentalControls_SettingModifyingSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SaveFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SaveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_MoreSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_DisableParentalControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsPanel* Panel_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSettingRegistry* Registry;
    
public:
    UFortParentalControls_DisplaySettings();

};

