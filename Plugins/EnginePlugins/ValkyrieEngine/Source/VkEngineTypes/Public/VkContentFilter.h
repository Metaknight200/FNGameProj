#pragma once
#include "CoreMinimal.h"
#include "VkContentFilter.generated.h"

USTRUCT(BlueprintType)
struct FVkContentFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    VKENGINETYPES_API FVkContentFilter();
};

