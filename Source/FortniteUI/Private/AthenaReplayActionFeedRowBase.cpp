#include "AthenaReplayActionFeedRowBase.h"

UAthenaReplayActionFeedRowBase::UAthenaReplayActionFeedRowBase() {
    this->Image_EventIcon = NULL;
    this->Text_EventTime = NULL;
    this->Button_InstigatorButton = NULL;
    this->Button_VictimButton = NULL;
    this->RowProxy = NULL;
}


void UAthenaReplayActionFeedRowBase::OnPlayerStateAdded(AFortPlayerStateAthena* FPSA) {
}



