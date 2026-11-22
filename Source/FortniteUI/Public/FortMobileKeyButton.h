#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDElement.h"
#include "FortMobileKeyButton.generated.h"

class UFortKeybindWidget;
class UFortMobileKeyButtonBehavior;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileKeyButton : public UFortMobileHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileKeyButtonBehavior* Behavior;
    
public:
    UFortMobileKeyButton();

};

