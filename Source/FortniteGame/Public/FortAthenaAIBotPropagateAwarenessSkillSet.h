#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortAthenaAIBotSkillSet.h"
#include "FortAthenaAIBotPropagateAwarenessSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotPropagateAwarenessSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PropagationMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FOV;
    
public:
    UFortAthenaAIBotPropagateAwarenessSkillSet();

};

