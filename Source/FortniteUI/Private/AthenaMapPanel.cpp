#include "AthenaMapPanel.h"

UAthenaMapPanel::UAthenaMapPanel() {
    this->GamePanel = NULL;
    this->MapLayerContainer = NULL;
    this->SizeBoxChallenge = NULL;
    this->Athena_MapInfo = NULL;
}


void UAthenaMapPanel::ChangeViewMode(bool bChallengesFocusedMode) {
}

bool UAthenaMapPanel::CanShowChallengePins() const {
    return false;
}




