#include "FortPhysicsObjectComponent.h"
#include "Net/UnrealNetwork.h"

UFortPhysicsObjectComponent::UFortPhysicsObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->BuoyancyComponent = NULL;
    this->CustomGravityMultiplier = 1.00f;
    this->PhysicsPreset = NULL;
    this->EffectsDataOverride = NULL;
    this->PhysicalMaterialOverride = NULL;
    this->BuoyancyAssetOverride = NULL;
    this->ImpactDamageDataOverride = NULL;
    this->NavigationDataOverride = NULL;
    this->bHasSetupPhysicsObject = false;
    this->bServerHasSetupPhysicsObject = false;
    this->bForceStartActiveAndAwake = false;
    this->bHasComponentActivated = false;
    this->PhysicsObjectAwakeState = EFortPhysicsObjectAwakeState::Invalid;
    this->SimulatingComponent = NULL;
}

void UFortPhysicsObjectComponent::WakeUpPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::WakeUp() {
}

void UFortPhysicsObjectComponent::SetSimulatePhysics(bool bSimulate) {
}

void UFortPhysicsObjectComponent::SetPhysicsPreset(const UFortPhysicsObjectPreset* InPhysicsPreset) {
}

void UFortPhysicsObjectComponent::SetPhysicalMaterialOverride(const UPhysicalMaterial* InPhysicalMaterialOverride) {
}

void UFortPhysicsObjectComponent::SetNavigationDataOverride(const UFortPhysicsObjectNavigationData* InNavigationDataOverride) {
}

void UFortPhysicsObjectComponent::SetImpactInstigatorForPhysicsObject(AActor* PhysicsObject, AActor* Instigator) {
}

void UFortPhysicsObjectComponent::SetImpactDamageDataOverride(const UFortPhysicsObjectImpactDamageData* InImpactDamageData) {
}

void UFortPhysicsObjectComponent::SetCollisionEffectsDataOverride(const UFortPhysicsObjectCollisionEffectsData* InEffectsDataOverride) {
}

void UFortPhysicsObjectComponent::SetBuoyancyAssetOverride(const UFortPhysicsObjectBuoyancyData* InBuoyancyAssetOverride) {
}

void UFortPhysicsObjectComponent::PutToSleepPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::PutToSleep() {
}

void UFortPhysicsObjectComponent::OnRep_AwakeState() {
}

bool UFortPhysicsObjectComponent::IsAwake() const {
    return false;
}

void UFortPhysicsObjectComponent::IncrementNeverSleep() {
}

void UFortPhysicsObjectComponent::IgnorePawnForCollision(AFortPawn* Pawn, bool bIgnore) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPrimitiveComponent* UFortPhysicsObjectComponent::GetSimulatingComponent() const {
    return SimulatingComponent;
}

void UFortPhysicsObjectComponent::GetMovingStateData(AActor*& OutInstigator, FHitResult& OutHitResult, float& OutLinearSpeed, EFortPhysicsObjectMovementState& OutMovementState) const {
}

float UFortPhysicsObjectComponent::GetGravity(bool bUseGravityMultiplier) const {
    return 0.0f;
}

void UFortPhysicsObjectComponent::DeferredSetupPhysicsObject() {
}

void UFortPhysicsObjectComponent::DecrementNeverSleep() {
}

void UFortPhysicsObjectComponent::DeactivatePhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::ClearImpactInstigatorFromPhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::ActivatePhysicsObject(AActor* PhysicsObject) {
}

void UFortPhysicsObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPhysicsObjectComponent, bServerHasSetupPhysicsObject);
    DOREPLIFETIME(UFortPhysicsObjectComponent, bForceStartActiveAndAwake);
    DOREPLIFETIME(UFortPhysicsObjectComponent, PhysicsObjectAwakeState);
}


