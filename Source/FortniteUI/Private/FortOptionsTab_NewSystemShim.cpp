#include "FortOptionsTab_NewSystemShim.h"

UFortOptionsTab_NewSystemShim::UFortOptionsTab_NewSystemShim() {
    this->Settings_Panel = NULL;
    this->Registry = NULL;
}

bool UFortOptionsTab_NewSystemShim::AttemptToPopNavigation() {
    return false;
}


