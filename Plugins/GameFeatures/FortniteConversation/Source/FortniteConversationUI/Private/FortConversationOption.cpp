#include "FortConversationOption.h"

UFortConversationOption::UFortConversationOption() {
    this->OnOptionConfirmedSound = NULL;
    this->OnOptionHoveredSound = NULL;
    this->Switcher_DisplayAsset = NULL;
}





bool UFortConversationOption::IsAvailable() const {
    return false;
}


