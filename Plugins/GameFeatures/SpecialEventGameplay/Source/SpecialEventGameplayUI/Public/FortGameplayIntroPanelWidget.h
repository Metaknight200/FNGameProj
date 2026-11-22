#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanelLegacy.h"
#include "FortGameplayIntroPanelWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SPECIALEVENTGAMEPLAYUI_API UFortGameplayIntroPanelWidget : public UCommonActivatablePanelLegacy {
    GENERATED_BODY()
public:
    UFortGameplayIntroPanelWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForReadyForGameplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForPawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForMinTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartIntro();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished();
    
};

