#include "FortAthenaAISpawnerDataComponent_AIBotConversation.h"

UFortAthenaAISpawnerDataComponent_AIBotConversation::UFortAthenaAISpawnerDataComponent_AIBotConversation() {
    this->ConversationComponentClass = NULL;
    this->CharacterData = NULL;
    this->ConversationInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    this->NPCLoopStateComponentClass = NULL;
    this->SpecialActorComponentClass = NULL;
}


