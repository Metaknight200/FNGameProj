#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleState_Setup.generated.h"

UCLASS(Abstract, Blueprintable)
class UMoleState_Setup : public UGameplayState {
    GENERATED_BODY()
public:
    UMoleState_Setup();

};

