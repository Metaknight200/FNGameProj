#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EConsumerRole.h"
#include "VkCreateModuleRequest.generated.h"

USTRUCT(BlueprintType)
struct FVkCreateModuleRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EConsumerRole, bool> Relevance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DesiredModuleId;
    
    VKENGINETYPES_API FVkCreateModuleRequest();
};

