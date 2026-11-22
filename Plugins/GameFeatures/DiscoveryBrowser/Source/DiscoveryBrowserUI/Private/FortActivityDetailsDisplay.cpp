#include "FortActivityDetailsDisplay.h"

UFortActivityDetailsDisplay::UFortActivityDetailsDisplay() {
    this->IntroDelay = 0.20f;
    this->DetailsScrollStartDelay = 4.00f;
    this->DetailsScrollSpeed = 0.50f;
    this->DetailsScrollEndDelay = 2.00f;
    this->Text_ActivityOrigin = NULL;
    this->Text_ActivityName = NULL;
    this->Text_ActivityDescription = NULL;
    this->ScrollBox_ActivityDescription = NULL;
    this->EntryBox_ActivityTags = NULL;
    this->DetailsIntro = NULL;
    this->DetailsOutro = NULL;
}


void UFortActivityDetailsDisplay::OnOutroAnimationFinished() {
}




bool UFortActivityDetailsDisplay::IsActivityEpicOriginal() const {
    return false;
}

FText UFortActivityDetailsDisplay::GetCreatorTextFormat_Implementation(const FText& CreatorName) {
    return FText::GetEmpty();
}


