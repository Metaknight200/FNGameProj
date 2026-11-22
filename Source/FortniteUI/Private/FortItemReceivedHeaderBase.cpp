#include "FortItemReceivedHeaderBase.h"

UFortItemReceivedHeaderBase::UFortItemReceivedHeaderBase() {
    this->Image_Icon = NULL;
    this->Text_Violator = NULL;
    this->Text_Title = NULL;
    this->Text_Subtitle = NULL;
    this->Text_Body = NULL;
}

void UFortItemReceivedHeaderBase::SetHeaderInformation(const FFortItemHeaderInformation& HeaderInfo) {
}


