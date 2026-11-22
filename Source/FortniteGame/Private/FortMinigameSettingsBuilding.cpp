#include "FortMinigameSettingsBuilding.h"
#include "FortCreativeVolumeLinkComponent.h"
#include "Net/UnrealNetwork.h"

AFortMinigameSettingsBuilding::AFortMinigameSettingsBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
    this->bShowPublishWatermark = true;
    this->bAllowOutOfBounds = true;
    this->bDeferDeletePlayerBuiltBuildingActorsForRollback = false;
    this->MinimumNumberOfPlayersUserSetting = 0;
    this->MaximumNumberOfPlayersUserSetting = 0;
    this->MmsType = EMMSRulePreset::Off;
    this->MmsPrivacy = EMMSPrivacy::Private;
    this->bPrefersRespectingPartiesFromMMS = false;
    this->MmsPlayerCount = 0;
    this->MmsPlayersPerTeam = EMMSPlayersPerTeamPreset::Dynamic;
    this->JoinInProgress = 0;
    this->ShowResourceFeedOnElimination = 0;
    this->SettingsVolume = NULL;
}

void AFortMinigameSettingsBuilding::UpdateMatchmakingSettings() {
}

void AFortMinigameSettingsBuilding::SetGameDescription(const FText& GameName, const TArray<FText>& GameDescriptionText) {
}

void AFortMinigameSettingsBuilding::OnRep_SettingsVolume() {
}

void AFortMinigameSettingsBuilding::OnRep_GameNameData() {
}

void AFortMinigameSettingsBuilding::OnRep_GameDescriptionData() {
}

void AFortMinigameSettingsBuilding::OnMinigameStarted() {
}

void AFortMinigameSettingsBuilding::OnMinigameSettingsBuildingShowPublishWatermarkChanged(AFortMinigameSettingsBuilding* MinigameSettingsBuilding, bool bNewShowPublishWatermark) {
}

void AFortMinigameSettingsBuilding::OnMinigameEnded() {
}

void AFortMinigameSettingsBuilding::OnLinkedVolumeSet(AFortVolume* PreviousVolume, AFortVolume* NewVolume) {
}


FText AFortMinigameSettingsBuilding::GetGameName() {
    return FText::GetEmpty();
}

TArray<FText> AFortMinigameSettingsBuilding::GetGameDescription() {
    return TArray<FText>();
}

void AFortMinigameSettingsBuilding::CheckShowPublishWatermarkChanged() {
}

void AFortMinigameSettingsBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameDescriptionData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, GameNameData);
    DOREPLIFETIME(AFortMinigameSettingsBuilding, SettingsVolume);
}


