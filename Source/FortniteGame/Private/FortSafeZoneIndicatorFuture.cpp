#include "FortSafeZoneIndicatorFuture.h"
#include "Net/UnrealNetwork.h"

AFortSafeZoneIndicatorFuture::AFortSafeZoneIndicatorFuture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NextNextRadius = 0.00f;
}

void AFortSafeZoneIndicatorFuture::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSafeZoneIndicatorFuture, NextNextCenter);
    DOREPLIFETIME(AFortSafeZoneIndicatorFuture, NextNextRadius);
}


