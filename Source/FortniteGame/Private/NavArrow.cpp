#include "NavArrow.h"

ANavArrow::ANavArrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DestinationTrackerComponent = NULL;
}

void ANavArrow::ShowArrow_Implementation() {
}

void ANavArrow::OnDestinationChanged_Implementation() {
}

void ANavArrow::HideArrow_Implementation() {
}


