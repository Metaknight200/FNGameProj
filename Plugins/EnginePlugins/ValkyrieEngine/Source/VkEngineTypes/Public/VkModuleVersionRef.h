#pragma once
#include "CoreMinimal.h"
#include "VkModuleVersionRef.generated.h"

USTRUCT(BlueprintType)
struct FVkModuleVersionRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    VKENGINETYPES_API FVkModuleVersionRef();
};

