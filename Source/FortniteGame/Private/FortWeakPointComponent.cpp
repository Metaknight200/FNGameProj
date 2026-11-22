#include "FortWeakPointComponent.h"

UFortWeakPointComponent::UFortWeakPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimarySurfaceType = SurfaceType_Default;
    this->bUseComplexForWeakSpots = false;
    this->bWeakPointsEnabled = true;
}

void UFortWeakPointComponent::SetWeakPointsEnabled(bool bEnabled) {
}

void UFortWeakPointComponent::NetMulticast_HandleOwnerDamaged_Implementation(FGameplayTag MatchingTag, const FGameplayEventData Payload) {
}


