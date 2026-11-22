#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "UObject/NoExportTypes.h"
#include "AthenaSpatialCustomizationChoiceSelectButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationChoiceSelectButton : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
    UAthenaSpatialCustomizationChoiceSelectButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupChoiceSelectButton(const FLinearColor& CategoryStateColor);
    
};

