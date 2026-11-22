#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "VkModuleVersionRef.h"
#include "VkCreateModuleVersionRequest.generated.h"

USTRUCT(BlueprintType)
struct FVkCreateModuleVersionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> RawFiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVkModuleVersionRef> Dependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Meta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheckSum;
    
    VKENGINETYPES_API FVkCreateModuleVersionRequest();
};

