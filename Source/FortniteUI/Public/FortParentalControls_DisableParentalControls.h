#pragma once
#include "CoreMinimal.h"
#include "FortParentalControls_SettingModifyingSubScreen.h"
#include "FortParentalControls_DisableParentalControls.generated.h"

class UCommonButtonLegacy;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_DisableParentalControls : public UFortParentalControls_SettingModifyingSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_DisableParentalControlsConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_DisableParentalControlsCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisablingParentalControlsStatus;
    
public:
    UFortParentalControls_DisableParentalControls();

};

