#pragma once
#include "CoreMinimal.h"
#include "FortParentalControlsSubScreen.h"
#include "FortParentalControls_SetupEmail.generated.h"

class UCommonButtonLegacy;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_SetupEmail : public UFortParentalControlsSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SetupEmail_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButtonLegacy* Button_SetupEmail;
    
public:
    UFortParentalControls_SetupEmail();

};

