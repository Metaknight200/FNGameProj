#include "AthenaHoldingArea.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AAthenaHoldingArea::AAthenaHoldingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->MeshComp = (UStaticMeshComponent*)RootComponent;
    this->bHoldingAreaActive = false;
}

void AAthenaHoldingArea::OnRep_IgnoredPlayerPawns() {
}

void AAthenaHoldingArea::OnRep_bHoldingAreaActive() {
}

void AAthenaHoldingArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaHoldingArea, bHoldingAreaActive);
    DOREPLIFETIME(AAthenaHoldingArea, IgnoredPlayerPawns);
}


