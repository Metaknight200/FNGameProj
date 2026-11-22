#include "InfiltrationCarryObjectCapturePoint.h"
#include "Net/UnrealNetwork.h"

AInfiltrationCarryObjectCapturePoint::AInfiltrationCarryObjectCapturePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->UIShowDistance = 25000.00f;
    this->UIDetailDistance = 1000.00f;
    this->bCapturePointEnabled = false;
}

void AInfiltrationCarryObjectCapturePoint::StopUpdatingUIVisibility() {
}

void AInfiltrationCarryObjectCapturePoint::StartUpdatingUIVisibility() {
}


void AInfiltrationCarryObjectCapturePoint::OnRep_bCapturePointEnabled() {
}

void AInfiltrationCarryObjectCapturePoint::OnPawnEndOverlap(AFortPlayerPawn* TouchingPawn) {
}

void AInfiltrationCarryObjectCapturePoint::OnPawnBeginOverlap(AFortPlayerPawn* TouchingPawn) {
}



void AInfiltrationCarryObjectCapturePoint::MulticastIntelCaptured_Implementation() {
}

void AInfiltrationCarryObjectCapturePoint::IntelTagCallback(const FGameplayTag Tag, int32 NewCount) {
}

void AInfiltrationCarryObjectCapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfiltrationCarryObjectCapturePoint, bCapturePointEnabled);
}


