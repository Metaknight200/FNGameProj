#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeaturePluginStateMachineProperties.h"
#include "GameFeaturePluginStateMachine.generated.h"

UCLASS(Blueprintable)
class UGameFeaturePluginStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameFeaturePluginStateMachineProperties StateProperties;
    
public:
    UGameFeaturePluginStateMachine();

};

