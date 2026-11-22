#include "FortSpectatedPlayerSwitcher.h"

UFortSpectatedPlayerSwitcher::UFortSpectatedPlayerSwitcher() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxPlayersToShow = 4;
}

bool UFortSpectatedPlayerSwitcher::ShouldBeVisible() const {
    return false;
}




