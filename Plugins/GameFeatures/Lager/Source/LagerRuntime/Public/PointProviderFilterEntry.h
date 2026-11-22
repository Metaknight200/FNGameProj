#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "LivingWorldCalendarEventConditions.h"
#include "PointProviderFilterEntry.generated.h"

USTRUCT(BlueprintType)
struct FPointProviderFilterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ProviderFiltersTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLivingWorldCalendarEventConditions CalendarEventConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    LAGERRUNTIME_API FPointProviderFilterEntry();
};

