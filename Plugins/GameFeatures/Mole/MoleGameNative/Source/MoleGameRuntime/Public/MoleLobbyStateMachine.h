#pragma once
#include "CoreMinimal.h"
#include "GameplayStateMachine.h"
#include "MoleLobbyStateMachine.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyStateMachine : public UGameplayStateMachine {
    GENERATED_BODY()
public:
    UMoleLobbyStateMachine();

};

