#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "HUDWidgetBehavior.h"
#include "FortMobileKeyButtonBehavior.generated.h"

class UFortMobileKeyButton;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortMobileKeyButtonBehavior : public UHUDWidgetBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortMobileKeyButton> Button;
    
public:
    UFortMobileKeyButtonBehavior();

};

