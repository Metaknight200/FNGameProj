#pragma once
#include "CoreMinimal.h"
#include "GameplayState.h"
#include "MoleGameplayState_Tasks.generated.h"

UCLASS(Blueprintable)
class UMoleGameplayState_Tasks : public UGameplayState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrepareStateDelayTime;
    
public:
    UMoleGameplayState_Tasks();

};

