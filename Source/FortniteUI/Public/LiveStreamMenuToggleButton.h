#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "LiveStreamMenuToggleButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API ULiveStreamMenuToggleButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    ULiveStreamMenuToggleButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshButton(bool IsLiveStreamEnabled);
    
};

