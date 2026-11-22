#pragma once
#include "CoreMinimal.h"
#include "VkResolvedModule.h"
#include "VkContentManifest.generated.h"

USTRUCT(BlueprintType)
struct FVkContentManifest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVkResolvedModule> Content;
    
    VKENGINETYPES_API FVkContentManifest();
};

