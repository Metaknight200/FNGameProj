#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleLobbyState_Waiting.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyState_Waiting : public UGameplayState {
    GENERATED_BODY()
public:
    UMoleLobbyState_Waiting();

};

