#pragma once
#include "CoreMinimal.h"
#include "VkBuildVersion.generated.h"

USTRUCT(BlueprintType)
struct FVkBuildVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Patch;
    
    VKENGINETYPES_API FVkBuildVersion();
};

