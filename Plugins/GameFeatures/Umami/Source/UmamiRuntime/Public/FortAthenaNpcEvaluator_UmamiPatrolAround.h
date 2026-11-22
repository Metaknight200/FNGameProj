#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaNpcEvaluator_UmamiPatrolAround.generated.h"

UCLASS(Blueprintable)
class UFortAthenaNpcEvaluator_UmamiPatrolAround : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PatrolDestinationName;
    
public:
    UFortAthenaNpcEvaluator_UmamiPatrolAround();

};

