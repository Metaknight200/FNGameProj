#include "FortPlayspaceReplicatedState.h"

AFortPlayspaceReplicatedState::AFortPlayspaceReplicatedState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CachedRepParamHelper = NULL;
}

bool AFortPlayspaceReplicatedState::IsLocalPlayerInOwningPlayspace(int32 PlayerIndex) const {
    return false;
}

UActorComponent_ReplicatedParamHelper* AFortPlayspaceReplicatedState::GetReplicatedParamHelper() const {
    return NULL;
}


