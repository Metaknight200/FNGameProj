#include "GameplayMessageRouter.h"

UGameplayMessageRouter::UGameplayMessageRouter() {
    this->MessageReplicator = NULL;
}

void UGameplayMessageRouter::K2_BroadcastMessage(FEventMessageTag Channel, const int32& Message, bool bSaveToChannel, AActor* ActorContext) {
}

bool UGameplayMessageRouter::HasValidSavedMessage(FEventMessageTag Channel) const {
    return false;
}

void UGameplayMessageRouter::ClearSavedMessage(FEventMessageTag Channel) {
}


