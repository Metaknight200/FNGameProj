#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaQuickBarSlotExtensionWidgetBase.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UAthenaQuickBarSlotExtensionWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaQuickBarSlotExtensionWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChanged(const UFortItem* Item);
    
};

