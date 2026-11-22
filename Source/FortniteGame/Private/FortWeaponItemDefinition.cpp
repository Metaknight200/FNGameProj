#include "FortWeaponItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortWeaponItemDefinition::UFortWeaponItemDefinition() {
    this->ItemType = EFortItemType::WeaponMelee;
    this->bItemHasDurability = true;
    this->bRechargeAmmoToClip = false;
    this->LowAmmoPercentage = 0.25f;
    this->TriggerType = EFortWeaponTriggerType::OnPress;
    this->SecondaryTriggerType = EFortWeaponTriggerType::OnPress;
    this->DisplayTier = EFortDisplayTier::Invalid;
    this->bUsesPhantomReserveAmmo = false;
    this->bUsesCustomAmmoType = false;
    this->bAllowSecondaryFireToInterruptPrimary = false;
    this->bAllowTargetingDuringReload = false;
    this->bTargetingPreventsReload = false;
    this->bCanFireWhileInstigatorTethered = false;
    this->bCanFireWhileNotTargetedInVehicle = false;
    this->bAlwaysChargeUpToMin = false;
    this->bNoFireOnReleaseBeforeMinChargeTime = false;
    this->bEndAbilityOnChargeEnd = false;
    this->bUpdateLastFireTimeOnDischarge = false;
    this->bReticleCornerOutsideSpreadRadius = false;
    this->bValidForLastEquipped = true;
    this->bPreventDefaultPreload = false;
    this->bRequestClientPreload = false;
    this->HitNotifyDuration = 0.00f;
    this->AdditionalData = NULL;
}

bool UFortWeaponItemDefinition::UsesPhantomReserveAmmo() const {
    return false;
}

bool UFortWeaponItemDefinition::TargetingPreventsReload() const {
    return false;
}

bool UFortWeaponItemDefinition::ShouldUpdateLastFireTimeOnDischarge() const {
    return false;
}

bool UFortWeaponItemDefinition::ShouldEndAbilityOnChargeEnd() const {
    return false;
}

bool UFortWeaponItemDefinition::ShouldAllowTargetingDuringReload() const {
    return false;
}

bool UFortWeaponItemDefinition::NoFireOnReleaseBeforeMinChargeTime() const {
    return false;
}

void UFortWeaponItemDefinition::InitializeAlterationsBasedOnLootLevel(FFortItemEntry& ItemEntry) {
}

bool UFortWeaponItemDefinition::HasUniqueAmmo() const {
    return false;
}

FDataTableRowHandle UFortWeaponItemDefinition::GetWeaponStatHandle() const {
    return FDataTableRowHandle{};
}

float UFortWeaponItemDefinition::GetWeaponRechargeAmmoRate(const int32 InLevel) const {
    return 0.0f;
}

float UFortWeaponItemDefinition::GetWeaponRechargeAmmoQuantity(const int32 InLevel) const {
    return 0.0f;
}

USkeletalMesh* UFortWeaponItemDefinition::GetWeaponMeshOverride() const {
    return NULL;
}

TSubclassOf<AFortWeapon> UFortWeaponItemDefinition::GetWeaponActorClass() const {
    return NULL;
}

bool UFortWeaponItemDefinition::GetUsesCustomAmmoType() const {
    return bUsesCustomAmmoType;
}

TEnumAsByte<EFortWeaponTriggerType::Type> UFortWeaponItemDefinition::GetTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

FText UFortWeaponItemDefinition::GetShortDisplayName() const {
    return FText::GetEmpty();
}

TEnumAsByte<EFortWeaponTriggerType::Type> UFortWeaponItemDefinition::GetSecondaryTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetSecondaryFireAbility() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleInvalidTargetImage() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleImage() const {
    return NULL;
}

TArray<float> UFortWeaponItemDefinition::GetReticleCornerAngles() const {
    return TArray<float>();
}

UTexture2D* UFortWeaponItemDefinition::GetReticleCenterPerfectAimImage() const {
    return NULL;
}

FVector2D UFortWeaponItemDefinition::GetReticleCenterImageOffset() const {
    return FVector2D{};
}

UTexture2D* UFortWeaponItemDefinition::GetReticleCenterImage() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetReloadAbility() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetPrimaryFireAbility() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetOnHitAbility() const {
    return NULL;
}

float UFortWeaponItemDefinition::GetLowAmmoPercentage() const {
    return LowAmmoPercentage;
}

float UFortWeaponItemDefinition::GetHitNotifyDuration() const {
    return HitNotifyDuration;
}

TArray<TSubclassOf<UFortGameplayAbility>> UFortWeaponItemDefinition::GetEquippedAbilities() const {
    return TArray<TSubclassOf<UFortGameplayAbility>>();
}

FText UFortWeaponItemDefinition::GetDisplayTierAsText(const EFortDisplayTier NewDisplayTier) {
    return FText::GetEmpty();
}

EFortDisplayTier UFortWeaponItemDefinition::GetDisplayTier() const {
    return EFortDisplayTier::Invalid;
}

float UFortWeaponItemDefinition::GetDegradedPercentage() const {
    return 0.0f;
}

UFortAlterationItemDefinition* UFortWeaponItemDefinition::GetBaseCosmeticAlteration() const {
    return NULL;
}

UFortAlterationItemDefinition* UFortWeaponItemDefinition::GetBaseAlteration() const {
    return NULL;
}

TArray<FName> UFortWeaponItemDefinition::GetAnalyticTags() const {
    return TArray<FName>();
}

bool UFortWeaponItemDefinition::AlwaysChargeUpToMin() const {
    return false;
}

bool UFortWeaponItemDefinition::AllowSecondaryFireToInterruptPrimary() const {
    return false;
}


