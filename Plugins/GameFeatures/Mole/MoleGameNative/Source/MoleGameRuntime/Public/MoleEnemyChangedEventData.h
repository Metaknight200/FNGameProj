#pragma once
#include "CoreMinimal.h"
#include "MoleEnemyChangedEventData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMoleEnemyChangedEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EnemyTargetActor;
    
    MOLEGAMERUNTIME_API FMoleEnemyChangedEventData();
};

