#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetBehaviorExtension.h"
#include "FortMobileActionButtonBehaviorExtension.generated.h"

class UFortMobileButtonBehaviorComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehaviorExtension : public UFortMobileHUDWidgetBehaviorExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileButtonBehaviorComponent*> ButtonBehaviorComponents;
    
    UFortMobileActionButtonBehaviorExtension();

};

