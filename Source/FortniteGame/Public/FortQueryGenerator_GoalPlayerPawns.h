#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_GoalPlayerPawns.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyAthenaGameParticipants;
    
public:
    UFortQueryGenerator_GoalPlayerPawns();

};

