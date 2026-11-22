#include "SocialNameTextBlock.h"

USocialNameTextBlock::USocialNameTextBlock() {
    this->SocialUser = NULL;
    this->MinDesiredSize = 0.00f;
    this->MaxDesiredSize = 0.00f;
    this->bShowSecondName = true;
    this->PlatformIconDisplayRule = EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty;
    this->bWrapToNextLine = false;
    this->SecondNameFontSize = 12;
}


