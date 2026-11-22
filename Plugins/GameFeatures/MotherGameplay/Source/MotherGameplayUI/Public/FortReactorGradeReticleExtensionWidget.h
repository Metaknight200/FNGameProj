#pragma once
#include "CoreMinimal.h"
#include "FortWeaponReticleExtensionWidgetBase.h"
#include "FortReactorGradeReticleExtensionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase {
    GENERATED_BODY()
public:
    UFortReactorGradeReticleExtensionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateChargeToMin(const float ChargePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateChargeToAutoDischarge(const float ChargePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinimumChargeReached();
    
};

