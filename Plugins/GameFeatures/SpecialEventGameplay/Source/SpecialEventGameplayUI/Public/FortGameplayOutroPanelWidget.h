#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortGameplayOutroPanelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SPECIALEVENTGAMEPLAYUI_API UFortGameplayOutroPanelWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UFortGameplayOutroPanelWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOutro();
    
    UFUNCTION(BlueprintCallable)
    void OnOutroFinished();
    
};

