#include "FortCharacterVehicle.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortPooledSkelMeshComponent.h"
#include "FortSkeletalAudioComponent.h"
#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"

AFortCharacterVehicle::AFortCharacterVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AIControllerClass = NULL;
    this->VocalChords.AddDefaulted(1);
    this->bDestroyBuildingSMActorOnForceExit = true;
    this->bDestroyOnLastExit = false;
    this->VTDMode = 0;
    this->OverrideItemWrap = NULL;
    this->bForcedToAlwaysSpawn = false;
    this->bAllowInteractBetweenFortVolumes = true;
    this->EmoteMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EmoteMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->SpawnPropOnEmoteScalar = 0.00f;
    this->EmoteFoleyAudioComponent = CreateDefaultSubobject<UFortSkeletalAudioComponent>(TEXT("EmoteFoleyAudioComponent"));
    this->SeatSwitchCooldown = 0.00f;
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->OverrideAbilitySystemComponent = NULL;
    this->DriverAnimClass = NULL;
    this->PassengerAnimClass = NULL;
    this->OstrichSet = NULL;
    this->StartupAbilitySet = NULL;
    this->CameraModeClass = NULL;
    this->PassengerCameraModeClass = NULL;
    this->MinBoostDuration = 0.00f;
    this->MaxBoostDuration = 0.00f;
    this->FullyChargedJumpTime = 0.00f;
    this->MinHoldDuration = 0.00f;
    this->DriverExitLaunchScale = 0.00f;
    this->PassengerExitLaunchScale = 0.00f;
    this->ExtraInteractTraceRange = 0.00f;
    this->MinDistForInteract = 0.00f;
    this->DashMovementLockDuration = 0.00f;
    this->SeatTransitionDuration = 0.00f;
    this->ClearMoveIgnoreActorsDelay = 0.00f;
    this->HealthIndicatorVerticalOffset = 0.00f;
    this->SplashDamageMinPercent = 0.00f;
    this->SplashDamageFalloffRange = 0.00f;
    this->JumpPressTime = 0.00f;
    this->bDidChargeJump = false;
    this->OstrichAnimInstance = NULL;
    this->IndicatorAudibleDistance = 0.00f;
    this->IndicatorIcon = NULL;
    this->EmoteMesh->SetupAttachment(*p_Mesh_Parent->ContainerPtrToValuePtr<USceneComponent*>(this));
}


void AFortCharacterVehicle::StopEmoting() {
}

bool AFortCharacterVehicle::ShouldShowSoundIndicator_Implementation() const {
    return false;
}

void AFortCharacterVehicle::SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes) {
}


void AFortCharacterVehicle::OnRep_OverrideWrap() {
}

void AFortCharacterVehicle::OnRep_OverrideAbilitySystemComponent() {
}

void AFortCharacterVehicle::OnPawnExitVehicle_Implementation(AFortPlayerPawn* PlayerPawn, FName ExitSocketName) {
}






USkeletalMeshComponent* AFortCharacterVehicle::GetSkeletalMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFortCharacterVehicle::GetMechMesh() const {
    return NULL;
}

bool AFortCharacterVehicle::GetIsChargedJumpActive() const {
    return false;
}

bool AFortCharacterVehicle::GetHasGunner() const {
    return false;
}

USkeletalMeshComponent* AFortCharacterVehicle::GetEmoteMesh() const {
    return EmoteMesh;
}

UAbilitySystemComponent* AFortCharacterVehicle::GetAbilitySystemComponent() const {
    return NULL;
}


bool AFortCharacterVehicle::DoesDamageCauserPreventDamageFromBeingNulled_Implementation(AActor* DamageCauser) {
    return false;
}

bool AFortCharacterVehicle::BP_CanInteract_Implementation(AFortPlayerController* FortPC) {
    return false;
}

bool AFortCharacterVehicle::AllowInteractionBetweenFortVolume() const {
    return false;
}

void AFortCharacterVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCharacterVehicle, SoftOverrideItemWrap);
    DOREPLIFETIME(AFortCharacterVehicle, OverrideAbilitySystemComponent);
}


