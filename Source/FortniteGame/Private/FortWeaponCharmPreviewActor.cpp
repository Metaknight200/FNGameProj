#include "FortWeaponCharmPreviewActor.h"

AFortWeaponCharmPreviewActor::AFortWeaponCharmPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyCharm = NULL;
    this->MyCharmActor = NULL;
    this->WeaponAttachMeshComp = NULL;
    this->CharmSlot = EFortCustomCharmType::Weapon;
}

void AFortWeaponCharmPreviewActor::StartLoadingNextPreviewActor(int32 SlotIndex) {
}

void AFortWeaponCharmPreviewActor::SetActiveCharmSlot(int32 CharmSlotIn) {
}



void AFortWeaponCharmPreviewActor::ClearCharm() {
}

void AFortWeaponCharmPreviewActor::ApplyCharmToSkelMesh(USkeletalMeshComponent* MeshComp) {
}


