#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "FortMobileHUDLayer.generated.h"

class UFortMobileHUDElement;

UCLASS(Blueprintable)
class UFortMobileHUDLayer : public UPanelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHUDElement*> ActiveHUDWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMobileHUDElement*> InactiveHUDWidgets;
    
public:
    UFortMobileHUDLayer();

};

