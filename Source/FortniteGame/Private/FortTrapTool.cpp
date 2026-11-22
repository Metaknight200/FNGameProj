#include "FortTrapTool.h"

AFortTrapTool::AFortTrapTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::PaperBlueprint;
    this->bRecalculateTrapPositionOnServer = true;
}

void AFortTrapTool::OnEquip(AFortWeapon* OldWeapon) {
}


