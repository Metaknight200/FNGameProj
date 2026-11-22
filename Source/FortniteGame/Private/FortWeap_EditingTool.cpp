#include "FortWeap_EditingTool.h"
#include "Net/UnrealNetwork.h"

AFortWeap_EditingTool::AFortWeap_EditingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::PaperBlueprint;
    this->EditActor = NULL;
    this->bEditConfirmed = false;
}

void AFortWeap_EditingTool::OnRep_EditActor() {
}

void AFortWeap_EditingTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeap_EditingTool, EditActor);
}


