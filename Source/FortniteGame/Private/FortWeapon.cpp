#include "FortWeapon.h"
#include "FortWeaponItemDefinition.h"
#include "FortProjectileTrajectory.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "FortGenericDataStoreManagerComponent.h"
#include "Net/UnrealNetwork.h"

AFortWeapon::AFortWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMesh0"));
    this->bIsEquippingWeapon = false;
    this->bIsReloadingWeapon = false;
    this->bIsChargingWeapon = false;
    this->bDisableEquipAnimation = false;
    this->bIsAimingConsumable = false;
    this->bUseAttributeCaching = true;
    this->WeaponData = NULL;
    this->CosmeticOverrideWeaponData = NULL;
    this->bImpactFXAttachedToHitActor = false;
    this->HitNotifyAudioBank = NULL;
    this->bRemoveAbilitiesWhenRemovedFromInventory = true;
    this->GrantedAbilityRemovalPolicy[0] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    this->GrantedAbilityRemovalPolicy[1] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    this->GrantedAbilityRemovalPolicy[2] = EFortWeaponAbilityRemovalPolicy::GameDefault;
    this->EquippedWeaponDestroyWrapperRepCounter = 0;
    this->PersistentFXStartTime = 0.00f;
    this->MinimumTimeForPersistentFX = 0.00f;
    this->WeaponReduceMeshWorkSetting = EFortWeaponReduceMeshWorkSetting::DisableTick;
    this->bShouldDrawNativeReticle = true;
    this->ReticleImage = NULL;
    this->AutoFireReticleImage = NULL;
    this->HitNotifyReticleImage = NULL;
    this->HitNotifyLocationReticleImage = NULL;
    this->HitNotifyDisplayDuration = 0.00f;
    this->ReticleCenterImage = NULL;
    this->ReticleCenterPerfectAimImage = NULL;
    this->ReticleInvalidTargetImage = NULL;
    this->MuzzleBlockedReticleImage = NULL;
    this->ReticleAltCenterImage = NULL;
    this->ReticleOuterImage = NULL;
    this->ReticleAltOuterImage = NULL;
    this->ReticleDefaultPrimaryStrikeAngle = 0.00f;
    this->ReticleDefaultSecondaryStrikeAngle = 0.00f;
    this->bSupportsAutofireAtReticleTarget = true;
    this->CameraBase3PClass = NULL;
    this->CameraTargeting3PClass = NULL;
    this->CameraBase1PClass = NULL;
    this->CameraTargeting1PClass = NULL;
    this->DestroyedSound = NULL;
    this->OutOfAmmoSound = NULL;
    this->ReloadSounds[0] = NULL;
    this->ReloadSounds[1] = NULL;
    this->ReloadSounds[2] = NULL;
    this->PrimaryFireSound1P = NULL;
    this->PrimaryFireSound[0] = NULL;
    this->PrimaryFireSound[1] = NULL;
    this->PrimaryFireSound[2] = NULL;
    this->PrimaryFireStopSound1P = NULL;
    this->PrimaryFireStopSound[0] = NULL;
    this->PrimaryFireStopSound[1] = NULL;
    this->PrimaryFireStopSound[2] = NULL;
    this->SecondaryFireSound[0] = NULL;
    this->SecondaryFireSound[1] = NULL;
    this->SecondaryFireSound[2] = NULL;
    this->SecondaryFireStopSound[0] = NULL;
    this->SecondaryFireStopSound[1] = NULL;
    this->SecondaryFireStopSound[2] = NULL;
    this->ChargeFireSound1P[0] = NULL;
    this->ChargeFireSound1P[1] = NULL;
    this->ChargeFireSound1P[2] = NULL;
    this->ChargeFireSound[0] = NULL;
    this->ChargeFireSound[1] = NULL;
    this->ChargeFireSound[2] = NULL;
    this->TargetingStartSound = NULL;
    this->TargetingEndSound = NULL;
    this->PrimaryFireSoundFadeOutTime = 0.25f;
    this->ImpactPhysicalSurfaceSounds[0] = NULL;
    this->ImpactPhysicalSurfaceSounds[1] = NULL;
    this->ImpactPhysicalSurfaceSounds[2] = NULL;
    this->ImpactPhysicalSurfaceSounds[3] = NULL;
    this->ImpactPhysicalSurfaceSounds[4] = NULL;
    this->ImpactPhysicalSurfaceSounds[5] = NULL;
    this->ImpactPhysicalSurfaceSounds[6] = NULL;
    this->ImpactPhysicalSurfaceSounds[7] = NULL;
    this->ImpactPhysicalSurfaceSounds[8] = NULL;
    this->ImpactPhysicalSurfaceSounds[9] = NULL;
    this->ImpactPhysicalSurfaceSounds[10] = NULL;
    this->ImpactPhysicalSurfaceSounds[11] = NULL;
    this->ImpactPhysicalSurfaceSounds[12] = NULL;
    this->ImpactPhysicalSurfaceSounds[13] = NULL;
    this->ImpactPhysicalSurfaceSounds[14] = NULL;
    this->ImpactPhysicalSurfaceSounds[15] = NULL;
    this->ImpactPhysicalSurfaceSounds[16] = NULL;
    this->ImpactPhysicalSurfaceSounds[17] = NULL;
    this->ImpactPhysicalSurfaceSounds[18] = NULL;
    this->ImpactPhysicalSurfaceSounds[19] = NULL;
    this->ImpactPhysicalSurfaceSounds[20] = NULL;
    this->ImpactPhysicalSurfaceSounds[21] = NULL;
    this->ImpactPhysicalSurfaceSounds[22] = NULL;
    this->ImpactPhysicalSurfaceSounds[23] = NULL;
    this->ImpactPhysicalSurfaceSounds[24] = NULL;
    this->ImpactPhysicalSurfaceSounds[25] = NULL;
    this->ImpactPhysicalSurfaceSounds[26] = NULL;
    this->ImpactPhysicalSurfaceEffects[0] = NULL;
    this->ImpactPhysicalSurfaceEffects[1] = NULL;
    this->ImpactPhysicalSurfaceEffects[2] = NULL;
    this->ImpactPhysicalSurfaceEffects[3] = NULL;
    this->ImpactPhysicalSurfaceEffects[4] = NULL;
    this->ImpactPhysicalSurfaceEffects[5] = NULL;
    this->ImpactPhysicalSurfaceEffects[6] = NULL;
    this->ImpactPhysicalSurfaceEffects[7] = NULL;
    this->ImpactPhysicalSurfaceEffects[8] = NULL;
    this->ImpactPhysicalSurfaceEffects[9] = NULL;
    this->ImpactPhysicalSurfaceEffects[10] = NULL;
    this->ImpactPhysicalSurfaceEffects[11] = NULL;
    this->ImpactPhysicalSurfaceEffects[12] = NULL;
    this->ImpactPhysicalSurfaceEffects[13] = NULL;
    this->ImpactPhysicalSurfaceEffects[14] = NULL;
    this->ImpactPhysicalSurfaceEffects[15] = NULL;
    this->ImpactPhysicalSurfaceEffects[16] = NULL;
    this->ImpactPhysicalSurfaceEffects[17] = NULL;
    this->ImpactPhysicalSurfaceEffects[18] = NULL;
    this->ImpactPhysicalSurfaceEffects[19] = NULL;
    this->ImpactPhysicalSurfaceEffects[20] = NULL;
    this->ImpactPhysicalSurfaceEffects[21] = NULL;
    this->ImpactPhysicalSurfaceEffects[22] = NULL;
    this->ImpactPhysicalSurfaceEffects[23] = NULL;
    this->ImpactPhysicalSurfaceEffects[24] = NULL;
    this->ImpactPhysicalSurfaceEffects[25] = NULL;
    this->ImpactPhysicalSurfaceEffects[26] = NULL;
    this->ImpactCameraShake = NULL;
    this->PrimaryForceFeedbackEffect = NULL;
    this->SecondaryForceFeedbackEffect = NULL;
    this->PrimaryImpactForceFeedbackEffect = NULL;
    this->SecondaryImpactForceFeedbackEffect = NULL;
    this->DataStoreManager = CreateDefaultSubobject<UFortGenericDataStoreManagerComponent>(TEXT("GeneralDataStore"));
    this->FireAudioChannels[0] = NULL;
    this->FireAudioChannels[1] = NULL;
    this->FireAudioChannels[2] = NULL;
    this->FireAudioChannels[3] = NULL;
    this->ReloadAudioChannels[0] = NULL;
    this->ReloadAudioChannels[1] = NULL;
    this->ReloadAudioChannels[2] = NULL;
    this->TargetingAudioChannels[0] = NULL;
    this->TargetingAudioChannels[1] = NULL;
    this->CurrentGunFireIndex = 0;
    this->WeaponMesh = (USkeletalMeshComponentBudgeted*)RootComponent;
    this->FireAudioChannelWantsToPlay[0] = 1;
    this->FireAudioChannelWantsToPlay[1] = 1;
    this->FireAudioChannelWantsToPlay[2] = 1;
    this->FireAudioChannelWantsToPlay[3] = 1;
    this->WrapSectionMask = 1;
    this->bUsingSecondaryFireAudio = false;
    this->bHasCachedAdditionalMeshes = false;
    this->LastFireTime = -10.00f;
    this->LastFireTimeVerified = 0.00f;
    this->bIsPlayingFireFX = false;
    this->bFireFXTriggered = false;
    this->TimerIntervalAdjustment = 0.00f;
    this->InputQueueTimePercent = 0.20f;
    this->bAllowTargeting = false;
    this->bIsTargeting = false;
    this->LastTargetingTransitionTime = 0.00f;
    this->bTraceThroughPawns = false;
    this->bTraceThroughWorld = false;
    this->TraceThroughPawnsLimit = 16;
    this->TraceThroughBuildingsLimit = 16;
    this->TraceThroughLandscapeLimit = 16;
    this->bUseProjectileTrace = false;
    this->bUseVariableFocalDistanceTargeting = false;
    this->bUseWeaponTraceForReticle = false;
    this->ProjectilePitchOffset = 0.00f;
    this->LastReloadTime = 0.00f;
    this->LastSuccessfulReloadTime = 0.00f;
    this->CurrentReloadDuration = 0.00f;
    this->WeaponLevel = -1;
    this->AmmoCount = 0;
    this->PhantomReserveAmmo = 0;
    this->BurstFireCounter = 0;
    this->ChargeTime = 0.00f;
    this->AccumulatedChargeTime = 0.00f;
    this->CurrentShotLogIndex = -1;
    this->bInitializedWeaponItem = false;
    this->bPendingDestroyDueToDurabilityOrStackCount = false;
    this->bCompletedAppliedAlterationsLoad = false;
    this->bCompletedWeaponLoad = false;
    this->bIsCosmeticLimited = false;
    this->bReplicatedAppliedAlterationsWithNoInstigator = false;
    this->bShouldFullyApplyVariantsOnEquip = false;
    this->bSecondaryFireAlwaysCancelSwimSprint = false;
    this->ChargeStatusPack = 0;
    this->ActiveAbility = NULL;
    this->AppliedItemWrap = NULL;
    this->CachedFXManager = NULL;
    this->CachedSignificanceManager = NULL;
    this->MuzzleSocketName = TEXT("Muzzle");
    this->MuzzleFalloffSocketName = TEXT("MuzzleFalloff");
    this->bForceOverrideGenerateOverlapEvents = false;
    this->MaxWeaponSwitchNetworkWaitTime = 0.10f;
    this->LastFireAbilityTime = 0.00f;
    this->EquipAnimation = NULL;
    this->ReloadAnimation = NULL;
    this->PrimaryAbilityAnimation = NULL;
    this->SecondaryAbilityAnimation = NULL;
    this->WeaponEquipMontage = NULL;
    this->WeaponReloadMontage = NULL;
    this->WeaponPrimaryAbilityMontage = NULL;
    this->WeaponSecondaryAbilityMontage = NULL;
    this->PoseOffsetAnimSequence = NULL;
    this->PoseOffsetAnimSequenceFemaleOverride = NULL;
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::Melee;
    this->WeaponPawnAnimSet = NULL;
    this->WeaponPawnAnimLayerOverlayClass = NULL;
    this->WeaponAdditiveAnimSet = NULL;
    this->WeaponPawnAnimsetOverride = NULL;
    this->UnableToPerformActionMontageOverride = NULL;
    this->ItemWrapModifier = NULL;
    this->LockOnTargetCandidate = NULL;
    this->bIgnoreTryToFireSlotCooldownRestriction = false;
    this->bFireConsumableAnalyticEvent = true;
}

