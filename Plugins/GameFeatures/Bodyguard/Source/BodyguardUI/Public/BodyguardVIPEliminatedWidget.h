#pragma once
#include "CoreMinimal.h"
#include "BodyguardWidgetBase.h"
#include "BodyguardVIPEliminatedWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBodyguardVIPEliminatedWidget : public UBodyguardWidgetBase {
    GENERATED_BODY()
public:
    UBodyguardVIPEliminatedWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLocalTeamEliminated_BP();
    
};

