#pragma once
#include "CoreMinimal.h"
#include "EUIExtensionSlot.h"
#include "FortQuickBarSlotBase.h"
#include "AthenaQuickBarSlot.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaQuickBarSlot : public UFortQuickBarSlotBase {
    GENERATED_BODY()
public:
    UAthenaQuickBarSlot();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetAdded(const EUIExtensionSlot ExtensionSlot, UUserWidget* ExtensionWidget);
    
};