bool AFortWeapon::WeaponDataIsValid() const {
    return IsValid(WeaponData);
}

bool AFortWeapon::WeaponDataHasMatchingGameplayTag(const FGameplayTag TagToCheck) const {
    return WeaponData && WeaponData->HasMatchingGameplayTag(TagToCheck);
}

bool AFortWeapon::WeaponDataHasAnyMatchingGameplayTags(const FGameplayTagContainer TagContainer) const {
    return WeaponData && WeaponData->HasAnyMatchingGameplayTags(TagContainer);
}

void AFortWeapon::UseWeaponDurability(float DurabilityScale) {
}

void AFortWeapon::UpdateDamageStartLocation() {
}

bool AFortWeapon::TryReloadAmmoFromAbility() {
    return false;
}

void AFortWeapon::StopWeaponFireFX() {
}

void AFortWeapon::StopForceFeedback() {
}

void AFortWeapon::SetWeaponVisibilityControllerOnly(const bool bDesiredVisibility, const bool bForceUpdate) {
}

void AFortWeapon::SetWeaponVisibility(const bool bDesiredVisibility, const bool bForceUpdate) {
    if (bForceUpdate || IsHidden() == bDesiredVisibility) {
        SetActorHiddenInGame(!bDesiredVisibility);
        OnWeaponVisibilityChanged(bDesiredVisibility, false);
    }
    // The trajectory is an attached actor, so its visibility is tracked separately.
    SetTrajectoryVisibility(bDesiredVisibility);
}

