#include "FortControllerComponent_MarkActorsInRadius.h"

UFortControllerComponent_MarkActorsInRadius::UFortControllerComponent_MarkActorsInRadius(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarkedAIIndicatorImageType = EIndicatorStateImage::LAST_NPC_STATE;
}


