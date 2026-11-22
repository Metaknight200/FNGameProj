#pragma once
#include "CoreMinimal.h"
#include "AthenaEquippedItemBase.h"
#include "AthenaEquippedItemInfoWidget.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEquippedItemInfoWidget : public UAthenaEquippedItemBase {
    GENERATED_BODY()
public:
    UAthenaEquippedItemInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetAdded(UUserWidget* ExtensionWidget);
    
};

