#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSCondition.h"
#include "FortPlayerSurveyCMSConditionGroup.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSConditionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConditionGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSCondition> Conditions;
    
    FORTNITEUI_API FFortPlayerSurveyCMSConditionGroup();
};

