#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoleVotingIndicator.generated.h"

class APlayerState;

UCLASS(Abstract, Blueprintable)
class AMoleVotingIndicator : public AActor {
    GENERATED_BODY()
public:
    AMoleVotingIndicator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicatorRevealed(APlayerState* AccuserPlayerState);
    
};

