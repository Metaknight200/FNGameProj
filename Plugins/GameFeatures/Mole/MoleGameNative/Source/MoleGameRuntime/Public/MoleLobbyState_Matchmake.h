#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleLobbyState_Matchmake.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyState_Matchmake : public UGameplayState {
    GENERATED_BODY()
public:
    UMoleLobbyState_Matchmake();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAcquiringMorePlayersCompleted();
    
};

