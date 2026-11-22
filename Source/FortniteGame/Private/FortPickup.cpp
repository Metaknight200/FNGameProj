#include "FortPickup.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "FortLinkToActorComponent.h"
#include "FortWaterInteractionComponent.h"
#include "Net/UnrealNetwork.h"

AFortPickup::AFortPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->bUsePickupWidget = true;
    this->bSuppressInteractionWidget = false;
    this->bWeaponsCanBeAutoPickups = true;
    this->bAutoUpgradeWeapons = false;
    this->bDoServerHandlePickupTrace = true;
    this->SimulatingTooLongLength = 30.00f;
    this->PickupSourceTypeFlags = EFortPickupSourceTypeFlag::Other;
    this->PickupSpawnSource = EFortPickupSpawnSource::Unset;
    this->OptionalOwnerID = -1;
    this->PrimaryPickupDummyItem = NULL;
    this->TouchCapsule = (UCapsuleComponent*)RootComponent;
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->WaterInteractionComponent = CreateDefaultSubobject<UFortWaterInteractionComponent>(TEXT("WaterComponent"));
    this->LinkToActorComponent = CreateDefaultSubobject<UFortLinkToActorComponent>(TEXT("LinkToActorComponent"));
    this->bPickedUp = false;
    this->bSplitOnPickup = false;
    this->bTossedFromContainer = false;
    this->bForceHideMinimapIndicator = false;
    this->bCombinePickupsWhenTossCompletes = false;
    this->bServerStoppedSimulation = false;
    this->bClientUseInterpolationOnly = true;
    this->ServerImpactSoundFlash = 0;
    this->LastLandedSoundPlayTime = 0.00f;
    this->OverrideInteractAimRadius = 0.00f;
    this->LandSoundZForceThreshold = 250.00f;
    this->DefaultFlyTime = 1.50f;
    this->bForceDefaultFlyTime = false;
    this->DroppedLoopingSoundComp = NULL;
    this->LandedSoundOverride = NULL;
    this->PawnWhoDroppedPickup = NULL;
    this->CachedSpecialActorIdx = -1;
    this->MinimapIndicator = NULL;
    this->HUDLabel = NULL;
    this->bRandomRotation = false;
    this->DespawnTime = 0.00f;
    this->StormDespawnTime = 0.00f;
    this->StartSimulatingTime = 0.00f;
}

void AFortPickup::TossPickup(const FVector FinalLocation, AFortPawn* ItemOwner, int32 OverrideMaxStackCount, bool bToss, bool bShouldCombinePickupsWhenTossCompletes, const EFortPickupSourceTypeFlag InPickupSourceTypeFlags, const EFortPickupSpawnSource InPickupSpawnSource) {
}

void AFortPickup::SetPickedUp(const bool bInPickedUp) {
}

void AFortPickup::SetOverrideInteractRadius(float NewRadius) {
}

void AFortPickup::SetDespawnTime(float InDespawnTime) {
}

void AFortPickup::SetCombinePickupsWhenTossCompletes(const bool CombinePickupsWhenTossCompletes) {
}

bool AFortPickup::PickedUp() const {
    return false;
}

void AFortPickup::OnServerStopCallback(const FHitResult& Hit) {
}

void AFortPickup::OnServerBounceCallback(const FHitResult& Hit, const FVector& OldVelocity) {
}

void AFortPickup::OnRep_TossedFromContainer() {
}

void AFortPickup::OnRep_ServerStoppedSimulation() {
}

void AFortPickup::OnRep_ServerImpactSoundFlash() {
}

void AFortPickup::OnRep_PrimaryPickupItemEntry() {
}

void AFortPickup::OnRep_PickupOwnerData() {
}

void AFortPickup::OnRep_PickupLocationData() {
}

void AFortPickup::OnRep_ForceHideMinimapIndicator() {
}

void AFortPickup::OnRep_bPickedUp() {
}

bool AFortPickup::IsSkeletalMeshComponent() const {
    return false;
}

void AFortPickup::HandleConnectedActorDestroyed() {
}

FGuid AFortPickup::GetTrackerGuid() const {
    return FGuid{};
}

FFortItemEntry AFortPickup::GetPrimaryItemEntry() const {
    return FFortItemEntry{};
}

UStaticMeshComponent* AFortPickup::GetPickupStaticMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFortPickup::GetPickupSkeletalMeshComponent() const {
    return NULL;
}

AFortPickupEffect* AFortPickup::GetPickupEffectBlueprint() const {
    return NULL;
}

AFortPawn* AFortPickup::GetPawnWhoDroppedPickup() const {
    return PawnWhoDroppedPickup;
}

AFortPlayerController* AFortPickup::GetOwnerPlayerController() {
    return NULL;
}

float AFortPickup::GetMovementCapsuleRadius() const {
    return 0.0f;
}

float AFortPickup::GetMovementCapsuleHalfHeight() const {
    return 0.0f;
}

int32 AFortPickup::GetItemEntryNum() const {
    return 0;
}

FFortItemEntry AFortPickup::GetItemEntry(int32 ItemIndex) const {
    return FFortItemEntry{};
}

bool AFortPickup::GetInteractText(FText& InteractText) {
    return false;
}

bool AFortPickup::GetInteractErrorText(FText& InteractErrorText) {
    return false;
}

FText AFortPickup::GetDisplayName() {
    return FText::GetEmpty();
}

void AFortPickup::BlueprintSetPickupTarget(AFortPawn* PickupTarget, bool bPlayPickupSound) {
}

bool AFortPickup::BlueprintGetInteractErrorText_Implementation(FText& OverrideInteractErrorText) {
    return false;
}

bool AFortPickup::BlueprintCanInteract_Implementation(const AFortPlayerPawn* FortPawn, bool& bCanInteractOverride) {
    return false;
}

bool AFortPickup::AllowLongRangeAutoPickup_Implementation(const AFortPlayerPawn* FortPawn) {
    return false;
}

void AFortPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPickup, PrimaryPickupItemEntry);
    DOREPLIFETIME(AFortPickup, MultiItemPickupEntries);
    DOREPLIFETIME(AFortPickup, PickupLocationData);
    DOREPLIFETIME(AFortPickup, OptionalOwnerID);
    DOREPLIFETIME(AFortPickup, bPickedUp);
    DOREPLIFETIME(AFortPickup, bTossedFromContainer);
    DOREPLIFETIME(AFortPickup, bForceHideMinimapIndicator);
    DOREPLIFETIME(AFortPickup, bCombinePickupsWhenTossCompletes);
    DOREPLIFETIME(AFortPickup, bServerStoppedSimulation);
    DOREPLIFETIME(AFortPickup, ServerImpactSoundFlash);
    DOREPLIFETIME(AFortPickup, OverrideInteractAimRadius);
    DOREPLIFETIME(AFortPickup, PawnWhoDroppedPickup);
    DOREPLIFETIME(AFortPickup, SpecialActorID);
    DOREPLIFETIME(AFortPickup, bRandomRotation);
}


