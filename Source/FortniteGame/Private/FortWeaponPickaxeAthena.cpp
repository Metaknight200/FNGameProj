#include "FortWeaponPickaxeAthena.h"

AFortWeaponPickaxeAthena::AFortWeaponPickaxeAthena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldFullyApplyVariantsOnEquip = true;
    this->SwingVFX = NULL;
    this->IdleVFX = NULL;
    this->AnimTrailsPSC = NULL;
    this->AnimTrailsPSCTemplate = NULL;
    this->AnimTrailsNiagaraAsset = NULL;
    this->bUseAnimTrailsPSC = true;
    this->AnimTrailsFirstSocketName = TEXT("Melee_R_Upper");
    this->AnimTrailsSecondSocketName = TEXT("Melee_R_Lower");
    this->AnimTrailsWidth = 1.00f;
    this->IdleFXSocketName = TEXT("idle_fx");
    this->SwingFXSocketName = TEXT("SwingFX");
    this->GenericImpactSound = NULL;
    this->Material0MID = NULL;
    this->bWatchKills = false;
    this->WatchedKills = 0.00f;
    this->bCandyCaneKillReaction = false;
    this->CQCEnemyAudio = NULL;
    this->PickaxeHarvestingMontage = NULL;
    this->CachedCosmeticItemDefinition = NULL;
}

bool AFortWeaponPickaxeAthena::HasAuthoredData() {
    return false;
}

bool AFortWeaponPickaxeAthena::GetUseAnimTrailsPSC() const {
    return bUseAnimTrailsPSC;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetSwingVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeAthena::GetSwingPSC() const {
    return NULL;
}

FName AFortWeaponPickaxeAthena::GetSwingFXSocketName() const {
    return SwingFXSocketName;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetIdleVFXComponent() const {
    return NULL;
}

UParticleSystemComponent* AFortWeaponPickaxeAthena::GetIdlePSC() const {
    return NULL;
}

FName AFortWeaponPickaxeAthena::GetIdleFXSocketName() const {
    return IdleFXSocketName;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetAnimTrailVFXComponent() const {
    return NULL;
}

float AFortWeaponPickaxeAthena::GetAnimTrailsWidth() const {
    return AnimTrailsWidth;
}

FName AFortWeaponPickaxeAthena::GetAnimTrailsSecondSocketName() const {
    return AnimTrailsSecondSocketName;
}

UParticleSystem* AFortWeaponPickaxeAthena::GetAnimTrailsPSCTemplate() const {
    return AnimTrailsPSCTemplate;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::GetAnimTrailsPSC() const {
    return AnimTrailsPSC;
}

UNiagaraSystem* AFortWeaponPickaxeAthena::GetAnimTrailsNiagaraAsset() const {
    return AnimTrailsNiagaraAsset;
}

FName AFortWeaponPickaxeAthena::GetAnimTrailsFirstSocketName() const {
    return AnimTrailsFirstSocketName;
}

UFXSystemComponent* AFortWeaponPickaxeAthena::CreateAnimTrailFX() {
    return NULL;
}

bool AFortWeaponPickaxeAthena::AttachesAnimTrailsToWeapon() const {
    return false;
}


