#include "FortWeaponSettingsComponent.h"
#include "Net/UnrealNetwork.h"

UFortWeaponSettingsComponent::UFortWeaponSettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPickAxe = false;
    this->ItemDefinition = NULL;
    this->TeamIndex = 255;
    this->ClassSlot = 255;
    this->RangeMultiplier = 1.00f;
    this->ConeAngleMultiplier = 1.00f;
    this->Enabled = 1;
    this->DataSource = NULL;
}

void UFortWeaponSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortWeaponSettingsComponent, bPickAxe);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ItemDefinition);
    DOREPLIFETIME(UFortWeaponSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ClassSlot);
    DOREPLIFETIME(UFortWeaponSettingsComponent, RangeMultiplier);
    DOREPLIFETIME(UFortWeaponSettingsComponent, ConeAngleMultiplier);
    DOREPLIFETIME(UFortWeaponSettingsComponent, Enabled);
    DOREPLIFETIME(UFortWeaponSettingsComponent, OverriddenPropertyNames);
}


