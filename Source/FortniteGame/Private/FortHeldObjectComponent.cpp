#include "FortHeldObjectComponent.h"
#include "Net/UnrealNetwork.h"

UFortHeldObjectComponent::UFortHeldObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PlayerAttachmentScaleRule = EAttachmentRule::SnapToTarget;
    this->bAllowObjectToBeHeldInVehicle = false;
    this->bBlocksVehicleDriverSeat = true;
    this->bApplyAngularImpulseOnThrow = false;
    this->PlacementPreviewClass = NULL;
    this->GuideProjectileClass = NULL;
    this->bUsePreviewMaterial = false;
    this->bCollisionBlockedByPawns = false;
    this->bDroppedFromWeaponSwap = false;
    this->HeldObjectState = EHeldObjectState::Unheld;
    this->OwningPawn = NULL;
    this->ProjectileMovementComponent = NULL;
    this->PhysicsObjectComponent = NULL;
    this->ReferenceMeshComponent = NULL;
    this->PlacementPreviewActor = NULL;
    this->GuideProjectile = NULL;
}

void UFortHeldObjectComponent::TurnOnCollisionSettings() {
}

void UFortHeldObjectComponent::TurnOffCollisionSettings() {
}

void UFortHeldObjectComponent::ThrownObjectStopped(const FHitResult& ImpactResult) {
}

void UFortHeldObjectComponent::ThrownObjectEnteredWater(AFortWaterBodyActor* WaterBody, UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody) {
}

void UFortHeldObjectComponent::ThrowHeldObject(const FVector& DetachLocation, const FRotator& ThrowDirection) {
}

void UFortHeldObjectComponent::SetMeshComponent(UMeshComponent* InMeshComponent) {
}

void UFortHeldObjectComponent::RemoveHeldObjectFromVehicle() {
}

void UFortHeldObjectComponent::PlaceHeldObject() {
}

void UFortHeldObjectComponent::PickupHeldObject(AFortPlayerPawn* PlayerPawn) {
}

void UFortHeldObjectComponent::OnWeaponUnequipped() {
}

void UFortHeldObjectComponent::OnThrowComplete() {
}

void UFortHeldObjectComponent::OnRep_UsePreviewMaterial() {
}

void UFortHeldObjectComponent::OnRep_OwningPawn(AFortPlayerPawn* LastOwningPawn) {
}

void UFortHeldObjectComponent::OnRep_bCollisionBlockedByPawns() {
}

bool UFortHeldObjectComponent::IsUnheld() const {
    return false;
}

bool UFortHeldObjectComponent::IsThrown() const {
    return false;
}

bool UFortHeldObjectComponent::IsPlaced() const {
    return false;
}

bool UFortHeldObjectComponent::IsHeldInVehicle() const {
    return false;
}

bool UFortHeldObjectComponent::IsHeld() const {
    return false;
}

bool UFortHeldObjectComponent::IsDropped() const {
    return false;
}

void UFortHeldObjectComponent::HoldObjectInVehicle() {
}

void UFortHeldObjectComponent::HandleOwnerDestroyed(AActor* DestroyedActor) {
}

void UFortHeldObjectComponent::HandleOwnerAsBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortHeldObjectComponent::HandleGuideProjectileDestroyed(AActor* DestroyedActor) {
}

void UFortHeldObjectComponent::GuideProjectileStopped(const FHitResult& ImpactResult) {
}

float UFortHeldObjectComponent::GetSweptTraceRadius() const {
    return 0.0f;
}

UMeshComponent* UFortHeldObjectComponent::GetMeshComponent() const {
    return NULL;
}

float UFortHeldObjectComponent::GetMaxSpeed() const {
    return 0.0f;
}

AFortPlayerPawn* UFortHeldObjectComponent::GetInstigator() const {
    return NULL;
}

float UFortHeldObjectComponent::GetGravityZ() const {
    return 0.0f;
}

float UFortHeldObjectComponent::GetGravityScale() const {
    return 0.0f;
}

bool UFortHeldObjectComponent::GetBlocksVehicleDriverSeat() const {
    return bBlocksVehicleDriverSeat;
}

bool UFortHeldObjectComponent::GetAllowObjectToBeHeldInVehicle() const {
    return bAllowObjectToBeHeldInVehicle;
}

void UFortHeldObjectComponent::DropObjectHeldInVehicle() {
}

void UFortHeldObjectComponent::DropHeldObject() {
}

bool UFortHeldObjectComponent::CanInteract(const AFortPlayerPawn* RequestingPawn) {
    return false;
}

void UFortHeldObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHeldObjectComponent, bUsePreviewMaterial);
    DOREPLIFETIME(UFortHeldObjectComponent, bCollisionBlockedByPawns);
    DOREPLIFETIME(UFortHeldObjectComponent, HeldObjectState);
    DOREPLIFETIME(UFortHeldObjectComponent, OwningPawn);
    DOREPLIFETIME(UFortHeldObjectComponent, ObjectPickupRotation);
    DOREPLIFETIME(UFortHeldObjectComponent, GuideProjectile);
}


