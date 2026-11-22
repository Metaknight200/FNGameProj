#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "ESpectatorCameraType.h"
#include "FortReplayViewSettingsTabBase.generated.h"

class AFortPlayerControllerSpectating;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReplayViewSettingsTabBase : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UFortReplayViewSettingsTabBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetValues();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraTypeChanged(AFortPlayerControllerSpectating* FortPlayerControllerSpectating, ESpectatorCameraType CameraType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnTab();
    
};

