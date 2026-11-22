#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaRadioStation.h"
#include "RadioPlayerWidgetBase.generated.h"

class AFortPawn;
class UStreamingRadioPlayerComponent;

UCLASS(Blueprintable, EditInlineNew)
class URadioPlayerWidgetBase : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PriorityData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStreamingRadioPlayerComponent* LastValidComp;
    
public:
    URadioPlayerWidgetBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControllable(bool bCanControl);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSourcePlaying(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSourceFinished(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShouldShowDueToEntrance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadioStopped(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation LastSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingNewSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToOpenSource(UStreamingRadioPlayerComponent* Radio, FAthenaRadioStation Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectFromComp();
    
    UFUNCTION(BlueprintCallable)
    void OnControllerGainedNewFortPawn(AFortPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable)
    void NativeExitedVehicle();
    
    UFUNCTION(BlueprintCallable)
    void NativeEnteredVehicle();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

