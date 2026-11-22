#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortWebLoginWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWebLoginWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UFortWebLoginWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayWidget(UWidget* WebWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DismissWidget();
    
};

