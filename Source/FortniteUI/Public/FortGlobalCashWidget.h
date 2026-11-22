#pragma once
#include "CoreMinimal.h"
#include "FortResourceCountWidget.h"
#include "FortGlobalCashWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGlobalCashWidget : public UFortResourceCountWidget {
    GENERATED_BODY()
public:
    UFortGlobalCashWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryCompletedSuccessfully(int32 GlobalCashBalance);
    
};

