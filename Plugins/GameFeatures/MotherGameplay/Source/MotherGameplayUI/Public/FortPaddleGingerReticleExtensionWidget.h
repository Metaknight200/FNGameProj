#pragma once
#include "CoreMinimal.h"
#include "FortWeaponReticleExtensionWidgetBase.h"
#include "EventMessageTag.h"
#include "FortPaddleGingerReticleExtensionWidget.generated.h"

class UFortKeybindWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag PropIndexChangedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag PropActivatedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_ActivateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_CycleCategoryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* Keybind_CyclePropAction;
    
public:
    UFortPaddleGingerReticleExtensionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropIndexChanged(const FText& CategoryText, int32 PropIndex, int32 MaxPropCount, int32 CategoryIndex, int32 MaxCategoryCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropActivationChanged(const bool Activated);
    
};

