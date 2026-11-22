#include "FortPlayerStartCreative.h"
#include "FortCreativeVolumeLinkComponent.h"

AFortPlayerStartCreative::AFortPlayerStartCreative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PortalIndex = -1;
    this->ApplicableTeam = 1;
    this->ApplicableClass = -1;
    this->bUseAsIslandStart = false;
    this->PriorityGroup = 2147483647;
    this->bIsEnabled = true;
    this->CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
}

bool AFortPlayerStartCreative::IsClaimedByPlayer(FUniqueNetIdRepl UniqueId) const {
    return false;
}


