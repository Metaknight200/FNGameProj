#include "FortSquadSelectorButton.h"

UFortSquadSelectorButton::UFortSquadSelectorButton() {
    this->SquadManagementScreenType = NULL;
}

bool UFortSquadSelectorButton::TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const {
    return false;
}

void UFortSquadSelectorButton::SetIdOfSquadToManageBP(const FName& SquadId) {
}



FName UFortSquadSelectorButton::GetIdOfSquadToManageBP() const {
    return NAME_None;
}


