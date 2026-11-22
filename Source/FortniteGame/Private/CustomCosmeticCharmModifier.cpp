#include "CustomCosmeticCharmModifier.h"

ACustomCosmeticCharmModifier::ACustomCosmeticCharmModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharmType = EFortCustomCharmType::NumTypes;
    this->MyCharmOwner = NULL;
}



UMeshComponent* ACustomCosmeticCharmModifier::GetSkeletalMeshForAssociatedPlayerPawnCharmType() const {
    return NULL;
}

AFortPlayerCharm* ACustomCosmeticCharmModifier::GetCharmOwner() const {
    return NULL;
}

TEnumAsByte<EFortCustomCharmType::Type> ACustomCosmeticCharmModifier::GetCharacterCharmType() const {
    return EFortCustomCharmType::Weapon;
}

void ACustomCosmeticCharmModifier::ForceResetParticleSystems() {
}


