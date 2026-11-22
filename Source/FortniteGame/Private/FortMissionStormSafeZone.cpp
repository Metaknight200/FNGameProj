#include "FortMissionStormSafeZone.h"
#include "Components/StaticMeshComponent.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

AFortMissionStormSafeZone::AFortMissionStormSafeZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Safe Zone Mesh"));
    this->SafeZoneMesh = (UStaticMeshComponent*)RootComponent;
    this->bScaleUniformly = true;
    this->bSafeZoneInStormStateChanged = false;
    this->SafeZoneRadius = 0.00f;
    this->AbilityComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability Component"));
}

void AFortMissionStormSafeZone::SetSafeZoneRadius(const float InRadius) {
}


void AFortMissionStormSafeZone::OnRep_ZoneRadius() {
}

void AFortMissionStormSafeZone::OnRep_SafeZoneInStormStateChanged() {
}


float AFortMissionStormSafeZone::GetSafeZoneRadius() const {
    return SafeZoneRadius;
}

float AFortMissionStormSafeZone::GetConvertedSafeZoneRadius() const {
    return 0.0f;
}

void AFortMissionStormSafeZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMissionStormSafeZone, bSafeZoneInStormStateChanged);
    DOREPLIFETIME(AFortMissionStormSafeZone, SafeZoneRadius);
}


