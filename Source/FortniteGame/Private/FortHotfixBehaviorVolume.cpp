#include "FortHotfixBehaviorVolume.h"
#include "Components/BoxComponent.h"

AFortHotfixBehaviorVolume::AFortHotfixBehaviorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox0"));
    this->TriggerBoxComponent = (UBoxComponent*)RootComponent;
}

void AFortHotfixBehaviorVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortHotfixBehaviorVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortHotfixBehaviorVolume::CopyToClipboard() {
}


