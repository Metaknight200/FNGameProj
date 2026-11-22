#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotController.h"
#include "FortAthenaUmamiFlyingController.generated.h"

class UFortAthenaUmamiKidnapDigestedSkillSet;

UCLASS(Blueprintable)
class AFortAthenaUmamiFlyingController : public AFortAthenaAIBotController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaUmamiKidnapDigestedSkillSet* CacheKidnapSkillSet;
    
public:
    AFortAthenaUmamiFlyingController(const FObjectInitializer& ObjectInitializer);

};

