#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleLobbyState_Login.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleLobbyState_Login : public UGameplayState {
    GENERATED_BODY()
public:
    UMoleLobbyState_Login();

};

