#include "FortGameStateDeployableBase.h"
#include "Net/UnrealNetwork.h"

AFortGameStateDeployableBase::AFortGameStateDeployableBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowedToUpdateBackendDifficulty = true;
    this->bAllowBuildingCostMods = false;
    this->bFreeBuildingRepairs = true;
    this->DeployableBaseManager = NULL;
    this->bFireEndOfDayDelegate = true;
}

bool AFortGameStateDeployableBase::ShouldUseStormShield() const {
    return false;
}

bool AFortGameStateDeployableBase::ShouldRespawnAtLastPawnLocation() const {
    return false;
}

void AFortGameStateDeployableBase::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

void AFortGameStateDeployableBase::SetGameDifficultyExplicitly(const float InGameDifficulty) {
}

void AFortGameStateDeployableBase::OnRep_DeployableBaseManager() {
}

float AFortGameStateDeployableBase::GetStormShieldStartingRadiusOverride() const {
    return 0.0f;
}

float AFortGameStateDeployableBase::GetStormShieldEndingRadiusOverride() const {
    return 0.0f;
}

float AFortGameStateDeployableBase::GetStormShieldBreatherRadiusOverride() const {
    return 0.0f;
}

EDeployableBaseUseType AFortGameStateDeployableBase::GetDeployableBaseUseType() const {
    return EDeployableBaseUseType::Neighborhood;
}

void AFortGameStateDeployableBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateDeployableBase, DeployableBaseManager);
}