void AFortWeapon::SetWeaponPawnAnimsetOverride(UFortWeaponAnimSet* NewWeaponPawnAnimsetOverride) {
}

void AFortWeapon::SetWeaponData(UFortWeaponItemDefinition* InWeaponData) {
}

void AFortWeapon::SetTrajectoryVisibilityControllerOnly(AFortPlayerController* FortPlayerController, const bool bNewVisible) {
}

void AFortWeapon::SetTrajectoryVisibility(const bool bNewVisible) {
    if (AFortProjectileTrajectory* Trajectory = AttachedTrajectoryIndicator.Get()) {
        if (Trajectory->IsHidden() == bNewVisible) {
            Trajectory->SetActorHiddenInGame(!bNewVisible);
        }
    }
}

void AFortWeapon::SetTraceThroughPawnsLimit(int32 NewTraceThroughPawnsLimit) {
}

void AFortWeapon::SetTraceThroughPawns(bool bNewTraceThroughPawns) {
}

void AFortWeapon::SetTraceThroughLandscapeLimit(int32 NewTraceThroughTerrainLimit) {
}

void AFortWeapon::SetTraceThroughBuildingsLimit(int32 NewTraceThroughBuildingsLimit) {
}

void AFortWeapon::SetShouldDrawNativeReticle(bool bInShouldDrawReticle) {
}

