#pragma once
#include "CoreMinimal.h"
#include "GameFeaturePluginStateMachineProperties.generated.h"

class UGameFeatureData;

USTRUCT(BlueprintType)
struct FGameFeaturePluginStateMachineProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameFeatureData* GameFeatureData;
    
    GAMEFEATURES_API FGameFeaturePluginStateMachineProperties();
};

