#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleTaskDescription.generated.h"

USTRUCT(BlueprintType)
struct MOLEGAMERUNTIME_API FMoleTaskDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TaskDescription;
    
    FMoleTaskDescription();
};

