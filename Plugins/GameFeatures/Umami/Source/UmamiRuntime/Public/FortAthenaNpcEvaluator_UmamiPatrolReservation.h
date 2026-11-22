#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "FortAthenaNpcEvaluator_UmamiPatrolReservation.generated.h"

class AFortAthenaPatrolPath;
class UFortAthenaNpcPatrollingComponent;

UCLASS(Blueprintable)
class UFortAthenaNpcEvaluator_UmamiPatrolReservation : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredGameplayTagOnPatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumDistanceFromPatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaNpcPatrollingComponent* CachedNpcPatrollingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaPatrolPath* ReservedPatrolPath;
    
public:
    UFortAthenaNpcEvaluator_UmamiPatrolReservation();

};

