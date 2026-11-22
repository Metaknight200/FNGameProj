#pragma once
#include "CoreMinimal.h"
#include "VkModuleBinaries.h"
#include "VkResolvedModule.generated.h"

USTRUCT(BlueprintType)
struct FVkResolvedModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ModuleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVkModuleBinaries Binaries;
    
    VKENGINETYPES_API FVkResolvedModule();
};

