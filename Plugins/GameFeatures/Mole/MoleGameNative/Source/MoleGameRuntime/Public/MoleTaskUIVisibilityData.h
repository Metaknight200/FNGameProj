#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MoleTaskUIVisibilityData.generated.h"

USTRUCT(BlueprintType)
struct FMoleTaskUIVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VisibleTaskExceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    MOLEGAMERUNTIME_API FMoleTaskUIVisibilityData();
};

