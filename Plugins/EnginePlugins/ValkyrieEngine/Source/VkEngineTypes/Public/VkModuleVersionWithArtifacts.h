#pragma once
#include "CoreMinimal.h"
#include "VkArtifactOption.h"
#include "VkModuleVersion.h"
#include "VkModuleVersionWithArtifacts.generated.h"

USTRUCT(BlueprintType)
struct FVkModuleVersionWithArtifacts : public FVkModuleVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVkArtifactOption> Artifacts;
    
    VKENGINETYPES_API FVkModuleVersionWithArtifacts();
};

