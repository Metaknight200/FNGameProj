#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleLobbyState_Loading.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyState_Loading : public UGameplayState {
    GENERATED_BODY()
public:
    UMoleLobbyState_Loading();

};

