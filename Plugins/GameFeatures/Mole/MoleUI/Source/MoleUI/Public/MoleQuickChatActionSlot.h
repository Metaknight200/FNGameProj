#pragma once
#include "CoreMinimal.h"
#include "MoleQuickChatRadialSlot.h"
#include "MoleQuickChatActionSlot.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleQuickChatActionSlot : public UMoleQuickChatRadialSlot {
    GENERATED_BODY()
public:
    UMoleQuickChatActionSlot();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsAvailableChanged(const bool bIsAvailable);
    
};

