#include "FortHeroType.h"
#include "CustomCharacterAccessoryData.h"
#include "CustomCharacterBodyPartData.h"
#include "FortHeroSpecialization.h"
#include "CustomCharacterPart.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortHeroType::UFortHeroType() {
    this->ItemType = EFortItemType::Hero;
    this->bForceShowHeadAccessory = false;
    this->bForceShowBackpack = false;
    this->HeroGameplayDefinition = NULL;
    this->HeroCosmeticOutfitDefinition = NULL;
    this->HeroCosmeticBackblingDefinition = NULL;
    this->FrontEndBackPreviewRotationOffset = 0.00f;
}

FText UFortHeroType::GetSubType() const {
    return FText::GetEmpty();
}

void UFortHeroType::GetSpecializations(TArray<UFortHeroSpecialization*>& OutSpecializations) const {
    OutSpecializations.Reset();
    for (const auto& Specialization : Specializations) {
        if (UFortHeroSpecialization* Loaded = Specialization.LoadSynchronous()) {
            OutSpecializations.Add(Loaded);
        }
    }
}

UFortHeroGameplayDefinition* UFortHeroType::GetHeroGameplayDefinition() {
    return HeroGameplayDefinition;
}

UAnimMontage* UFortHeroType::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

TSubclassOf<UFrontendAnimInstance> UFortHeroType::GetFrontendAnimClass() const {
    return NULL;
}



USkeletalMesh* UFortHeroType::GetPreviewBaseMesh() const {
    for (const auto& SpecializationAsset : Specializations) {
        UFortHeroSpecialization* Specialization = SpecializationAsset.LoadSynchronous();
        if (!Specialization) continue;
        for (const auto& PartAsset : Specialization->GetCharacterPartAssets()) {
            UCustomCharacterPart* Part = PartAsset.LoadSynchronous();
            if (!Part || Part->CharacterPartType != EFortCustomPartType::Body) continue;
            for (const auto& MasterAsset : Part->GetMasterMeshAssets()) {
                if (USkeletalMesh* Master = MasterAsset.LoadSynchronous()) return Master;
            }
            if (USkeletalMesh* Mesh = Part->GetSkeletalMesh()) return Mesh;
        }
    }
    return nullptr;
}

void UFortHeroType::GetPreviewSkeletalMeshes(TArray<USkeletalMesh*>& OutMeshes, TArray<TSubclassOf<UAnimInstance>>& OutAnimClasses) const {
    OutMeshes.Reset();
    OutAnimClasses.Reset();
    for (const auto& SpecializationAsset : Specializations) {
        UFortHeroSpecialization* Specialization = SpecializationAsset.LoadSynchronous();
        if (!Specialization) continue;
        for (const auto& PartAsset : Specialization->GetCharacterPartAssets()) {
            UCustomCharacterPart* Part = PartAsset.LoadSynchronous();
            if (!Part) continue;
            USkeletalMesh* Mesh = Part->GetSkeletalMesh();
            if (!Mesh) continue;
            TSubclassOf<UAnimInstance> AnimationClass;
            if (const UCustomCharacterBodyPartData* Body = Cast<UCustomCharacterBodyPartData>(Part->GetAdditionalData())) {
                AnimationClass = Body->GetPreviewAnimClassAsset().LoadSynchronous();
            } else if (const UCustomCharacterAccessoryData* Accessory = Cast<UCustomCharacterAccessoryData>(Part->GetAdditionalData())) {
                AnimationClass = Accessory->GetPreviewAnimClassAsset().LoadSynchronous();
            }
            OutMeshes.Add(Mesh);
            OutAnimClasses.Add(AnimationClass);
        }
    }
}
