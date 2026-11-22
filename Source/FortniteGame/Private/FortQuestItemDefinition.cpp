#include "FortQuestItemDefinition.h"
#include "EFortItemType.h"

UFortQuestItemDefinition::UFortQuestItemDefinition() {
    this->ItemType = EFortItemType::Quest;
    this->QuestType = EFortQuestType::Task;
    this->QuestSubtype = EFortQuestSubtype::None;
    this->bShouldDisplayOverallQuestInformation = false;
    this->bAthenaUpdateObjectiveOncePerMatch = false;
    this->bAthenaGrantRarityToken = true;
    this->bShouldAutoClaim = false;
    this->bShouldGetFullMatchProgress = false;
    this->bAthenaMustCompleteInSingleMatch = false;
    this->bUpdateObjectiveOncePerMatch = false;
    this->IsStreamingRequired = true;
    this->bExpandsStormShield = false;
    this->bHidden = false;
    this->CharacterCompletionAudioDelay = 0.25f;
    this->bSuppressQuestGrantedEvent = false;
    this->bInitiallySuppressedReplacementQuest = false;
    this->bIncludedInCategories = true;
    this->bAutoLaunch = false;
    this->bDeprecated = false;
    this->bDisableBackendConditionEvaluation = false;
    this->bAllowTileMatching = true;
    this->bAllowPlayNowNavigation = true;
    this->bAllowMissionAlertMatchesBypassingTileRequirements = false;
    this->bTutorialQuest = false;
    this->bHideStageDescription = false;
    this->bHideIncompleteObjectiveLocations = false;
    this->bIsShared = false;
    this->ExpirationDuration = 0;
    this->ObjectiveCompletionCount = -1;
    this->Threshold = 0;
    this->RewardsTable = NULL;
    this->Objectives.AddDefaulted(1);
    this->bGrantTransientQuestToSquad = false;
    this->bTransientAutoComplete = false;
    this->bAllowMultipleCompletionsPerMatch = false;
    this->Weight = 1.00f;
    this->GranterWindowPeriodMinutes = 240;
    this->GranterCooldownPeriodSeconds = 60;
    this->ClaimPriority = 1;
    this->SortPriority = 0;
    this->TransientQuestStage = 0;
    this->TransientQuestMaxStage = 0;
    this->bHideQuestProgressNotification = false;
    this->bHideQuestRewardNotification = false;
    this->bForceExpiryExport = false;
}

bool UFortQuestItemDefinition::ShouldDisplayOverallQuestInformation() const {
    return false;
}

bool UFortQuestItemDefinition::ShouldAutoLaunch() const {
    return false;
}

bool UFortQuestItemDefinition::IsTutorialQuest() const {
    return bTutorialQuest;
}

bool UFortQuestItemDefinition::IsPunchCardQuest() const {
    return false;
}

bool UFortQuestItemDefinition::IsIncludedInCategories() const {
    return bIncludedInCategories;
}

bool UFortQuestItemDefinition::IsHidden() const {
    return bHidden;
}

bool UFortQuestItemDefinition::IsGroupChallenge() const {
    return false;
}

bool UFortQuestItemDefinition::IsGlyphQuest() const {
    return false;
}

bool UFortQuestItemDefinition::IsFeatQuest() const {
    return false;
}

bool UFortQuestItemDefinition::IsDeprecated() const {
    return bDeprecated;
}

float UFortQuestItemDefinition::GetWeight() const {
    return Weight;
}

bool UFortQuestItemDefinition::GetUpdateObjectiveOncePerMatch() const {
    return bUpdateObjectiveOncePerMatch;
}

UFortTandemCharacterData* UFortQuestItemDefinition::GetTandemCharacterData() const {
    return NULL;
}

TSoftObjectPtr<UFortTandemCharacterData> UFortQuestItemDefinition::GetSoftTandemCharacterData() const {
    return NULL;
}

UFortConversation* UFortQuestItemDefinition::GetSelectRewardsConversation() const {
    return NULL;
}

TArray<FFortMcpQuestRewardInfo> UFortQuestItemDefinition::GetSelectableRewards_BP() const {
    return TArray<FFortMcpQuestRewardInfo>();
}

EFortQuestRewardType UFortQuestItemDefinition::GetRewardType() const {
    return EFortQuestRewardType::BasicRewards;
}

TArray<FFortItemQuantityPair> UFortQuestItemDefinition::GetRewards_BP() const {
    return TArray<FFortItemQuantityPair>();
}

FFortRewardInfo UFortQuestItemDefinition::GetRewardInfo_BP() const {
    return FFortRewardInfo{};
}

FText UFortQuestItemDefinition::GetRewardHeaderText() const {
    return FText::GetEmpty();
}

FText UFortQuestItemDefinition::GetRewardDescription() const {
    return FText::GetEmpty();
}

EFortQuestType UFortQuestItemDefinition::GetQuestType() const {
    return EFortQuestType::Task;
}

EFortQuestSubtype UFortQuestItemDefinition::GetQuestSubtype() const {
    return EFortQuestSubtype::None;
}

UFortQuestItemDefinition* UFortQuestItemDefinition::GetPrerequisiteQuest() const {
    return NULL;
}

FDataTableRowHandle UFortQuestItemDefinition::GetPrerequisiteObjective() const {
    return FDataTableRowHandle{};
}

int32 UFortQuestItemDefinition::GetPartialObjectiveCompletionCount() const {
    return 0;
}

TArray<FFortMcpQuestObjectiveInfo> UFortQuestItemDefinition::GetObjectives_BP() const {
    return TArray<FFortMcpQuestObjectiveInfo>();
}

int32 UFortQuestItemDefinition::GetObjectiveNeededToComplete() const {
    return 0;
}

UFortConversation* UFortQuestItemDefinition::GetIntroConversation() const {
    return NULL;
}

TArray<FFortHiddenRewardQuantityPair> UFortQuestItemDefinition::GetHiddenRewards_BP() const {
    return TArray<FFortHiddenRewardQuantityPair>();
}

FString UFortQuestItemDefinition::GetCompletionVideoUID() const {
    return TEXT("");
}

FText UFortQuestItemDefinition::GetCompletionText() const {
    return FText::GetEmpty();
}

UFortConversation* UFortQuestItemDefinition::GetClaimConversation() const {
    return NULL;
}

float UFortQuestItemDefinition::GetCharacterCompletionAudioDelay() const {
    return CharacterCompletionAudioDelay;
}

TSoftObjectPtr<USoundBase> UFortQuestItemDefinition::GetCharacterCompletionAudio() const {
    return NULL;
}

FFortRewardInfo UFortQuestItemDefinition::GetChallengeChainRewardInfo(bool bGetAllQuestRewards) const {
    return FFortRewardInfo{};
}

FDataTableRowHandle UFortQuestItemDefinition::GetCategory() const {
    return FDataTableRowHandle{};
}

bool UFortQuestItemDefinition::GetAthenaUpdateObjectiveOncePerMatch() const {
    return bAthenaUpdateObjectiveOncePerMatch;
}

bool UFortQuestItemDefinition::GetAthenaObjectiveMustBeCompletedInASingleMatch() const {
    return false;
}

bool UFortQuestItemDefinition::ExpandsStormShield() const {
    return false;
}

bool UFortQuestItemDefinition::CanProgressInBRWarmup() const {
    return false;
}

bool UFortQuestItemDefinition::CanPartyAssist() const {
    return false;
}

bool UFortQuestItemDefinition::AllowsTileMatching() const {
    return false;
}

bool UFortQuestItemDefinition::AllowsPlayNowNavigation() const {
    return false;
}


