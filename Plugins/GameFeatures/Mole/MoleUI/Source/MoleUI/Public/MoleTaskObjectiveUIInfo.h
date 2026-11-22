#pragma once
#include "CoreMinimal.h"
#include "MoleTaskObjectiveUIInfo.generated.h"

USTRUCT(BlueprintType)
struct FMoleTaskObjectiveUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    MOLEUI_API FMoleTaskObjectiveUIInfo();
};

