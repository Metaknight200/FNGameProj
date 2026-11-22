#include "FortWaterBodyIslandActor.h"
#include "GameFramework/Actor.h"

AFortWaterBodyIslandActor::AFortWaterBodyIslandActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpdateOverlapsMethodDuringLevelStreaming = EActorUpdateOverlapsMethod::NeverUpdate;
}


