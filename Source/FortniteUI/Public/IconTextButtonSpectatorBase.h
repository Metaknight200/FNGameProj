#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "IconTextButtonSpectatorBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UIconTextButtonSpectatorBase : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UIconTextButtonSpectatorBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FText& Text);
    
};

