#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScalableFloat.h"
#include "FortAthenaLivingWorldEncounterStage.h"
#include "FortAthenaLivingWorldEncounter.generated.h"

UCLASS(Blueprintable)
class UFortAthenaLivingWorldEncounter : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IntervalBetweenEventGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaLivingWorldEncounterStage> Stages;
    
public:
    UFortAthenaLivingWorldEncounter();

};

