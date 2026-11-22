#pragma once
#include "CoreMinimal.h"
#include "ELivingWorldCalendarEventConditionBehavior.h"
#include "ELivingWorldCalendarEventConditionRatioBehavior.h"
#include "LivingWorldCalendarEventCondition.generated.h"

USTRUCT(BlueprintType)
struct FLivingWorldCalendarEventCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELivingWorldCalendarEventConditionBehavior Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldEventBeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELivingWorldCalendarEventConditionRatioBehavior RatioBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioMaxValue;
    
    LAGERRUNTIME_API FLivingWorldCalendarEventCondition();
};

