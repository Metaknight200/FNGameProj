#include "FortConversationContextLibrary.h"

UFortConversationContextLibrary::UFortConversationContextLibrary() {
}

AFortPlayerController* UFortConversationContextLibrary::GetParticipantPlayerController(const FConversationContext& Context) {
    return NULL;
}

UConversationParticipantComponent* UFortConversationContextLibrary::GetParticipantComponentPlayer(const FConversationContext& Context) {
    return NULL;
}

UConversationParticipantComponent* UFortConversationContextLibrary::GetParticipantComponentNPC(const FConversationContext& Context) {
    return NULL;
}

AActor* UFortConversationContextLibrary::GetParticipantActorPlayer(const FConversationContext& Context) {
    return NULL;
}

AActor* UFortConversationContextLibrary::GetParticipantActorNPC(const FConversationContext& Context) {
    return NULL;
}


