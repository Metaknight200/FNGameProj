#include "SpatialChallengePunchCard.h"

USpatialChallengePunchCard::USpatialChallengePunchCard() {
    this->bEnableSpatialInputPreprocessing = false;
    this->EntryBox_PunchCards = NULL;
    this->Scroll_Box = NULL;
    this->LastStickInputTime = 0.00f;
    this->InputDelayTime = 0.25f;
}




