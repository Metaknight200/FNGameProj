#include "FortMontageItemDefinitionBase.h"
#include "FortPawn.h"
#include "FortWeapon.h"
#include "FortWeaponItemDefinition.h"
#include "NativeGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(FortHolsterDualWieldPickaxeTag, "Cosmetics.Pickaxe.DualWield")
UE_DEFINE_GAMEPLAY_TAG_STATIC(FortHolsterOneHandedPickaxeTag, "Cosmetics.Pickaxe.OneHanded")

UFortMontageItemDefinitionBase::UFortMontageItemDefinitionBase() {
    this->PreviewLoops = 1;
    this->PreviewLength = 0.00f;
    this->bIncludeAudioWithAnimDuration = true;
    this->EmoteCooldownSecs = 3.00f;
    this->bMontageContainsFacialAnimation = false;
    this->bPlayRandomSection = false;
    this->bSwitchToHarvestingToolOnUse = false;
    this->bHolsterWeapon = false;
    this->bHolsterWeaponIfDualWieldPickaxe = false;
}

bool UFortMontageItemDefinitionBase::ShouldPlayRandomSectionByName() const {
    return PlayRandomSectionByName.Num() > 0;
}

bool UFortMontageItemDefinitionBase::ShouldHolsterWeapon(AFortPawn* FortPawn) const {
    if (bHolsterWeapon) {
        return true;
    }
    if (!bHolsterWeaponIfDualWieldPickaxe) {
        return false;
    }
    // Native 17.50 also holsters when the conditional mode has no pawn/weapon data.
    if (!FortPawn || !FortPawn->CurrentWeapon || !FortPawn->CurrentWeapon->WeaponData) {
        return true;
    }
    const UFortWeaponItemDefinition* Definition = FortPawn->CurrentWeapon->WeaponData;
    if (Definition->GetItemType() != EFortItemType::WeaponHarvest) {
        return true;
    }
    FGameplayTagContainer Tags;
    Definition->GetOwnedGameplayTags(Tags);
    return Tags.HasTag(FortHolsterDualWieldPickaxeTag.GetTag()) ||
        Tags.HasTag(FortHolsterOneHandedPickaxeTag.GetTag());
}

void UFortMontageItemDefinitionBase::PreviewInPIE() {
}

FName UFortMontageItemDefinitionBase::PickRandomSectionByName(float RandomNumber) const {
    if (PlayRandomSectionByName.Num() == 0) {
        return NAME_None;
    }
    if (PlayRandomSectionByName.Num() == 1) {
        return PlayRandomSectionByName[0].SectionName;
    }
    float TotalWeight = 0.f;
    for (const FSectionNameAndWeight& Section : PlayRandomSectionByName) {
        TotalWeight += Section.SectionWeight;
    }
    float RemainingWeight = TotalWeight * RandomNumber;
    for (const FSectionNameAndWeight& Section : PlayRandomSectionByName) {
        RemainingWeight -= Section.SectionWeight;
        if (!(RemainingWeight > 0.f)) {
            return Section.SectionName;
        }
    }
    return PlayRandomSectionByName[0].SectionName;
}

FName UFortMontageItemDefinitionBase::PickMontageSection(const UAnimMontage* Montage, AFortPawn* FortPawn) const {
    return NAME_None;
}

FName UFortMontageItemDefinitionBase::PickCosmeticDrivenSectionByName(AFortPawn* PawnPlayingMotage) const {
    return NAME_None;
}

bool UFortMontageItemDefinitionBase::IsMontageItemEmoteWheelExclusive(const AFortPlayerController* FortPC) const {
    return false;
}

bool UFortMontageItemDefinitionBase::HasCosmeticDrivenMotageSection() const {
    return false;
}

UAnimMontage* UFortMontageItemDefinitionBase::GetFrontendPreviewAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, TEnumAsByte<EFortCustomGender::Type> Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

TSoftObjectPtr<UAnimMontage> UFortMontageItemDefinitionBase::GetFrontendPreviewAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, AFortPlayerPawn* PreviewPawn, TEnumAsByte<EFortCustomGender::Type> Gender) const {
    return NULL;
}

UAnimMontage* UFortMontageItemDefinitionBase::GetAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, TEnumAsByte<EFortCustomGender::Type> Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

TSoftObjectPtr<UAnimMontage> UFortMontageItemDefinitionBase::GetAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, TEnumAsByte<EFortCustomGender::Type> Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

bool UFortMontageItemDefinitionBase::CanShowMontageItem(const AFortPlayerController* FortPC) const {
    return false;
}

bool UFortMontageItemDefinitionBase::CanActivateMontageItem(const AFortPlayerController* FortPC, FGameplayTagContainer& OutFailureTags) const {
    return false;
}

bool UFortMontageItemDefinitionBase::CanAccessMontageItem(const AFortPlayerController* FortPC) const {
    return false;
}


