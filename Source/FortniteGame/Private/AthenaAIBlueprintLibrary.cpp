#include "AthenaAIBlueprintLibrary.h"

UAthenaAIBlueprintLibrary::UAthenaAIBlueprintLibrary() {
}

void UAthenaAIBlueprintLibrary::KillBots(UObject* WorldContextObject, const bool bKillPlayers, const bool bKillNoneParticipants, const uint8 TeamIndex, AActor* BotOwner) {
}

void UAthenaAIBlueprintLibrary::JoinTeam(UObject* WorldContextObject, const AController* SourceTeamController, AController* DestinationTeamController) {
}

bool UAthenaAIBlueprintLibrary::IsWeaponSupported(UObject* WorldContextObject, AFortWeapon* FortWeapon) {
    return false;
}

UAthenaAIServicePlayerBots* UAthenaAIBlueprintLibrary::GetAIServicePlayerBots(UObject* WorldContextObject) {
    return NULL;
}

UAthenaAIPopulationTracker* UAthenaAIBlueprintLibrary::GetAIPopulationTracker(UObject* WorldContextObject) {
    return NULL;
}