bool AFortWeapon::SetHudKeyActionVisibilityByID(const FString& KeyActionId, bool bVisible) {
    return false;
}

bool AFortWeapon::SetHudKeyActionVisibility(int32 Index, bool bVisible) {
    return false;
}

void AFortWeapon::SetHudKeyActionsVisibility(const TArray<FWeaponHudKeyActionVisibility>& IndexVisibilityArray) {
}

bool AFortWeapon::SetHudKeyActionDescriptionByID(const FString& KeyActionId, FText InActionDescription) {
    return false;
}

bool AFortWeapon::SetHudKeyActionDescription(int32 Index, FText InActionDescription) {
    return false;
}

bool AFortWeapon::SetHiddenInGameOtherLocalControllersOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren) {
    return false;
}

bool AFortWeapon::SetHiddenInGameControllerOnly(USceneComponent* SceneComp, const bool NewHidden, const bool bPropagateToChildren) {
    return false;
}

void AFortWeapon::SetFireSoundPitchMultiplier(const float NewPitch) {
}

void AFortWeapon::ServerSetChargeState_Implementation(uint8 NewState) {
}
bool AFortWeapon::ServerSetChargeState_Validate(uint8 NewState) {
    return true;
}

void AFortWeapon::ServerResetShotReport_Implementation() {
}
bool AFortWeapon::ServerResetShotReport_Validate() {
    return true;
}

