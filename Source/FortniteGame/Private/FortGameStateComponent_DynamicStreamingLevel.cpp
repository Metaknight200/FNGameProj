#include "FortGameStateComponent_DynamicStreamingLevel.h"

UFortGameStateComponent_DynamicStreamingLevel::UFortGameStateComponent_DynamicStreamingLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableDynamicStreamingLevels = false;
    this->bAlwaysLoadDynamicAsyncStreamingLevels = false;
}


