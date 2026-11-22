#include "AthenaCollectionPlayerProgress.h"

UAthenaCollectionPlayerProgress::UAthenaCollectionPlayerProgress() {
    this->Text_PlayerName = NULL;
    this->Text_Progress = NULL;
    this->AvatarIcon = NULL;
}

bool UAthenaCollectionPlayerProgress::IsLocalPlayer() const {
    return false;
}

int32 UAthenaCollectionPlayerProgress::GetNumCollected() const {
    return 0;
}




