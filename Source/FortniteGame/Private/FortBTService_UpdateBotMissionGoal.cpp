#include "FortBTService_UpdateBotMissionGoal.h"

UFortBTService_UpdateBotMissionGoal::UFortBTService_UpdateBotMissionGoal() {
    this->NodeName = TEXT("Update Mission Goal");
    this->bRequireInteraction = false;
    this->bRequireInteractionOrLocator = false;
    this->bRequireEncounter = false;
    this->bPickClosest = true;
}


