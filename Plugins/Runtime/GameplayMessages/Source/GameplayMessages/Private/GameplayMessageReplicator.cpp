#include "GameplayMessageReplicator.h"

AGameplayMessageReplicator::AGameplayMessageReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
}

void AGameplayMessageReplicator::Multicast_ServerMessageTriggered_Implementation(FEventMessageTag Channel, const FReplicatedMessage& MessageData) {
}


