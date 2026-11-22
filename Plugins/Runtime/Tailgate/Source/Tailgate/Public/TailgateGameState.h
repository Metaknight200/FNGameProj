#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TailgateGameState.generated.h"

UCLASS(Blueprintable)
class TAILGATE_API ATailgateGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    ATailgateGameState(const FObjectInitializer& ObjectInitializer);

};

