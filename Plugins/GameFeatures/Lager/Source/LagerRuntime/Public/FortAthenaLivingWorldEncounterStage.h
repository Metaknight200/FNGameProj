#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaLivingWorldEncounterStage.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortAthenaLivingWorldEncounterStage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> EventTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumConcurrentNumberOfAI;
    
public:
    LAGERRUNTIME_API FFortAthenaLivingWorldEncounterStage();
};

