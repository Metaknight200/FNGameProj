#pragma once
#include "CoreMinimal.h"
#include "VkPersistenceVersion.generated.h"

USTRUCT(BlueprintType)
struct FVkPersistenceVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    VKPERSISTENCE_API FVkPersistenceVersion();
};

