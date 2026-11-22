#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "FortPlayerSurveyCMSCondition.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComparisonValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConditionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> ChildConditions;
    
    FORTNITEUI_API FFortPlayerSurveyCMSCondition();
};

