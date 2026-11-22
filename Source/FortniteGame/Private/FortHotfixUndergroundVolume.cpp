#include "FortHotfixUndergroundVolume.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AFortHotfixUndergroundVolume::AFortHotfixUndergroundVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockBox0"));
    this->TriggerBoxComponent = (UBoxComponent*)RootComponent;
    this->bNeededOnClient = false;
}

void AFortHotfixUndergroundVolume::OnRep_ReplicatedExtent() {
}

void AFortHotfixUndergroundVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortHotfixUndergroundVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFortHotfixUndergroundVolume::CopyToClipboard() {
}

void AFortHotfixUndergroundVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHotfixUndergroundVolume, ReplicatedExtent);
}


