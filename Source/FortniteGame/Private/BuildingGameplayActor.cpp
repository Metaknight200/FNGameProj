#include "BuildingGameplayActor.h"
#include "EBuildingActorComponentCreationPolicy.h"

ABuildingGameplayActor::ABuildingGameplayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AbilitySystemComponentCreationPolicy = EBuildingActorComponentCreationPolicy::Always;
    this->bUseTickManager = false;
    this->bAllowInteract = true;
    this->AbilitySet = NULL;
    this->InherentAbilitySets[0] = NULL;
    this->InherentAbilitySets[1] = NULL;
    this->InherentAbilitySets[2] = NULL;
    this->InherentAbilitySets[3] = NULL;
    this->InherentAbilitySets[4] = NULL;
    this->bAllowRidingOnActor = false;
    this->bIgnoreInstigatorCollision = false;
    this->bAddOwnerVelocity = false;
    this->AbilitySourceLevel = 0;
    this->bApplyDefaultEnabledAbilityBucketsOnInit = true;
    this->bUseSimpleActorTouchSetupForAbilityBuckets = true;
    this->bCanBeMarked = true;
    this->bBlockMarking = true;
    this->bShowInteractKeybind = true;
    this->RegisteredTouchComponent = NULL;
    this->PostProcessOverlapBlendWeight = 0.00f;
    this->CustomInteractionWidget = NULL;
}

void ABuildingGameplayActor::SetTouchComponentForAbilityDeliveryInfo(UPrimitiveComponent* PrimitiveComponent) {
}

void ABuildingGameplayActor::SetInitialVelocity(const FVector& InitialVelocity) {
}

void ABuildingGameplayActor::SetIgnoreInstigatorCollision(bool bShouldIgnore) {
}

void ABuildingGameplayActor::SetAbilitySourceLevel(int32 NewAbilitySourceLevel) {
}

void ABuildingGameplayActor::OverrideMarkerDisplayInfo(const FMarkedActorDisplayInfo& NewDisplayInfo) {
}


void ABuildingGameplayActor::OnRegisteredTouchComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuildingGameplayActor::OnRegisteredTouchComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ABuildingGameplayActor::K2_RemoveGameplayCue(FGameplayTag GameplayCueTag) {
}

void ABuildingGameplayActor::K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters) {
}

void ABuildingGameplayActor::K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) {
}

void ABuildingGameplayActor::K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context) {
}

FTransform ABuildingGameplayActor::GetTargetingSourceTransform_Implementation(EFortAbilityTargetingSource Source) const {
    return FTransform{};
}

void ABuildingGameplayActor::ForceChangeOwnerInstigator(AFortPlayerController* NewInstigator) {
}

void ABuildingGameplayActor::EnableAbilityDeliveryInfo(FGameplayTag BucketTag) {
}

void ABuildingGameplayActor::DisableAbilityDeliveryInfo(FGameplayTag BucketTag) {
}

bool ABuildingGameplayActor::AcceptsEmoteSprays_Implementation() const {
    return false;
}


