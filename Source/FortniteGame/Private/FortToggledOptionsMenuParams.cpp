#include "FortToggledOptionsMenuParams.h"

UFortToggledOptionsMenuParams::UFortToggledOptionsMenuParams() {
    this->PlayerThatToggledOptionsMenu = NULL;
    this->bInOptionsMenu = false;
}

void UFortToggledOptionsMenuParams::SetParams(AFortPlayerController* _PlayerThatToggledOptionsMenu, bool Opened, UFortToggledOptionsMenuParams*& ThisParam) {
}

void UFortToggledOptionsMenuParams::BreakParams(AFortPlayerController*& _PlayerThatToggledOptionsMenu, bool& Opened) {
}


