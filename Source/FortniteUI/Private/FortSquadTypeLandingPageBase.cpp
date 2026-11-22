#include "FortSquadTypeLandingPageBase.h"

UFortSquadTypeLandingPageBase::UFortSquadTypeLandingPageBase() {
    this->bReadOnlyModeWIFE = false;
    this->SquadType = EFortHomebaseSquadType::AttributeSquad;
    this->ItemManagementScreenFilter = EFortFrontendInventoryFilter::Schematics;
}


bool UFortSquadTypeLandingPageBase::IsScreenWIFE() const {
    return false;
}

void UFortSquadTypeLandingPageBase::HandlePendingNavigationOp() {
}

void UFortSquadTypeLandingPageBase::HandleBackInputAction(bool& bPassThrough) {
}



