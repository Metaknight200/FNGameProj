#include "CustomCharacterPartAnimInstance_Cape.h"

UCustomCharacterPartAnimInstance_Cape::UCustomCharacterPartAnimInstance_Cape() {
    this->MeshToCopy = NULL;
    this->ClothingSimInteractor = NULL;
    this->BlendOutForksAlpha = 0.00f;
    this->bBlendInBackwardPose = false;
    this->AimOffsetMultiplier = -0.25f;
    this->FinalCapeBlendOutAlpha = 0.00f;
    this->SwingRotateAlpha = 0.00f;
    this->Cape05TrailControllerAlpha = 0.00f;
}


