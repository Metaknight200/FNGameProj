#pragma once
#include "CoreMinimal.h"
#include "FortReplaySpectator.h"
#include "FortReplaySpectatorAthena.generated.h"

UCLASS(Blueprintable)
class AFortReplaySpectatorAthena : public AFortReplaySpectator {
    GENERATED_BODY()
public:
    AFortReplaySpectatorAthena(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateLiveStream(bool bEnable, float UpdateFrequency);
    
};

