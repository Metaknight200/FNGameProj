#pragma once
#include "CoreMinimal.h"
#include "CommonButtonLegacy.h"
#include "FortAbilitiesPageTileBase.generated.h"

class UCommonWidgetSwitcherLegacy;
class UFortKeybindWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortAbilitiesPageTileBase : public UCommonButtonLegacy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcherLegacy* SwitcherAbilityBindingSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybindCombo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindAbilityKeybindCombo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuickBarSlot;
    
public:
    UFortAbilitiesPageTileBase();

    UFUNCTION(BlueprintCallable)
    void UpdateGamepadKeyBindingText();
    
};

