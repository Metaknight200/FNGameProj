#include "AthenaCreativeRift.h"

AAthenaCreativeRift::AAthenaCreativeRift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DespawnSphereComponent = NULL;
    this->ParentTrap = NULL;
    this->bHasLoadedSettings = false;
}

void AAthenaCreativeRift::NotifyActorDespawnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}



