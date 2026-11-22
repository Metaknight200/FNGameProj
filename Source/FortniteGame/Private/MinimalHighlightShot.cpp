#include "MinimalHighlightShot.h"

FMinimalHighlightShot::FMinimalHighlightShot() {
    this->VersionNumber = 0;
    this->StartTimestamp = 0.00f;
    this->ShotDuration = 0.00f;
    this->NumEliminations = 0;
    this->ClipSignificance = EHighlightSignificances::NotSignificant;
    this->FinalScore = 0.00f;
}

