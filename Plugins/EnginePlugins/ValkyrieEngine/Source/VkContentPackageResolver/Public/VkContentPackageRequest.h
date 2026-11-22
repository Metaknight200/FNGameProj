#pragma once
#include "CoreMinimal.h"
#include "VkModuleVersionRef.h"
#include "VkContentPackageRequest.generated.h"

USTRUCT(BlueprintType)
struct VKCONTENTPACKAGERESOLVER_API FVkContentPackageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVkModuleVersionRef Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> Resolutions;
    
    FVkContentPackageRequest();
};

