#include "AthenaSpecialEventChallengeEntry.h"

UAthenaSpecialEventChallengeEntry::UAthenaSpecialEventChallengeEntry() {
    this->RefreshRate = 0.10f;
    this->TextThreatLevel = NULL;
    this->ProgressBarChallengeProgress = NULL;
    this->TextChallengeTimer = NULL;
    this->WidgetTimerContent = NULL;
    this->Text_Distance = NULL;
    this->Text_Price = NULL;
    this->Image_Price = NULL;
    this->WidgetPriceAndDistanceContent = NULL;
    this->Image_UrgentIcon = NULL;
    this->Image_UrgentAlertBackground = NULL;
    this->Text_UrgentIcon = NULL;
}




void UAthenaSpecialEventChallengeEntry::HandleOnPlayerBountyThreatLevelUpdated(EPlayerBountyThreatLevel NewPlayerBountyThreatLeve) {
}

void UAthenaSpecialEventChallengeEntry::HandleOnPlayerBountyThreatLevelEnded() {
}


