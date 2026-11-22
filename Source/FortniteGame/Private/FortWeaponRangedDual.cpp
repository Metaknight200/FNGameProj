#include "FortWeaponRangedDual.h"
#include "SkeletalMeshComponentBudgeted.h"

AFortWeaponRangedDual::AFortWeaponRangedDual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->LeftHandWeaponMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("Left Hand Weapon Mesh"));
    this->LeftHandFireAnimation = NULL;
    this->LeftCockingAnimation = NULL;
    this->LeftHandFireDownsightsAnimation = NULL;
    this->LeftWeaponFireMontage = NULL;
    this->LeftWeaponFireDownsightsMontage = NULL;
    this->LeftWeaponCockingMontage = NULL;
    this->LeftWeaponReloadMontage = NULL;
    this->LeftHandWeaponMesh->SetupAttachment(RootComponent);
}

EDualWeaponHand AFortWeaponRangedDual::GetNextFireHand() const {
    return EDualWeaponHand::LEFT;
}

USkeletalMeshComponentBudgeted* AFortWeaponRangedDual::GetLeftHandWeaponMesh() const {
    return LeftHandWeaponMesh;
}

EDualWeaponHand AFortWeaponRangedDual::GetLastFireHand() const {
    return EDualWeaponHand::LEFT;
}


