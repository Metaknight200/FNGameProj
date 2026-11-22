#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AIBotSkillset.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_UmamiSkillset.generated.h"

class UFortAthenaUmamiFlyingAttackSkillSet;
class UFortAthenaUmamiFlyingDestroyBlockerSkillSet;
class UFortAthenaUmamiFlyingVehicleSkillSet;
class UFortAthenaUmamiKidnapSkillSet;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_UmamiSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaUmamiFlyingVehicleSkillSet> UmamiFlyingVehicleSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaUmamiKidnapSkillSet> UmamiKidnapSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaUmamiFlyingAttackSkillSet> UmamiFlyingAttackSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaUmamiFlyingDestroyBlockerSkillSet> UmamiFlyingDestroyBlockerSkillSet;
    
public:
    UFortAthenaAISpawnerDataComponent_UmamiSkillset();

};

