#include "FortWeaponRangedItemDefinition.h"
#include "EFortItemType.h"
#include "Templates/SubclassOf.h"

UFortWeaponRangedItemDefinition::UFortWeaponRangedItemDefinition() {
    this->ItemType = EFortItemType::WeaponRanged;
    this->bItemCanBeStolen = true;
    this->ReticleCornerAngles.AddDefaulted(4);
    this->bUseNativeWeaponTrace = true;
    this->bTraceThroughPawns = false;
    this->bTraceThroughWorld = false;
    this->bShouldSpawnBulletShellFX = false;
    this->bShouldUsePerfectAimWhenTargetingMinSpread = true;
    this->bDoNotAllowDoublePump = false;
    this->bUseOnTouch = false;
    this->bAllowADSInAir = false;
    this->bShowReticleHitNotifyAtImpactLocation = false;
    this->bForceProjectileTooltip = false;
    this->bSecondaryFireRequiresAmmo = true;
}

bool UFortWeaponRangedItemDefinition::UseOnTouch() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUsePerfectAimWhenTargetingMinSpread() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUseNativeWeaponTrace() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughWorld() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughPawns() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldSpawnBulletShellFX() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldShowReticleHitNotifyAtImpactLocation() const {
    return false;
}

TSubclassOf<AFortProjectileBase> UFortWeaponRangedItemDefinition::GetProjectileTemplate() const {
    return NULL;
}

UParticleSystem* UFortWeaponRangedItemDefinition::GetBulletShellFXTemplate() const {
    return NULL;
}

bool UFortWeaponRangedItemDefinition::ForceProjectileTooltip() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::DoNotAllowDoublePump() const {
    return false;
}


