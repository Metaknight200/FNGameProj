#pragma once
#include "CoreMinimal.h"
#include "ModuleData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FModuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> DownloadedItems;
    
    HERMESPLAYSETSUI_API FModuleData();
};

