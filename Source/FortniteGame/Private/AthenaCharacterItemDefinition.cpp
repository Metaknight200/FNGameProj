#include "AthenaCharacterItemDefinition.h"
#include "CustomCharacterAccessoryData.h"
#include "CustomCharacterBodyPartData.h"
#include "FortHeroSpecialization.h"
#include "FortHeroType.h"
#include "CustomCharacterPart.h"
#include "EFortItemType.h"

UAthenaCharacterItemDefinition::UAthenaCharacterItemDefinition() {
    this->ItemType = EFortItemType::AthenaCharacter;
    this->HeroDefinition = NULL;
    this->DefaultBackpack = NULL;
    this->PreviewPawnScale = 1.00f;
    this->Gender = EFortCustomGender::Invalid;
}



USkeletalMesh* UAthenaCharacterItemDefinition::GetPreviewBaseMesh() const {
    return HeroDefinition ? HeroDefinition->GetPreviewBaseMesh() : nullptr;
}

void UAthenaCharacterItemDefinition::GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const {
    OutMeshes.Reset();
    OutAnimClasses.Reset();
    if (HeroDefinition) HeroDefinition->GetPreviewSkeletalMeshes(OutMeshes, OutAnimClasses);
}
