#pragma once
#include "CoreMinimal.h"
#include "MeshGamePluginEntry.generated.h"

USTRUCT(BlueprintType)
struct FMeshGamePluginEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PluginName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MapFilter;
    
    FORTNITEGAME_API FMeshGamePluginEntry();
};

