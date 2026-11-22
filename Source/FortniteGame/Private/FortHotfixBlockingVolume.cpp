#include "FortHotfixBlockingVolume.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

AFortHotfixBlockingVolume::AFortHotfixBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BlockBox0"));
    this->BlockBoxComponent = (UBoxComponent*)RootComponent;
    this->bNeededOnClient = true;
}

void AFortHotfixBlockingVolume::OnRep_ReplicatedExtent() {
}

void AFortHotfixBlockingVolume::CopyToClipboard() {
}

void AFortHotfixBlockingVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortHotfixBlockingVolume, ReplicatedExtent);
}


