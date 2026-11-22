#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotPathFollowingComponent.h"
#include "FortAthenaUmamiFlyingPathFollowingComponent.generated.h"

class UFortAthenaUmamiFlyingVehicleDigestedSkillSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaUmamiFlyingPathFollowingComponent : public UFortAthenaAIBotPathFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaUmamiFlyingVehicleDigestedSkillSet* CachedFlyingVehicleDigestedSkillSet;
    
public:
    UFortAthenaUmamiFlyingPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

