#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "VkNamedId.h"
#include "VkCreateProjectRequest.generated.h"

USTRUCT(BlueprintType)
struct FVkCreateProjectRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DesiredProjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OwnerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVkNamedId> Access;
    
    VKENGINETYPES_API FVkCreateProjectRequest();
};

