#pragma once
#include "CoreMinimal.h"
#include "PhosphorusWidgetBase.h"
#include "PhosphorusSquadWipedWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPhosphorusSquadWipedWidget : public UPhosphorusWidgetBase {
    GENERATED_BODY()
public:
    UPhosphorusSquadWipedWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerSquadWiped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadWipedVisibilityChanged(bool bNewVisibility);
    
};

