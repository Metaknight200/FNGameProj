#include "FortPhysicsObjectPreset.h"

UFortPhysicsObjectPreset::UFortPhysicsObjectPreset() {
    this->NetworkPolicy = EFortPhysicsObjectNetworkPolicy::ClientOnly;
    this->PlayerImpulseMagnitude = 0.00f;
    this->bIsAffectedByPlayerMovement = true;
    this->bCanAffectPlayerMovement = false;
    this->bImpulseOnPlayerInteraction = false;
    this->bCanInteractWithVehicles = false;
    this->BuoyancyAsset = NULL;
    this->bCanInteractWithWater = false;
    this->bRestorePreviousCollisionProfileOnDeactivate = false;
    this->DefaultPontoonRadius = 0.00f;
    this->MinTimeInWaterToSink = 10.00f;
    this->bStartActive = true;
    this->bStartAwake = true;
    this->bShouldEnableTick = true;
    this->bShouldImpulseOnDamage = false;
    this->bOverrideLinearDamping = false;
    this->bOverrideAngularDamping = false;
    this->bOverrideMassKg = false;
    this->bOverrideMassScale = false;
    this->bOverrideGravity = true;
    this->LinearDampingOverride = 0.00f;
    this->AngularDampingOverride = 0.00f;
    this->MassKgOverride = 1.00f;
    this->MassScaleOverride = 1.00f;
    this->GravityOverride = -980.00f;
    this->PhysicalMaterialOverride = NULL;
    this->SleepLinearVelocity = 20.00f;
    this->SleepAngularVelocity = 0.50f;
    this->TimeToSleep = 0.50f;
    this->TimeToDeactivate = -1.00f;
    this->MinHitImpulseForNotify = 0.00f;
    this->DamageImpulseMultiplier = 1.00f;
    this->MinDamageToImpulse = 0.00f;
    this->ImpactDamageData = NULL;
    this->EffectsData = NULL;
}


