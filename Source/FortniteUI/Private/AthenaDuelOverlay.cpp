#include "AthenaDuelOverlay.h"

UAthenaDuelOverlay::UAthenaDuelOverlay() {
    this->RichText_Title = NULL;
    this->RichText_SubTitle = NULL;
    this->Image_ChallengedNPCPortrait = NULL;
    this->Image_ElimPortrait = NULL;
    this->Image_Reward = NULL;
}




void UAthenaDuelOverlay::HandleDuelUpdate(const EDuelState DuelState, const FDuelOverlayData& DuelOverlayData) {
}


