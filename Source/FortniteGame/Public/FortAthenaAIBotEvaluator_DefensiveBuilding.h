#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_DefensiveBuilding.generated.h"

class UFortAthenaAIBotBuildingComponent;
class UFortAthenaAIBotBuildingDigestedSkillSet;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotBuildingDigestedSkillSet* CachedBuildingDigestedSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotBuildingComponent* CachedBuildingComponent;
    
public:
    UFortAthenaAIBotEvaluator_DefensiveBuilding();

};

