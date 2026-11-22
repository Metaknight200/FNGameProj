#include "BuildingProp.h"

ABuildingProp::ABuildingProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCreatePhysicsObjectComponent = true;
    this->bIsGameFrameworkComponentReceiver = true;
    this->BuildingType = EFortBuildingType::Prop;
    this->bPropagatesBounceEffects = false;
    this->bSuppressSimpleInteractionWidgetForTouch = true;
    this->bCanBeMarked = false;
    this->bBlockMarking = false;
    this->bIsBuildingVolume = false;
    this->bDoNotBlockMarkerTraceWhenOverlappingPlayer = false;
}

void ABuildingProp::SetAsBuildingVolume(const bool bNewValue) {
}

bool ABuildingProp::IsBuildingVolume() {
    return false;
}

void ABuildingProp::BP_GetEyesViewpoint_Implementation(FVector& OutLocation, FRotator& OutRotation) const {
}

float ABuildingProp::BlueprintModifyIncomingDamage_Implementation(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}


