#include "FortAnimNotify_PlayReloadFX.h"

UFortAnimNotify_PlayReloadFX::UFortAnimNotify_PlayReloadFX() {
    this->ReloadStage = EFortReloadFXState::ReloadStart;
}

void UFortAnimNotify_PlayReloadFX::SetReloadStage(TEnumAsByte<EFortReloadFXState::Type> InReloadStage) const {
}


