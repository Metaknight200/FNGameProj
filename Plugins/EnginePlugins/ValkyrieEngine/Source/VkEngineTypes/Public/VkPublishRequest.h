#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "VkModuleVersionRef.h"
#include "VkPublishRequest.generated.h"

USTRUCT(BlueprintType)
struct FVkPublishRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVkModuleVersionRef Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Resolutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchmakingScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Meta;
    
    VKENGINETYPES_API FVkPublishRequest();
};

