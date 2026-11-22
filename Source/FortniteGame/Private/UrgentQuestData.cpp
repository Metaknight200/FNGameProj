#include "UrgentQuestData.h"

FUrgentQuestData::FUrgentQuestData() {
    // Initialize reflected value fields omitted by the dump.
    this->AlertIconBorderColor = FLinearColor::Transparent;
    this->AlertIconBrushSize = FVector2D::ZeroVector;
    this->EventStartTime = FDateTime(0);
    this->TotalEventTime = 0.00f;
    this->bQuestCompleteOnTimeExpiration = false;
    this->bDisplayHUDData = false;
    this->SortPriority = 0;
    this->bReverseProgressBar = false;
    this->bShowBountyThreatInformation = false;
    this->bShowBountyPriceAndDistance = false;
    this->DisplayPlayer = NULL;
    this->AcceptingPlayer = NULL;
    this->BountyPriceImage = NULL;
}