void AFortWeapon::ServerReleaseWeaponAbility_Implementation(const FGameplayAbilitySpecHandle& SpecHandle) {
}
bool AFortWeapon::ServerReleaseWeaponAbility_Validate(const FGameplayAbilitySpecHandle& SpecHandle) {
    return true;
}

void AFortWeapon::RestoreOriginalMaterials() {
}

void AFortWeapon::ResetTempWeaponMaterialOverride() {
}

void AFortWeapon::Reload() {
}

void AFortWeapon::PlayWeaponFireFX(bool bSecondaryFire) {
}

void AFortWeapon::PlayReloadFX(TEnumAsByte<EFortReloadFXState::Type> ReloadStage) {
}

void AFortWeapon::PlayNativeImpactFX(const FHitResult& HitResult, const FGameplayCueParameters& GameplayCueParameters) {
}

void AFortWeapon::PlayForceFeedback(bool bSecondaryFire, bool bPersistentFire, bool bImpact) {
}


void AFortWeapon::OnWeaponMontageStarted(UAnimMontage* WeaponMontage) {
}

void AFortWeapon::OnWeaponMontageBlendingOut(UAnimMontage* WeaponMontage, bool bInterrupted) {
}







void AFortWeapon::OnRep_ReplicatedWeaponModSlots() {
}

void AFortWeapon::OnRep_ReplicatedWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedCosmeticOverrideWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedAppliedAlterations() {
}

void AFortWeapon::OnRep_PrimaryAbilitySpecHandle() {
}

void AFortWeapon::OnRep_PhantomReserveAmmo() {
}

void AFortWeapon::OnRep_LastFireTimeVerified() {
}

void AFortWeapon::OnRep_EquippedWeaponDestroyWrapper() {
}

void AFortWeapon::OnRep_ChargeStatusPack() {
}

void AFortWeapon::OnRep_AmmoCount(int32 OldAmmoCount) {
}









void AFortWeapon::OnPawnMontageStarted(UAnimMontage* PawnMontage) {
}

void AFortWeapon::OnPawnMontageBlendingOut(UAnimMontage* PawnMontage, bool bInterrupted) {
}












void AFortWeapon::ModAmmo(int32 AmountToUse) {
}


void AFortWeapon::K2_ConsumeAmmo(int32 Quantity) {
}

bool AFortWeapon::IsSuppressed() const {
    return false;
}

bool AFortWeapon::IsReloading() const {
    return false;
}

bool AFortWeapon::IsProjectileWeapon() const {
    return false;
}

bool AFortWeapon::IsGauntlet() const {
    return false;
}

bool AFortWeapon::IsFiring() const {
    return false;
}

bool AFortWeapon::IsEquipped() const {
    return false;
}

bool AFortWeapon::InventoryOwnerHasInfiniteAmmo() const {
    return false;
}

bool AFortWeapon::HasInfiniteAmmo() const {
    return false;
}

void AFortWeapon::HandleBlueprintProbablyCosmeticStomp() {
}

float AFortWeapon::GetWeaponRateOfFireModifier() {
    return 0.0f;
}

UFortWeaponAnimSet* AFortWeapon::GetWeaponPawnAnimSet() const {
    return NULL;
}

void AFortWeapon::GetWeaponMeshes(TArray<USkeletalMeshComponentBudgeted*>& WeaponMeshes) const {
}

