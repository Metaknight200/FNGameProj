#include "BulletWhipTrackerComponentBase.h"

UBulletWhipTrackerComponentBase::UBulletWhipTrackerComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableGravityCheck = false;
    this->FadeTimeOnProjectileStop = 0.05f;
    this->CachedPassByPawn = NULL;
}

void UBulletWhipTrackerComponentBase::UpdateVelocity(FVector CurrentVelocity) {
}

void UBulletWhipTrackerComponentBase::Reset(FVector StartLocationIn) {
}

void UBulletWhipTrackerComponentBase::Disable() {
}


