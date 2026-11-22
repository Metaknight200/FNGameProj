#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "EPhosphorusPhase.h"
#include "PhosphorusWidgetBase.h"
#include "PhosphorusEndOfRoundWidget.generated.h"

class AFortAthenaMutator_Phosphorus;

UCLASS(Blueprintable, EditInlineNew)
class UPhosphorusEndOfRoundWidget : public UPhosphorusWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostRoundFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRound;
    
public:
    UPhosphorusEndOfRoundWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnPhosphorusPhaseChanged(AFortAthenaMutator_Phosphorus* PhosphorusMutator, EPhosphorusPhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewRoundStarted();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutScreen();
    
};

