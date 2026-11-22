#pragma once
#include "CoreMinimal.h"
#include "GameplayStateMachine.h"
#include "MoleActiveTaskStateHandle.h"
#include "MoleTaskStateMachine.generated.h"

UCLASS(Blueprintable)
class UMoleTaskStateMachine : public UGameplayStateMachine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleActiveTaskStateHandle Handle;
    
public:
    UMoleTaskStateMachine();

};

