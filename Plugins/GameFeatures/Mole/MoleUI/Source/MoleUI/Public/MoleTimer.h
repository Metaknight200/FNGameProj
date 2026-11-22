#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoleTimer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMoleTimer : public UUserWidget {
    GENERATED_BODY()
public:
    UMoleTimer();

    UFUNCTION(BlueprintCallable)
    void StartTimer(float InServerFinishTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerUpdated(int32 TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerStarted(int32 TimeLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimerCleared();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTimer();
    
};

