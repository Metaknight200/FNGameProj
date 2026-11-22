#pragma once
#include "CoreMinimal.h"
#include "MoleObjectiveCriteriaFloat.h"
#include "MoleTaskLogicObjective.h"
#include "MoleTaskLogicObjective_FixSabotage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMoleTaskLogicObjective_FixSabotage : public UMoleTaskLogicObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoleObjectiveCriteriaFloat NumOfPointsToFix;
    
public:
    UMoleTaskLogicObjective_FixSabotage();

};

