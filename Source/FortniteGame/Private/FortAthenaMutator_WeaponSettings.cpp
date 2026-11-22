#include "FortAthenaMutator_WeaponSettings.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_WeaponSettings::AFortAthenaMutator_WeaponSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bMutatorActive = true;
    this->bMutatesGameMode = true;
    this->bMutatesGameState = true;
}

void AFortAthenaMutator_WeaponSettings::RemoveDataSource(UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::AddDataSourceForTeam(UFortItemDefinition* ItemDefinition, const uint8 TeamIndex, UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::AddDataSourceForClassSlot(UFortItemDefinition* ItemDefinition, const uint8 ClassSlot, UObject* DataSource) {
}

void AFortAthenaMutator_WeaponSettings::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_WeaponSettings, WeaponSettings);
}


