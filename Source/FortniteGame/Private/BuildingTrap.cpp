#include "BuildingTrap.h"
#include "Components/SceneComponent.h"
#include "AthenaTrapAIPerceptionStimuliSourceComponent.h"
#include "EBuildingActorComponentCreationPolicy.h"
#include "FortBuildingTrapSet.h"
#include "Net/UnrealNetwork.h"

ABuildingTrap::ABuildingTrap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingAttributeSetClass = UFortBuildingTrapSet::StaticClass();
    this->AbilitySystemComponentCreationPolicy = EBuildingActorComponentCreationPolicy::Always;
    this->bRefreshFullSaveDataBeforeZoneSave = true;
    this->BuildingType = EFortBuildingType::Trap;
    this->bBlocksAttachmentPlacement = true;
    this->bCameraOnlyCollision = true;
    this->bPropagatesBounceEffects = false;
    this->BuildingPlacementType = EPlacementType::Grid;
    this->TraceLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Trace Location"));
    this->PlacementSkeletalMesh = NULL;
    this->TrapRangeMesh = NULL;
    this->TrapPreviewMesh = NULL;
    this->TrapData = NULL;
    this->bShouldAffectAllPawnsInMinigames = true;
    this->bTriggerAbilityOnEndoverlap = false;
    this->AbilitySet = NULL;
    this->AttachedTo = NULL;
    this->bTargetWithAttachedTo = true;
    this->LastAttachedTo = NULL;
    this->DelayBeforeDestroyAfterDurabilityExpired = 1.50f;
    this->SavedDurabilityPct = 1.00f;
    this->ObstructedTargetRecheckInterval = -1.00f;
    this->ShouldTriggerTraceOffsets.AddDefaulted(1);
    this->bIgnoreBuildingObstructions = false;
    this->bOwnAllFacesOfAttachedToActor = false;
    this->AlternateMaterialInstance = NULL;
    this->StimSourceComponent = CreateDefaultSubobject<UAthenaTrapAIPerceptionStimuliSourceComponent>(TEXT("Trap AI Perception Stimuli Source Component"));
    this->TrapLevel = 0;
    this->OriginalTrapLevel = 0;
    this->bTrapRecharging = false;
    this->TraceLocation->SetupAttachment(RootComponent);
}

bool ABuildingTrap::UseAttachedToWhenTargeted() {
    return false;
}

void ABuildingTrap::TriggerOverlapEnd(AActor* OtherActor) {
}

bool ABuildingTrap::TriggerIfAppropriate() {
    return false;
}

void ABuildingTrap::SwitchToAlternateMaterial_Implementation() {
}

void ABuildingTrap::SpawnedFromItemDefinition(const UFortTrapItemDefinition* ItemDef, int32 InTrapLevel) {
}

void ABuildingTrap::SetTeamForMinigameStart() {
}

void ABuildingTrap::SetAttachedTo(ABuildingSMActor* ActorAttachedTo) {
}

void ABuildingTrap::ResetTrapLevel() {
}

void ABuildingTrap::ResetTeamOnMinigameEnd() {
}

void ABuildingTrap::OnTriggerTouch(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuildingTrap::OnTriggerEndTouch(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingTrap::OnRep_ReplicatedAppliedAlterations() {
}

void ABuildingTrap::OnRep_bTrapRecharging() {
}

void ABuildingTrap::OnRep_AttachedTo() {
}











void ABuildingTrap::OnBlockingBuildingDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool ABuildingTrap::HasDurability() const {
    return false;
}

int32 ABuildingTrap::GetTrapRating() const {
    return 0;
}

int32 ABuildingTrap::GetTrapLevel() const {
    return 0;
}

TArray<AActor*> ABuildingTrap::GetTouchingDamageTargets(const FFortTargetFilter& Filter) const {
    return TArray<AActor*>();
}

float ABuildingTrap::GetReloadTime() {
    return 0.0f;
}

FGameplayTag ABuildingTrap::GetReloadBeginGameplayCueTag() const {
    return FGameplayTag{};
}

int32 ABuildingTrap::GetNumberOfRemainingDelayedAttachingAttempts_Implementation() const {
    return 0;
}

float ABuildingTrap::GetMaxDurability() const {
    return 0.0f;
}

float ABuildingTrap::GetFireDelay() const {
    return 0.0f;
}

float ABuildingTrap::GetDurabilityPercent() const {
    return 0.0f;
}

FGameplayTag ABuildingTrap::GetDelayBeginGameplayCueTag() const {
    return FGameplayTag{};
}

float ABuildingTrap::GetDamageDelay() const {
    return 0.0f;
}

FVector ABuildingTrap::GetCenter() {
    return FVector{};
}

ABuildingSMActor* ABuildingTrap::GetBuildingAttachedTo() const {
    return NULL;
}

float ABuildingTrap::GetArmTime() {
    return 0.0f;
}

TArray<UFortAlterationItemDefinition*> ABuildingTrap::GetAlterations() const {
    return TArray<UFortAlterationItemDefinition*>();
}

FGameplayTag ABuildingTrap::GetActivateTrapGameplayCueTag() const {
    return FGameplayTag{};
}

void ABuildingTrap::GameplayCue_Abilities_Activation_Traps(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void ABuildingTrap::FinishTrigger() {
}

bool ABuildingTrap::BP_ShouldTrigger_Implementation(const TArray<AActor*>& TouchingActors) const {
    return false;
}


void ABuildingTrap::AttemptRetrigger(float Seconds) {
}

void ABuildingTrap::AddTriggerComponent(UPrimitiveComponent* TriggerComponent) {
}

void ABuildingTrap::AddDamageComponent(UPrimitiveComponent* DamageComponent) {
}

void ABuildingTrap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrap, TrapData);
    DOREPLIFETIME(ABuildingTrap, AppliedAlterations);
    DOREPLIFETIME(ABuildingTrap, AttachedTo);
    DOREPLIFETIME(ABuildingTrap, TrapLevel);
    DOREPLIFETIME(ABuildingTrap, OriginalTrapLevel);
    DOREPLIFETIME(ABuildingTrap, bTrapRecharging);
}


