#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "McpItemDefinitionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class MCPPROFILESYS_API UMcpItemDefinitionBase : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UMcpItemDefinitionBase();

};

