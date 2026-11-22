#pragma once
#include "CoreMinimal.h"
#include "EGameFeatureTargetState.h"
#include "VkResolvedModule.h"
#include "ReplicatedVkResolvedModule.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedVkResolvedModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVkResolvedModule ResolvedModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeInstalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameFeatureTargetState TargetInstalledState;
    
    FORTNITEGAME_API FReplicatedVkResolvedModule();
};

