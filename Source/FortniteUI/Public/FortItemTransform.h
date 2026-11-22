#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortItemTransform.generated.h"

class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemTransform : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UFortItemTransform();

private:
    UFUNCTION(BlueprintCallable)
    void ProcessPendingSeenTransformKeys();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestCloseItemPicker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogSelectedKey(const UFortItem* SelectedKey) const;
    
};

