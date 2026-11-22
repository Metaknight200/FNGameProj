#pragma once
#include "CoreMinimal.h"
#include "CommonInputActionDataProcessor.h"
#include "DataDrivenInputActionProcessor.generated.h"

UCLASS(Blueprintable, NonTransient)
class COMMONUI_API UDataDrivenInputActionProcessor : public UCommonInputActionDataProcessor {
    GENERATED_BODY()
public:
    UDataDrivenInputActionProcessor();

};

