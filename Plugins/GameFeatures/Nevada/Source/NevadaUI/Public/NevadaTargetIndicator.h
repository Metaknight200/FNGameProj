#pragma once
#include "CoreMinimal.h"
#include "FortActorIndicatorWidget.h"
#include "NevadaTargetIndicator.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UNevadaTargetIndicator : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
    UNevadaTargetIndicator();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamAttached(const bool bAttached);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTractorBeamActivated(const bool bActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetActorChanged(AActor* TargetedActor);
    
};

