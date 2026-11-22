#pragma once
#include "CoreMinimal.h"
#include "VkNamedId.generated.h"

USTRUCT(BlueprintType)
struct FVkNamedId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    VKENGINETYPES_API FVkNamedId();
};