USkeletalMeshComponentBudgeted* AFortWeapon::GetWeaponMesh() const {
    return WeaponMesh;
}

FDataTableRowHandle AFortWeapon::GetWeaponDataWeaponStatHandle() const {
    return FDataTableRowHandle{};
}

TEnumAsByte<EFortWeaponTriggerType::Type> AFortWeapon::GetWeaponDataTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

FSlateBrush AFortWeapon::GetWeaponDataSmallPreviewImageBrush() const {
    return FSlateBrush{};
}

TSoftObjectPtr<UTexture2D> AFortWeapon::GetWeaponDataSmallPreviewImage() const {
    return NULL;
}

EFortRarity AFortWeapon::GetWeaponDataRarity() const {
    return EFortRarity::Common;
}

void AFortWeapon::GetWeaponDataPlayerGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const {
}

EFortItemType AFortWeapon::GetWeaponDataItemType() const {
    return WeaponData ? WeaponData->GetItemType() : EFortItemType::Max_None;
}

void AFortWeapon::GetWeaponDataGameplayTags(FGameplayTagContainer& GameplayTags) const {
    if (WeaponData) {
        WeaponData->GetOwnedGameplayTags(GameplayTags);
    }
}

UFortWorldItemDefinition* AFortWeapon::GetWeaponDataAmmoWorldItemDefinition() const {
    return NULL;
}

UFortWeaponItemDefinition* AFortWeapon::GetWeaponData() const {
    return WeaponData;
}

EFortWeaponChargeStateForFireFX AFortWeapon::GetWeaponChargeStateForFireFX() const {
    return EFortWeaponChargeStateForFireFX::Partial;
}

UFortWeaponAdditiveAnimSet* AFortWeapon::GetWeaponAdditiveAnimSet() const {
    return NULL;
}

FGuid AFortWeapon::GetTrackerGuid() const {
    return FGuid{};
}

int32 AFortWeapon::GetTraceThroughPawnsLimit() const {
    return TraceThroughPawnsLimit;
}

bool AFortWeapon::GetTraceThroughPawns() const {
    return bTraceThroughPawns;
}

int32 AFortWeapon::GetTraceThroughLandscapeLimit() const {
    return TraceThroughLandscapeLimit;
}

int32 AFortWeapon::GetTraceThroughBuildingsLimit() const {
    return TraceThroughBuildingsLimit;
}

float AFortWeapon::GetTimeToNextFire() const {
    return 0.0f;
}

bool AFortWeapon::GetSupportsAutoFireAtReticleTargetMode() const {
    return false;
}

FColor AFortWeapon::GetReticleColor() const {
    return FColor{};
}

int32 AFortWeapon::GetRemainingAmmo() const {
    return 0;
}

float AFortWeapon::GetReloadTime() const {
    return 0.0f;
}

float AFortWeapon::GetReloadProgress() const {
    return 0.0f;
}

UAnimMontage* AFortWeapon::GetReloadAnimation() const {
    return ReloadAnimation;
}

float AFortWeapon::GetRange() const {
    return 0.0f;
}

float AFortWeapon::GetProjectileSpeed(float ChargePercent) const {
    return 0.0f;
}

float AFortWeapon::GetProjectilePitchOffset() const {
    return ProjectilePitchOffset;
}

void AFortWeapon::GetPlayerActiveGrantedGameplayTags(FGameplayTagContainer& GameplayTags) const {
}

bool AFortWeapon::GetPickupInstigatorData(int32& InstigatorHandle, FPickupInstigatorData& InstigatorData) const {
    return false;
}

FTransform AFortWeapon::GetMuzzleSocketTransform(int32 PatternIndex) const {
    return FTransform{};
}

FName AFortWeapon::GetMuzzleSocketName(int32 PatternIndex) const {
    return NAME_None;
}

FVector AFortWeapon::GetMuzzleLocation_Implementation(int32 PatternIndex) const {
    return FVector{};
}

float AFortWeapon::GetMeleeAttackPlayRate() {
    return 0.0f;
}

int32 AFortWeapon::GetMagazineAmmoCount() const {
    return 0;
}

