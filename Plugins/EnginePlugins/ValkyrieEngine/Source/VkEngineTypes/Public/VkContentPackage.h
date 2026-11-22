#pragma once
#include "CoreMinimal.h"
#include "VkModuleVersionWithArtifacts.h"
#include "VkContentPackage.generated.h"

USTRUCT(BlueprintType)
struct FVkContentPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ProjectFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVkModuleVersionWithArtifacts> Content;
    
    VKENGINETYPES_API FVkContentPackage();
};

