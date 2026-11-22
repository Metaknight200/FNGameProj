#include "FortCharacterLayerAnimInstance_STWPlayer.h"

UFortCharacterLayerAnimInstance_STWPlayer::UFortCharacterLayerAnimInstance_STWPlayer() {
    this->LeanAdditiveAlpha = 0.00f;
    this->LeanAngle = 0.00f;
    this->Speed2D = 0.00f;
    this->LocalVelocityYawAngle = 0.00f;
    this->Gender = EFortCustomGender::Invalid;
    this->bIsSlopeSliding = false;
    this->bIsOnGround = false;
    this->bLandingPredicted = false;
    this->bIsFalling = false;
    this->bIsJumping = false;
}


