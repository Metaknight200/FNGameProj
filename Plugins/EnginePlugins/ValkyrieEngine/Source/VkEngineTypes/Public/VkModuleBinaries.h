#pragma once
#include "CoreMinimal.h"
#include "VkModuleBinaries.generated.h"

USTRUCT(BlueprintType)
struct FVkModuleBinaries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString manifest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Files;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TotalSizeKb;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ManifestSizeKb;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ManifestDiskSizeKb;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ManifestDownloadSizeKb;
    
    VKENGINETYPES_API FVkModuleBinaries();
};

