#include "FortAthenaAIBotEmoteDigestedSkillSet.h"

UFortAthenaAIBotEmoteDigestedSkillSet::UFortAthenaAIBotEmoteDigestedSkillSet() {
    this->InfiniteEmoteMinDuration = 10.00f;
    this->InfiniteEmoteMaxDuration = 20.00f;
    this->EmotesMaxCount = 30;
    this->DanceOnKillMaxDistanceFromKillSqr = 16000000.00f;
    this->DanceOnKillMaxTimeFromKill = 8.00f;
    this->DanceOnKillMinTimeFromLastTry = 20.00f;
    this->DanceOnKillChanceToDanceOnBots = 0.15f;
    this->DanceOnKillChanceToDanceOnPlayers = 0.10f;
}


