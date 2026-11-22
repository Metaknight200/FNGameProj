#pragma once
#include "CoreMinimal.h"
#include "FortWeaponReticleExtensionWidgetBase.h"
#include "EventMessageTag.h"
#include "FortGravyGoblinReticleExtensionWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag ItemActivatableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventMessageTag ItemInactivatableTag;
    
public:
    UFortGravyGoblinReticleExtensionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemInactivatable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemActivatable();
    
};

