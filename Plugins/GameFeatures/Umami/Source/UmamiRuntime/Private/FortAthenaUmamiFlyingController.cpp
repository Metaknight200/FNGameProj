#include "FortAthenaUmamiFlyingController.h"
#include "FortAthenaUmamiFlyingPathFollowingComponent.h"

AFortAthenaUmamiFlyingController::AFortAthenaUmamiFlyingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFortAthenaUmamiFlyingPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->CacheKidnapSkillSet = NULL;
}


