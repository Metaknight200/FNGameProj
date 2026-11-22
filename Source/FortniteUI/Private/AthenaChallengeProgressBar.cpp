#include "AthenaChallengeProgressBar.h"

UAthenaChallengeProgressBar::UAthenaChallengeProgressBar() : UUserWidget(FObjectInitializer::Get()) {
    this->bHideProgressBar = false;
    this->ProgressBar_StepsCompleted = NULL;
    this->RichText_Progress = NULL;
}



