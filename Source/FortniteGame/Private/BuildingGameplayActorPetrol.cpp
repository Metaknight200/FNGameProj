#include "BuildingGameplayActorPetrol.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

ABuildingGameplayActorPetrol::ABuildingGameplayActorPetrol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("NewSplatterDecalComponent"));
    this->SphereCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("NewUSphereComponent"));
    this->MaterialInstanceDynamic = NULL;
    this->SplatterDecal = (UDecalComponent*)RootComponent;
    this->DamageEffectClass = NULL;
    this->IgniteRange = 100.00f;
    this->DamageRange = 0.00f;
    this->CurrentSize = 0.15f;
    this->bIgnited = false;
    this->ProjectileCount = 1;
    this->SplatterMinDecalWidth = 0.25f;
    this->SplatterMaxDecalWidth = 0.45f;
}

void ABuildingGameplayActorPetrol::UpdateCurrentSize() {
}

void ABuildingGameplayActorPetrol::OnRep_ProjectileCount(int32 PrevProjectileCount) {
}

void ABuildingGameplayActorPetrol::OnRep_PrevPetrol() {
}

void ABuildingGameplayActorPetrol::OnRep_Ignited(bool bPrevIgnited) {
}



void ABuildingGameplayActorPetrol::IgniteTimerExpired() {
}

float ABuildingGameplayActorPetrol::GetTargetSize() const {
    return 0.0f;
}

int32 ABuildingGameplayActorPetrol::GetProjectileCount() const {
    return ProjectileCount;
}

float ABuildingGameplayActorPetrol::GetCurrentSize() const {
    return CurrentSize;
}


void ABuildingGameplayActorPetrol::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingGameplayActorPetrol, PrevPetrol);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, ImpactDirection);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, bIgnited);
    DOREPLIFETIME(ABuildingGameplayActorPetrol, ProjectileCount);
}


