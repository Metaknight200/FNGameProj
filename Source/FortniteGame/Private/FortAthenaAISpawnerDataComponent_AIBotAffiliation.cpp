#include "FortAthenaAISpawnerDataComponent_AIBotAffiliation.h"

UFortAthenaAISpawnerDataComponent_AIBotAffiliation::UFortAthenaAISpawnerDataComponent_AIBotAffiliation() {
    this->bForceAddToCollectionOnDamage = false;
    this->bOverrideIsAnAthenaGameParticipant = false;
    this->bIsAnAthenaGameParticipant = false;
    this->NameSettingsAfterReveal = NULL;
    this->DisguiseConversationComponent = NULL;
}

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetSquadID_Implementation(int32& OutSquadId) {
    return false;
}


