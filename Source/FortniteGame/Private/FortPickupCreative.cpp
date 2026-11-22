#include "FortPickupCreative.h"
#include "Net/UnrealNetwork.h"

AFortPickupCreative::AFortPickupCreative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CostComponent = NULL;
    this->bPickupOnTouch = false;
    this->CachedPickupInstigatorHandle = -1;
    this->bUseOverrideDespawnTime = false;
    this->OverrideDespawnTime = 0.00f;
}

void AFortPickupCreative::SetItemResourceCost(const TEnumAsByte<EFortResourceType::Type> ResourceType, const int32 Cost) {
}

void AFortPickupCreative::OnRep_PickupInstigatorIndex() {
}

void AFortPickupCreative::OnPickupInstigatorDataRemoved(int32 TrackedIndex) {
}

void AFortPickupCreative::OnPickupInstigatorDataChanged(int32 TrackedIndex) {
}

void AFortPickupCreative::GivePickupToPawn(AFortPawn* Pawn, bool DestoryAfterPickup) {
}

float AFortPickupCreative::GetAccentColorParam() const {
    return 0.0f;
}

void AFortPickupCreative::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPickupCreative, CostComponent);
    DOREPLIFETIME(AFortPickupCreative, CachedPickupInstigatorHandle);
}


