#pragma once
#include "CoreMinimal.h"
#include "EConsumerRole.h"
#include "VkContentFilter.h"
#include "VkArtifactOption.generated.h"

USTRUCT(BlueprintType)
struct FVkArtifactOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArtifactId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumerRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVkContentFilter Filter;
    
    VKENGINETYPES_API FVkArtifactOption();
};

