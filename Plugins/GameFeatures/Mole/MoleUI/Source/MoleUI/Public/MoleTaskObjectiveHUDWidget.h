#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleTaskObjectiveUIInfo.h"
#include "MoleTaskObjectiveHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleTaskObjectiveHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMoleTaskObjectiveHUDWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRepresentedObjectiveTargetValueChanged(float NewTargetValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRepresentedObjectiveCurrentValueChanged(float NewCurrentValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRepresentedObjectiveChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FMoleTaskObjectiveUIInfo GetTaskObjectiveInfo() const;
    
};

