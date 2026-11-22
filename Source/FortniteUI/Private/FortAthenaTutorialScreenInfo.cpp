#include "FortAthenaTutorialScreenInfo.h"

FFortAthenaTutorialScreenInfo::FFortAthenaTutorialScreenInfo() {
    // Initialize reflected value fields omitted by the dump.
    this->TextPromptPosition = FVector2D::ZeroVector;
    this->TextPromptPosition_AthenaHUD = FVector2D::ZeroVector;
    this->Substep = EFortAthenaTutorialSubstep::ScreenSwipeToLook;
    this->ForceSingleInputKeybind = false;
    this->DisplayNextButton = false;
    this->DisplayTextPromptTarget = false;
    this->ExtraWidget = EFortAthenaTutorialScreenExtraWidget::None;
}

