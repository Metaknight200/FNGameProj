#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "GameFeaturesSubsystem.generated.h"

class UGameFeaturePluginStateMachine;
class UGameFeaturesProjectPolicies;
class UObject;

UCLASS(Blueprintable)
class GAMEFEATURES_API UGameFeaturesSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameFeaturesProjectPolicies* GameSpecificPolicies;
    
public:
    UGameFeaturesSubsystem();

};

