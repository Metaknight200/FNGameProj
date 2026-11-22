#include "FortBluGloManager.h"

AFortBluGloManager::AFortBluGloManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->BluGloPerMinute = 1.00f;
}

UFortItemDefinition* AFortBluGloManager::GetBluGloItemDefinition() const {
    return NULL;
}


