#pragma once
#include "CoreMinimal.h"
#include "MoleTaskDescription.h"
#include "MoleLevelTaskRequest.generated.h"

USTRUCT(BlueprintType)
struct MOLEGAMERUNTIME_API FMoleLevelTaskRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMoleTaskDescription> SupportedTaskDescriptions;
    
    FMoleLevelTaskRequest();
};

