#include "FortInventory.h"
#include "Net/UnrealNetwork.h"

AFortInventory::AFortInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bAlwaysRelevant = true;
    this->bNetUseOwnerRelevancy = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->InventoryType = EFortInventoryType::World;
    this->ReplayPawn = NULL;
    this->bRequiresLocalUpdate = true;
    this->bRequiresSaving = true;
    this->bIsShuttingDown = false;
}

void AFortInventory::HandleInventoryLocalUpdate() {
}

void AFortInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInventory, InventoryType);
    DOREPLIFETIME(AFortInventory, Inventory);
    DOREPLIFETIME(AFortInventory, ReplayPawn);
}


