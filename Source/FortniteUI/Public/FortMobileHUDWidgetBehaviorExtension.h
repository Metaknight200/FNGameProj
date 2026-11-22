#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortMobileHUDWidgetBehaviorExtension.generated.h"

class UFortMobileHudWidgetContentComponent;
class UHUDWidgetBehavior;

UCLASS(Abstract, Blueprintable)
class UFortMobileHUDWidgetBehaviorExtension : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHudWidgetContentComponent*> HUDWidgetContentComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHUDWidgetBehavior* OwnerWidgetBehavior;
    
public:
    UFortMobileHUDWidgetBehaviorExtension();

};

