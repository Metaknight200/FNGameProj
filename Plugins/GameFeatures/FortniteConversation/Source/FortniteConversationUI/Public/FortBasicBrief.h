#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortBasicBrief.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBasicBrief : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortBasicBrief();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChoiceTextReceived(const FText& Text);
    
};

