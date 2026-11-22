#include "FortGameStateOutpost.h"
#include "Net/UnrealNetwork.h"

AFortGameStateOutpost::AFortGameStateOutpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowedToUpdateBackendDifficulty = true;
    this->bAllowedToOverrideBackendRewards = true;
    this->bOutpostDefenseActive = false;
    this->bWargameActive = false;
    this->StormShieldDefenseType = EStormShieldDefense::NotSSD;
    this->bOutpostStatusAllowsMissionStart = false;
    this->IronCityLowestPlayerAccountLevel = 0;
    this->IronCityMinPowerLevel = 0.00f;
    this->IronCityMaxPowerLevel = 10000000.00f;
    this->PlayerWeaponSkillLevel = -1.00f;
}

void AFortGameStateOutpost::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

void AFortGameStateOutpost::OnRep_PlayerWeaponSkillLevel() {
}

bool AFortGameStateOutpost::DoesOutpostStatusAllowMissionStart() const {
    return false;
}

void AFortGameStateOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateOutpost, bOutpostDefenseActive);
    DOREPLIFETIME(AFortGameStateOutpost, bWargameActive);
    DOREPLIFETIME(AFortGameStateOutpost, StormShieldDefenseType);
    DOREPLIFETIME(AFortGameStateOutpost, bOutpostStatusAllowsMissionStart);
    DOREPLIFETIME(AFortGameStateOutpost, PlayerWeaponSkillLevel);
}