int32 AFortWeapon::GetLocalRemainingAmmo() const {
    return 0;
}

int32 AFortWeapon::GetLocalMagazineAmmoCount() const {
    return 0;
}

bool AFortWeapon::GetIsTargeting() const {
    return bIsTargeting;
}

bool AFortWeapon::GetIsChargingWeapon() const {
    return bIsChargingWeapon;
}

FGuid AFortWeapon::GetInventoryGUID() const {
    return FGuid{};
}

TArray<FWeaponHudData> AFortWeapon::GetHudKeyActionData() const {
    return TArray<FWeaponHudData>();
}

float AFortWeapon::GetFiringRate() const {
    return 0.0f;
}

FVector AFortWeapon::GetDamageStartLocation(FVector& AimDir, int32 PatternIndex) const {
    return FVector{};
}

float AFortWeapon::GetCurrentMaxChargePercent() const {
    return 0.0f;
}

TEnumAsByte<EFortWeaponCoreAnimation::Type> AFortWeapon::GetCoreAnimation() const {
    return EFortWeaponCoreAnimation::Melee;
}

float AFortWeapon::GetChargeToMinPercent() const {
    return 0.0f;
}

float AFortWeapon::GetChargeToAutoDischarge() const {
    return 0.0f;
}

float AFortWeapon::GetChargeTime() const {
    return ChargeTime;
}

float AFortWeapon::GetChargePercent() const {
    return 0.0f;
}

USoundBase* AFortWeapon::GetChargedWeaponFireSound_Implementation(EFortWeaponSoundState::Type Channel, const bool bSecondaryFire) const {
    return NULL;
}

int32 AFortWeapon::GetBulletsPerClip() const {
    return 0;
}

int32 AFortWeapon::GetAmmoCostPerFire(float ChargePercentage) const {
    return 0;
}

TArray<UFortAlterationItemDefinition*> AFortWeapon::GetAlterations() const {
    return TArray<UFortAlterationItemDefinition*>();
}

float AFortWeapon::GetAccumulatedChargeTime() const {
    return AccumulatedChargeTime;
}

void AFortWeapon::GameplayCue_Weapons_Activation(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortWeapon::GameplayCue_Impact(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

bool AFortWeapon::DoesHaveOverrideWrap() const {
    return false;
}

FColor AFortWeapon::DetermineReticleColor() {
    return FColor{};
}

void AFortWeapon::ClientReportShotFlags_Implementation(uint32 ShotFlags, int32 ShotIndex) {
}

void AFortWeapon::ClientGivenTo_Implementation(APawn* P) {
}

void AFortWeapon::CheckPendingFire() {
}

void AFortWeapon::CancelActiveAbility() {
}

void AFortWeapon::AttemptApplyOverrideWrapToActor(AActor* Actor) const {
}

void AFortWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeapon, bIsEquippingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsReloadingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsChargingWeapon);
    DOREPLIFETIME(AFortWeapon, bDisableEquipAnimation);
    DOREPLIFETIME(AFortWeapon, WeaponData);
    DOREPLIFETIME(AFortWeapon, CosmeticOverrideWeaponData);
    DOREPLIFETIME(AFortWeapon, EquippedWeaponDestroyWrapperRepCounter);
    DOREPLIFETIME(AFortWeapon, LastFireTimeVerified);
    DOREPLIFETIME(AFortWeapon, ItemEntryGuid);
    DOREPLIFETIME(AFortWeapon, TrackerGuid);
    DOREPLIFETIME(AFortWeapon, WeaponLevel);
    DOREPLIFETIME(AFortWeapon, AmmoCount);
    DOREPLIFETIME(AFortWeapon, PhantomReserveAmmo);
    DOREPLIFETIME(AFortWeapon, ChargeStatusPack);
    DOREPLIFETIME(AFortWeapon, ActiveAbility);
    DOREPLIFETIME(AFortWeapon, PrimaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, SecondaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ReloadAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ImpactAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ReticleTraceOverrideSpecHandle);
    DOREPLIFETIME(AFortWeapon, AppliedAlterations);
    DOREPLIFETIME(AFortWeapon, WeaponModSlots);
}


