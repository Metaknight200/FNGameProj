#pragma once
#include "CoreMinimal.h"
#include "VkModuleVersion.generated.h"

USTRUCT(BlueprintType)
struct FVkModuleVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    VKENGINETYPES_API FVkModuleVersion();
};

