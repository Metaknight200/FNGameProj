#include "FortHotfixKillVolume.h"
#include "Components/BoxComponent.h"

AFortHotfixKillVolume::AFortHotfixKillVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("KillBox0"));
    this->KillBoxComponent = (UBoxComponent*)RootComponent;
}

void AFortHotfixKillVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortHotfixKillVolume::CopyToClipboard() {
}


