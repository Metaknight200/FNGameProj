#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotSkillSet.h"
#include "ScalableFloat.h"
#include "FortAthenaUmamiFlyingDestroyBlockerSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaUmamiFlyingDestroyBlockerSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bCanDestroyOnlyBuildingActors;
    
public:
    UFortAthenaUmamiFlyingDestroyBlockerSkillSet();

};

