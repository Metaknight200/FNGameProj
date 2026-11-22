#include "FortAthenaMutator_AutoPickup.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_AutoPickup::AFortAthenaMutator_AutoPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameState = true;
    this->AutoPickupDefaultItems = 255;
    this->AutoPickupAmmoItems = 255;
    this->AutoPickupConsumableItems = 255;
    this->AutoPickupGadgetItems = 255;
    this->AutoPickupTrapItems = 255;
    this->AutoPickupWeaponItems = 255;
    this->AutoPickupWorldResourceItems = 255;
}

void AFortAthenaMutator_AutoPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupDefaultItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupAmmoItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupConsumableItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupGadgetItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupTrapItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupWeaponItems);
    DOREPLIFETIME(AFortAthenaMutator_AutoPickup, AutoPickupWorldResourceItems);
}


