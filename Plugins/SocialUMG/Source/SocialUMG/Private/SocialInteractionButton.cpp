#include "SocialInteractionButton.h"

USocialInteractionButton::USocialInteractionButton() {
    this->Text_InteractionName = NULL;
    this->Border_InteractionIndicator = NULL;
}


bool USocialInteractionButton::IsPlatformOnlyFriend() const {
    return false;
}

FName USocialInteractionButton::GetInteractionName() const {
    return NAME_None;
}


