#pragma once
#include "CoreMinimal.h"
#include "LivingWorldCalendarEventCondition.h"
#include "LivingWorldCalendarEventConditions.generated.h"

USTRUCT(BlueprintType)
struct FLivingWorldCalendarEventConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLivingWorldCalendarEventCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveWithoutSeasonalManager;
    
    LAGERRUNTIME_API FLivingWorldCalendarEventConditions();
};

