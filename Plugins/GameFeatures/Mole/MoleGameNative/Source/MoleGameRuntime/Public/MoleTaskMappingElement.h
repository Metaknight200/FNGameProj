#pragma once
#include "CoreMinimal.h"
#include "MoleTaskDescription.h"
#include "MoleTaskMappingElement.generated.h"

USTRUCT(BlueprintType)
struct MOLEGAMERUNTIME_API FMoleTaskMappingElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskDataContentPackageGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskDescription> SupportedTaskDescriptions;
    
    FMoleTaskMappingElement();
};

