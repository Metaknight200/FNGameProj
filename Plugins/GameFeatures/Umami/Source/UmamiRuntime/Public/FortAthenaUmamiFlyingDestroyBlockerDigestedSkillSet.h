#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanDestroyOnlyBuildingActors;
    
public:
    UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet();

};

